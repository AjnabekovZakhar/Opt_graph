#include "random_crit.h"
#include "ui_random_crit.h"

Random_crit::Random_crit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Random_crit)
{
    ui->setupUi(this);
}

Random_crit::~Random_crit()
{
    delete ui;
}

void Random_crit::slot(Opt_fun *opt_fun_, Dom *dom_, vector<double>x_0_)
{
  opt_fun=opt_fun_;
  dom=dom_;
  x_0=x_0_;
}

void Random_crit::on_plot_button_clicked()
{
    if(ui->inc_rb->isChecked())
        stop_crit = new Stop_crit_random_search_dif(n, eps); else
        stop_crit = new Stop_crit_random_search_last_change(n,m);

    rs = new Random_search(dom, opt_fun, stop_crit,1,0.5);
    vector<vector<double>> X_n = rs->optim(x_0);






    hm.set(dom,opt_fun,X_n);
}

