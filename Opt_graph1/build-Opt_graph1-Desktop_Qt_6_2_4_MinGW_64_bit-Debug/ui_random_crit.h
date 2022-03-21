/********************************************************************************
** Form generated from reading UI file 'random_crit.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANDOM_CRIT_H
#define UI_RANDOM_CRIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Random_crit
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *inc_rb;
    QRadioButton *iter_rb;
    QPushButton *plot_button;

    void setupUi(QWidget *Random_crit)
    {
        if (Random_crit->objectName().isEmpty())
            Random_crit->setObjectName(QString::fromUtf8("Random_crit"));
        Random_crit->resize(400, 300);
        groupBox = new QGroupBox(Random_crit);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(60, 110, 264, 82));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        inc_rb = new QRadioButton(groupBox);
        inc_rb->setObjectName(QString::fromUtf8("inc_rb"));
        inc_rb->setChecked(true);

        verticalLayout->addWidget(inc_rb);

        iter_rb = new QRadioButton(groupBox);
        iter_rb->setObjectName(QString::fromUtf8("iter_rb"));

        verticalLayout->addWidget(iter_rb);

        plot_button = new QPushButton(Random_crit);
        plot_button->setObjectName(QString::fromUtf8("plot_button"));
        plot_button->setGeometry(QRect(280, 240, 75, 24));

        retranslateUi(Random_crit);

        QMetaObject::connectSlotsByName(Random_crit);
    } // setupUi

    void retranslateUi(QWidget *Random_crit)
    {
        Random_crit->setWindowTitle(QCoreApplication::translate("Random_crit", "Random search", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Random_crit", "Stop criterion", nullptr));
        inc_rb->setText(QCoreApplication::translate("Random_crit", "||x_n-x_{n-1}||<eps (for x_n!=x_{n-1})", nullptr));
        iter_rb->setText(QCoreApplication::translate("Random_crit", "number of iterations since the last change", nullptr));
        plot_button->setText(QCoreApplication::translate("Random_crit", "Plot", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Random_crit: public Ui_Random_crit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANDOM_CRIT_H
