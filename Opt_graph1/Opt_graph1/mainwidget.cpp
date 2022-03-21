#include "mainwidget.h"
#include "ui_mainwidget.h"


mt19937 SingletonGenerator::mersennetwister;

MainWidget::MainWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainWidget)
{
    SingletonGenerator::get_mt().seed(42);
    ui->setupUi(this);


    ui->left_1->setMinimum(-INFINITY);
    ui->left_2->setMinimum(-INFINITY);
    ui->left_1->setMaximum(right_1);
    ui->left_2->setMaximum(right_2);
    ui->left_1->setValue(left_1);
    ui->left_2->setValue(left_2);


    ui->right_1->setMinimum(left_1);
    ui->right_2->setMinimum(left_2);
    ui->right_1->setMaximum(INFINITY);
    ui->right_2->setMaximum(INFINITY);
    ui->right_1->setValue(right_1);
    ui->right_2->setValue(right_2);


    ui->x_01->setMinimum(left_1);
    ui->x_02->setMinimum(left_2);
    ui->x_01->setMaximum(right_1);
    ui->x_02->setMaximum(right_2);
    ui->x_01->setValue(x_01);
    ui->x_02->setValue(x_02);

}
MainWidget::~MainWidget()
{
    delete ui;
}

void MainWidget::on_crit_button_clicked()
{
    left_1= ui->left_1->value();
    left_2= ui->left_2->value();

    right_1=ui->right_1->value();
    right_2=ui->right_2->value();

    x_01=ui->x_01->value();
    x_02=ui->x_02->value();

    if(ui->Newton_rb->isChecked()){
        Newton_c = new Newton_crit;
        Newton_c->show();

        connect(this, &MainWidget::signal, Newton_c, &Newton_crit::slot);
    } else{
        Random_c = new Random_crit;
        Random_c->show();

        connect(this, &MainWidget::signal, Random_c, &Random_crit::slot);
    }

    dom = new Dom(2,{left_1,left_2},{right_1,right_2});

    if(ui->Rosenbrock_rb->isChecked())
        opt_fun = new Opt_fun2();
    else
        opt_fun = new Opt_fun1();

    emit signal(opt_fun,dom,{x_01,x_02});
}


void MainWidget::on_right_1_valueChanged(double arg1)
{
    ui->left_1->setMaximum(arg1);


    ui->x_01->setMaximum(arg1);
}


void MainWidget::on_left_1_valueChanged(double arg1)
{
    ui->right_1->setMinimum(arg1);

    ui->x_01->setMinimum(arg1);
}


void MainWidget::on_right_2_valueChanged(double arg1)
{
    ui->left_2->setMaximum(arg1);


    ui->x_02->setMaximum(arg1);
}


void MainWidget::on_left_2_valueChanged(double arg1)
{
    ui->right_2->setMinimum(arg1);

    ui->x_02->setMinimum(arg1);
}

