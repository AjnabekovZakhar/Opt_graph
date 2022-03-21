#include "newton_crit.h"
#include "ui_newton_crit.h"

Newton_crit::Newton_crit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Newton_crit)
{
    ui->setupUi(this);
}

Newton_crit::~Newton_crit()
{
    delete ui;
}

void Newton_crit::slot(Opt_fun *opt_fun_, Dom *dom_, vector<double>x_0_)
{
  opt_fun=opt_fun_;
  dom=dom_;
  x_0=x_0_;
}

void Newton_crit::on_plot_button_clicked()
{
    if(ui->inc_rb->isChecked())
        stop_crit = new Stop_crit_Newton_dif(n, eps); else if(ui->grad_rb->isChecked())
        stop_crit = new Stop_crit_Newton_grad(n, eps); else
        stop_crit = new Stop_crit_Newton3(n, eps);

    Nwtn = new Newton(dom,opt_fun,stop_crit);
    vector<vector<double>> X_n = Nwtn->optim(x_0);






    hm.set(dom,opt_fun,X_n);



}

