#include "random_crit.h"
#include "ui_random_crit.h"

Random_crit::Random_crit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Random_crit)
{
    ui->setupUi(this);

    ui->n->setMinimum(m);
    ui->m->setMinimum(1);
    ui->eps->setMinimum( numeric_limits<double>::epsilon());
    ui->delta->setMinimum( numeric_limits<double>::epsilon());
    ui->p->setMinimum( numeric_limits<double>::epsilon());

    ui->n->setMaximum(INFINITY);
    ui->m->setMaximum(n);

    ui->n->setValue(n);
    ui->m->setValue(m);
    ui->eps->setValue(eps);
    ui->delta->setValue(delta);
    ui->p->setValue(p);
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
    try{
    n=ui->n->value();
    eps=ui->eps->value();
    delta=ui->delta->value();
    p=ui->p->value();
    m=ui->m->value();

    if(ui->inc_rb->isChecked())
        stop_crit = new Stop_crit_random_search_dif(n, eps); else
            stop_crit = new Stop_crit_random_search_last_change(n,m);

    rs = new Random_search(dom, opt_fun, stop_crit,delta,p);
    vector<vector<double>> X_n = rs->optim(x_0);






    hm.set(dom,opt_fun,X_n);
    }catch (const std::exception& e) {
               QMessageBox::warning(this, "Exception", e.what());
           }
}


void Random_crit::on_n_valueChanged(int arg1)
{
    ui->m->setMaximum(arg1);
}


void Random_crit::on_m_valueChanged(int arg1)
{
        ui->n->setMinimum(arg1);
}

