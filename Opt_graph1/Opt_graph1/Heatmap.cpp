#include "Heatmap.h"

HeatMap::HeatMap() {

}

HeatMap::HeatMap(Dom * dom, Opt_fun * opt_fun, vector<vector<double> > X_n)
{
    set(dom,opt_fun,X_n);
};

void HeatMap::set(Dom * dom, Opt_fun * opt_fun, vector<vector<double> > X_n)
{

    int width = 1280, height = 720;
    vector<vector<double>> map {};
    vector<double> temp{};

    vector<double> left = dom->get_left();
    vector<double> right = dom->get_right();

    double step_w = (right[0] - left[0]) / width;
    double step_h = (right[1]-left[0]) / height;
    double pos_h = right[1];
    double pos_w = left[0];

    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            temp.push_back(opt_fun->calc(vector<double>{pos_w, pos_h}));
            pos_w += step_w;
        }
        map.push_back(temp);
        temp.clear();
        pos_w =left[0];
        pos_h -= step_h;
    }

    vector<vector<int>> x_coord{};

    for (vector<double> v:X_n) {
        x_coord.push_back({
                              (int) (width * (v[0] - left[0]) / (right[0] - left[0])),
                              height - (int) (height * (v[1] - left[1]) / (right[1]- left[1]))
                          });
    }


    double max = map[0][0];
    double min = map[0][0];

    for(int i = 0; i < height; ++i){
        for(int j = 0; j < width; ++j) {
            if(map[i][j] > max) max = map[i][j];
            if(map[i][j] < min) min = map[i][j];
        }
    };
    if(image)
        delete image;
    image = new QImage(width, height, QImage::Format_RGB32);

    int Rv = 0;

    for(int i = 0; i < height; ++i) {
        for(int j = 0; j < width; ++j) {
                Rv = (int) (256 * (map[i][j] - min) / (max - min));
                QRgb value = qRgb(Rv, 0, Rv);
                image->setPixel(j, i, value);
        }
    };

    resize(width, height);

    mainFrame = QPixmap::fromImage(*image);

    QPainter p(&mainFrame);
    p.setPen(Qt::green);

    for(unsigned i=0;i<x_coord.size()-1;++i)
        p.drawLine(x_coord[i][0],x_coord[i][1],x_coord[i+1][0],x_coord[i+1][1]);

    p.setPen(Qt::green);
    p.setBrush(Qt::green);

    QFont font = p.font();
    p.setFont(font);

    /*for (unsigned i = 0; i < x_coord.size(); i +=(1>int(pow(10, int(log10(x_coord.size() - 1)))))?1:int(pow(10, int(log10(x_coord.size() - 1))))) {
         p.drawEllipse(QPointF(x_coord[i][0],x_coord[i][1]), 3, 3);
          p.drawText(QPointF(x_coord[i][0],x_coord[i][1]), ("(" + std::to_string(X_n[i][0]) + ", " + std::to_string(X_n[i][1]) + ")").c_str());
    }
*/

    p.drawText(QPointF(x_coord[0][0],x_coord[0][1]), ("(" + std::to_string(X_n[0][0]) + ", " + std::to_string(X_n[0][1]) + ") "+std::to_string(opt_fun->calc(X_n[0]))).c_str());
    p.drawText(QPointF(x_coord[x_coord.size()-1][0],x_coord[x_coord.size()-1][1]), ("(" + std::to_string(X_n[x_coord.size()-1][0]) + ", " + std::to_string(X_n[x_coord.size()-1][1]) + ") "+std::to_string(opt_fun->calc(X_n[x_coord.size()-1]))).c_str());
    p.end();


    this->setPixmap(mainFrame);

    this->show();
}

HeatMap::~HeatMap()
{
    delete image;
}
