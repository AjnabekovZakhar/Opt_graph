#ifndef OPTIMISER_HEATMAP_H
#define OPTIMISER_HEATMAP_H

#include <QImage>
#include <QPixmap>
#include <QLabel>
#include <qpainter.h>

#include"opt_method.h"

class HeatMap : public QLabel {
public:
    HeatMap();
    HeatMap(Dom*, Opt_fun*, vector<vector<double>>);
    void set(Dom*, Opt_fun*, vector<vector<double>>);
    ~HeatMap();

private:

    QImage* image = nullptr;
    QPixmap mainFrame;
    int width;
    int height;
};


#endif //OPTIMISER_HEATMAP_H
