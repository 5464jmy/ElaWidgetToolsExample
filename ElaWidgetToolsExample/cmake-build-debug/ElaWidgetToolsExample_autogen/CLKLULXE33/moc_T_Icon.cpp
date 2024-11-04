/****************************************************************************
** Meta object code from reading C++ file 'T_Icon.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../ExamplePage/T_Icon.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'T_Icon.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_T_Icon_t {
    QByteArrayData data[6];
    char stringdata0[56];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_T_Icon_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_T_Icon_t qt_meta_stringdata_T_Icon = {
    {
QT_MOC_LITERAL(0, 0, 6), // "T_Icon"
QT_MOC_LITERAL(1, 7, 20), // "onSearchEditTextEdit"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 10), // "searchText"
QT_MOC_LITERAL(4, 40, 8), // "QWidget*"
QT_MOC_LITERAL(5, 49, 6) // "parent"

    },
    "T_Icon\0onSearchEditTextEdit\0\0searchText\0"
    "QWidget*\0parent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_T_Icon[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       2,   26, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // constructors: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    0x80000000 | 2,

 // constructors: name, argc, parameters, tag, flags
       0,    1,   22,    2, 0x0e /* Public */,
       0,    0,   25,    2, 0x2e /* Public | MethodCloned */,

       0        // eod
};

void T_Icon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { T_Icon *_r = new T_Icon((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { T_Icon *_r = new T_Icon();
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<T_Icon *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onSearchEditTextEdit((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject T_Icon::staticMetaObject = { {
    QMetaObject::SuperData::link<T_BasePage::staticMetaObject>(),
    qt_meta_stringdata_T_Icon.data,
    qt_meta_data_T_Icon,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *T_Icon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *T_Icon::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_T_Icon.stringdata0))
        return static_cast<void*>(this);
    return T_BasePage::qt_metacast(_clname);
}

int T_Icon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = T_BasePage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
