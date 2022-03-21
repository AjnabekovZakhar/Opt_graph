/****************************************************************************
** Meta object code from reading C++ file 'mainwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Opt_graph1/mainwidget.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWidget_t {
    const uint offsetsAndSize[24];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWidget_t qt_meta_stringdata_MainWidget = {
    {
QT_MOC_LITERAL(0, 10), // "MainWidget"
QT_MOC_LITERAL(11, 6), // "signal"
QT_MOC_LITERAL(18, 0), // ""
QT_MOC_LITERAL(19, 8), // "Opt_fun*"
QT_MOC_LITERAL(28, 4), // "Dom*"
QT_MOC_LITERAL(33, 14), // "vector<double>"
QT_MOC_LITERAL(48, 22), // "on_crit_button_clicked"
QT_MOC_LITERAL(71, 23), // "on_right_1_valueChanged"
QT_MOC_LITERAL(95, 4), // "arg1"
QT_MOC_LITERAL(100, 22), // "on_left_1_valueChanged"
QT_MOC_LITERAL(123, 23), // "on_right_2_valueChanged"
QT_MOC_LITERAL(147, 22) // "on_left_2_valueChanged"

    },
    "MainWidget\0signal\0\0Opt_fun*\0Dom*\0"
    "vector<double>\0on_crit_button_clicked\0"
    "on_right_1_valueChanged\0arg1\0"
    "on_left_1_valueChanged\0on_right_2_valueChanged\0"
    "on_left_2_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   57,    2, 0x08,    5 /* Private */,
       7,    1,   58,    2, 0x08,    6 /* Private */,
       9,    1,   61,    2, 0x08,    8 /* Private */,
      10,    1,   64,    2, 0x08,   10 /* Private */,
      11,    1,   67,    2, 0x08,   12 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4, 0x80000000 | 5,    2,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Double,    8,

       0        // eod
};

void MainWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signal((*reinterpret_cast< std::add_pointer_t<Opt_fun*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Dom*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<vector<double>>>(_a[3]))); break;
        case 1: _t->on_crit_button_clicked(); break;
        case 2: _t->on_right_1_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 3: _t->on_left_1_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 4: _t->on_right_2_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 5: _t->on_left_2_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWidget::*)(Opt_fun * , Dom * , vector<double> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWidget::signal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MainWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MainWidget.offsetsAndSize,
    qt_meta_data_MainWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWidget_t
, QtPrivate::TypeAndForceComplete<MainWidget, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Opt_fun *, std::false_type>, QtPrivate::TypeAndForceComplete<Dom *, std::false_type>, QtPrivate::TypeAndForceComplete<vector<double>, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MainWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void MainWidget::signal(Opt_fun * _t1, Dom * _t2, vector<double> _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
