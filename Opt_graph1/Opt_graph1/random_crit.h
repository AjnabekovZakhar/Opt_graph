#ifndef RANDOM_CRIT_H
#define RANDOM_CRIT_H

#include <QWidget>

#include"opt_method.h"

#include"Heatmap.h"

namespace Ui {
class Random_crit;
}

class Random_crit : public QWidget
{
    Q_OBJECT

public:
    explicit Random_crit(QWidget *parent = nullptr);
    ~Random_crit();

private:
    Ui::Random_crit *ui;

    Opt_fun *opt_fun;
    Dom *dom;

    Stop_crit *stop_crit;

    double delta=1;
    double p=0.5;

    int n = 1000;
    double eps =0.0000001;
    int m = 50;

    vector<double> x_0;

    Random_search* rs;

    HeatMap hm;

public slots:
    void slot(Opt_fun*, Dom*, vector<double>);
private slots:
    void on_plot_button_clicked();
};

#endif // RANDOM_CRIT_H
