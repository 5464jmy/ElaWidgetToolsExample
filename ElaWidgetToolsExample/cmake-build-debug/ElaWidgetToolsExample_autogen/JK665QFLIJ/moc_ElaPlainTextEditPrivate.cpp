/****************************************************************************
** Meta object code from reading C++ file 'ElaPlainTextEditPrivate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../element/ElaWidgetTools/private/ElaPlainTextEditPrivate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaPlainTextEditPrivate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElaPlainTextEditPrivate_t {
    QByteArrayData data[7];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ElaPlainTextEditPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ElaPlainTextEditPrivate_t qt_meta_stringdata_ElaPlainTextEditPrivate = {
    {
QT_MOC_LITERAL(0, 0, 23), // "ElaPlainTextEditPrivate"
QT_MOC_LITERAL(1, 24, 14), // "onThemeChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 23), // "ElaThemeType::ThemeMode"
QT_MOC_LITERAL(4, 64, 9), // "themeMode"
QT_MOC_LITERAL(5, 74, 22), // "onWMWindowClickedEvent"
QT_MOC_LITERAL(6, 97, 4) // "data"

    },
    "ElaPlainTextEditPrivate\0onThemeChanged\0"
    "\0ElaThemeType::ThemeMode\0themeMode\0"
    "onWMWindowClickedEvent\0data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaPlainTextEditPrivate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // methods: parameters
    QMetaType::Void, QMetaType::QVariantMap,    6,

       0        // eod
};

void ElaPlainTextEditPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaPlainTextEditPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onThemeChanged((*reinterpret_cast< ElaThemeType::ThemeMode(*)>(_a[1]))); break;
        case 1: _t->onWMWindowClickedEvent((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ElaPlainTextEditPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ElaPlainTextEditPrivate.data,
    qt_meta_data_ElaPlainTextEditPrivate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ElaPlainTextEditPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaPlainTextEditPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaPlainTextEditPrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ElaPlainTextEditPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
