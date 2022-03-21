#ifndef NEWTON_CRIT_H
#define NEWTON_CRIT_H

#include <QDialog>

#include "Heatmap.h"

#include"opt_method.h"

namespace Ui {
class Newton_crit;
}

class Newton_crit : public QDialog
{
    Q_OBJECT

public:
    explicit Newton_crit(QWidget *parent = nullptr);
    ~Newton_crit();

private:
    Ui::Newton_crit *ui;

    HeatMap hm;

    Opt_fun *opt_fun;
    Dom *dom;

    Stop_crit *stop_crit;

    int n = 1000;
    double eps =0.0000001;

    vector<double> x_0;

    Newton* Nwtn;


public slots:
    void slot(Opt_fun*, Dom*, vector<double>);
private slots:
    void on_plot_button_clicked();
};

#endif // NEWTON_CRIT_H
