/********************************************************************************
** Form generated from reading UI file 'newton_crit.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWTON_CRIT_H
#define UI_NEWTON_CRIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Newton_crit
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *inc_rb;
    QRadioButton *grad_rb;
    QRadioButton *f_rb;
    QPushButton *plot_button;

    void setupUi(QDialog *Newton_crit)
    {
        if (Newton_crit->objectName().isEmpty())
            Newton_crit->setObjectName(QString::fromUtf8("Newton_crit"));
        Newton_crit->resize(400, 300);
        groupBox = new QGroupBox(Newton_crit);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 40, 202, 108));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        inc_rb = new QRadioButton(groupBox);
        inc_rb->setObjectName(QString::fromUtf8("inc_rb"));
        inc_rb->setChecked(true);

        verticalLayout->addWidget(inc_rb);

        grad_rb = new QRadioButton(groupBox);
        grad_rb->setObjectName(QString::fromUtf8("grad_rb"));

        verticalLayout->addWidget(grad_rb);

        f_rb = new QRadioButton(groupBox);
        f_rb->setObjectName(QString::fromUtf8("f_rb"));

        verticalLayout->addWidget(f_rb);

        plot_button = new QPushButton(Newton_crit);
        plot_button->setObjectName(QString::fromUtf8("plot_button"));
        plot_button->setGeometry(QRect(270, 250, 75, 24));

        retranslateUi(Newton_crit);

        QMetaObject::connectSlotsByName(Newton_crit);
    } // setupUi

    void retranslateUi(QDialog *Newton_crit)
    {
        Newton_crit->setWindowTitle(QCoreApplication::translate("Newton_crit", "Newton method", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Newton_crit", "Stop criterion", nullptr));
        inc_rb->setText(QCoreApplication::translate("Newton_crit", "||x_n-x_{n-1}||<eps", nullptr));
        grad_rb->setText(QCoreApplication::translate("Newton_crit", "|grad(f(x_n))|<eps", nullptr));
        f_rb->setText(QCoreApplication::translate("Newton_crit", "|(f(x_n)-f(x_{n-1}))/f(x_n)|<eps", nullptr));
        plot_button->setText(QCoreApplication::translate("Newton_crit", "plot", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Newton_crit: public Ui_Newton_crit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWTON_CRIT_H
