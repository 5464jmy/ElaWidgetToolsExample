/****************************************************************************
** Meta object code from reading C++ file 'ElaTabWidgetPrivate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../element/ElaWidgetTools/private/ElaTabWidgetPrivate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaTabWidgetPrivate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElaTabWidgetPrivate_t {
    QByteArrayData data[11];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ElaTabWidgetPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ElaTabWidgetPrivate_t qt_meta_stringdata_ElaTabWidgetPrivate = {
    {
QT_MOC_LITERAL(0, 0, 19), // "ElaTabWidgetPrivate"
QT_MOC_LITERAL(1, 20, 13), // "onTabBarPress"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 5), // "index"
QT_MOC_LITERAL(4, 41, 15), // "onTabDragCreate"
QT_MOC_LITERAL(5, 57, 6), // "QDrag*"
QT_MOC_LITERAL(6, 64, 4), // "drag"
QT_MOC_LITERAL(7, 69, 13), // "onTabDragDrop"
QT_MOC_LITERAL(8, 83, 16), // "const QMimeData*"
QT_MOC_LITERAL(9, 100, 8), // "mimeData"
QT_MOC_LITERAL(10, 109, 19) // "onTabCloseRequested"

    },
    "ElaTabWidgetPrivate\0onTabBarPress\0\0"
    "index\0onTabDragCreate\0QDrag*\0drag\0"
    "onTabDragDrop\0const QMimeData*\0mimeData\0"
    "onTabCloseRequested"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaTabWidgetPrivate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    1,   37,    2, 0x0a /* Public */,
       7,    1,   40,    2, 0x0a /* Public */,
      10,    1,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void ElaTabWidgetPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaTabWidgetPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onTabBarPress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onTabDragCreate((*reinterpret_cast< QDrag*(*)>(_a[1]))); break;
        case 2: _t->onTabDragDrop((*reinterpret_cast< const QMimeData*(*)>(_a[1]))); break;
        case 3: _t->onTabCloseRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDrag* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ElaTabWidgetPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ElaTabWidgetPrivate.data,
    qt_meta_data_ElaTabWidgetPrivate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ElaTabWidgetPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaTabWidgetPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaTabWidgetPrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ElaTabWidgetPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
