/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *Method_box;
    QVBoxLayout *verticalLayout;
    QRadioButton *Newton_rb;
    QRadioButton *RandomS_rb;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *Rosenbrock_rb;
    QRadioButton *sqr_rb;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QDoubleSpinBox *left_1;
    QDoubleSpinBox *right_1;
    QLabel *label_6;
    QDoubleSpinBox *left_2;
    QDoubleSpinBox *right_2;
    QGroupBox *groupBox_4;
    QFormLayout *formLayout;
    QLabel *label;
    QDoubleSpinBox *x_01;
    QLabel *label_2;
    QDoubleSpinBox *x_02;
    QPushButton *crit_button;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName(QString::fromUtf8("MainWidget"));
        MainWidget->resize(775, 494);
        gridLayout_2 = new QGridLayout(MainWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        Method_box = new QGroupBox(MainWidget);
        Method_box->setObjectName(QString::fromUtf8("Method_box"));
        verticalLayout = new QVBoxLayout(Method_box);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Newton_rb = new QRadioButton(Method_box);
        Newton_rb->setObjectName(QString::fromUtf8("Newton_rb"));
        Newton_rb->setEnabled(true);
        Newton_rb->setAcceptDrops(false);
        Newton_rb->setChecked(true);

        verticalLayout->addWidget(Newton_rb);

        RandomS_rb = new QRadioButton(Method_box);
        RandomS_rb->setObjectName(QString::fromUtf8("RandomS_rb"));

        verticalLayout->addWidget(RandomS_rb);


        gridLayout_2->addWidget(Method_box, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(MainWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        Rosenbrock_rb = new QRadioButton(groupBox_2);
        Rosenbrock_rb->setObjectName(QString::fromUtf8("Rosenbrock_rb"));
        Rosenbrock_rb->setChecked(true);

        verticalLayout_2->addWidget(Rosenbrock_rb);

        sqr_rb = new QRadioButton(groupBox_2);
        sqr_rb->setObjectName(QString::fromUtf8("sqr_rb"));

        verticalLayout_2->addWidget(sqr_rb);


        gridLayout_2->addWidget(groupBox_2, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(MainWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        left_1 = new QDoubleSpinBox(groupBox_3);
        left_1->setObjectName(QString::fromUtf8("left_1"));

        gridLayout->addWidget(left_1, 1, 1, 1, 1);

        right_1 = new QDoubleSpinBox(groupBox_3);
        right_1->setObjectName(QString::fromUtf8("right_1"));

        gridLayout->addWidget(right_1, 1, 2, 1, 1);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        left_2 = new QDoubleSpinBox(groupBox_3);
        left_2->setObjectName(QString::fromUtf8("left_2"));

        gridLayout->addWidget(left_2, 2, 1, 1, 1);

        right_2 = new QDoubleSpinBox(groupBox_3);
        right_2->setObjectName(QString::fromUtf8("right_2"));

        gridLayout->addWidget(right_2, 2, 2, 1, 1);


        gridLayout_2->addWidget(groupBox_3, 1, 0, 1, 1);

        groupBox_4 = new QGroupBox(MainWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        formLayout = new QFormLayout(groupBox_4);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox_4);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        x_01 = new QDoubleSpinBox(groupBox_4);
        x_01->setObjectName(QString::fromUtf8("x_01"));

        formLayout->setWidget(0, QFormLayout::FieldRole, x_01);

        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        x_02 = new QDoubleSpinBox(groupBox_4);
        x_02->setObjectName(QString::fromUtf8("x_02"));

        formLayout->setWidget(1, QFormLayout::FieldRole, x_02);


        gridLayout_2->addWidget(groupBox_4, 1, 1, 1, 1);

        crit_button = new QPushButton(MainWidget);
        crit_button->setObjectName(QString::fromUtf8("crit_button"));

        gridLayout_2->addWidget(crit_button, 2, 1, 1, 1);


        retranslateUi(MainWidget);

        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QCoreApplication::translate("MainWidget", "MainWidget", nullptr));
        Method_box->setTitle(QCoreApplication::translate("MainWidget", "Method", nullptr));
        Newton_rb->setText(QCoreApplication::translate("MainWidget", "Newton's method", nullptr));
        RandomS_rb->setText(QCoreApplication::translate("MainWidget", "Random search", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWidget", "Function", nullptr));
        Rosenbrock_rb->setText(QCoreApplication::translate("MainWidget", "Rosenbrock", nullptr));
        sqr_rb->setText(QCoreApplication::translate("MainWidget", "x^2+y^2", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWidget", "Area", nullptr));
        label_3->setText(QCoreApplication::translate("MainWidget", "Left", nullptr));
        label_4->setText(QCoreApplication::translate("MainWidget", "Right", nullptr));
        label_5->setText(QCoreApplication::translate("MainWidget", "x", nullptr));
        label_6->setText(QCoreApplication::translate("MainWidget", "y", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWidget", "Init point", nullptr));
        label->setText(QCoreApplication::translate("MainWidget", "x", nullptr));
        label_2->setText(QCoreApplication::translate("MainWidget", "y", nullptr));
        crit_button->setText(QCoreApplication::translate("MainWidget", "next", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
