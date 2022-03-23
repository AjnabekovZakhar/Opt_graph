QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Expr.cpp \
    Heatmap.cpp \
    Something.cpp \
    Stop_crit.cpp \
    dom.cpp \
    main.cpp \
    mainwidget.cpp \
    newton_crit.cpp \
    opt_fun.cpp \
    opt_fun1_expr.cpp \
    opt_fun2_expr.cpp \
    opt_fun3_expr.cpp \
    opt_fun4_expr.cpp \
    opt_method.cpp \
    random_crit.cpp \
    sup_stop.cpp

HEADERS += \
    Expr.h \
    Heatmap.h \
    Something.h \
    Stop_crit.h \
    dom.h \
    mainwidget.h \
    newton_crit.h \
    opt_fun.h \
    opt_fun1_expr.h \
    opt_fun2_expr.h \
    opt_fun3_expr.h \
    opt_fun4_expr.h \
    opt_method.h \
    random_crit.h \
    sup_stop.h

FORMS += \
    mainwidget.ui \
    newton_crit.ui \
    random_crit.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
