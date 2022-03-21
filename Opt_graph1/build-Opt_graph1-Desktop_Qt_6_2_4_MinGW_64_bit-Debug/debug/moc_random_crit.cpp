/****************************************************************************
** Meta object code from reading C++ file 'random_crit.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Opt_graph1/random_crit.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'random_crit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Random_crit_t {
    const uint offsetsAndSize[14];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Random_crit_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Random_crit_t qt_meta_stringdata_Random_crit = {
    {
QT_MOC_LITERAL(0, 11), // "Random_crit"
QT_MOC_LITERAL(12, 4), // "slot"
QT_MOC_LITERAL(17, 0), // ""
QT_MOC_LITERAL(18, 8), // "Opt_fun*"
QT_MOC_LITERAL(27, 4), // "Dom*"
QT_MOC_LITERAL(32, 14), // "vector<double>"
QT_MOC_LITERAL(47, 22) // "on_plot_button_clicked"

    },
    "Random_crit\0slot\0\0Opt_fun*\0Dom*\0"
    "vector<double>\0on_plot_button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Random_crit[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   26,    2, 0x0a,    1 /* Public */,
       6,    0,   33,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4, 0x80000000 | 5,    2,    2,    2,
    QMetaType::Void,

       0        // eod
};

void Random_crit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Random_crit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slot((*reinterpret_cast< std::add_pointer_t<Opt_fun*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Dom*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<vector<double>>>(_a[3]))); break;
        case 1: _t->on_plot_button_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Random_crit::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Random_crit.offsetsAndSize,
    qt_meta_data_Random_crit,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Random_crit_t
, QtPrivate::TypeAndForceComplete<Random_crit, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<Opt_fun *, std::false_type>, QtPrivate::TypeAndForceComplete<Dom *, std::false_type>, QtPrivate::TypeAndForceComplete<vector<double>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Random_crit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Random_crit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Random_crit.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Random_crit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
