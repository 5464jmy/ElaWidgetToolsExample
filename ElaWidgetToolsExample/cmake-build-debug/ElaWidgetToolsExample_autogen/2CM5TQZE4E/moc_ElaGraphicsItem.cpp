/****************************************************************************
** Meta object code from reading C++ file 'ElaGraphicsItem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../element/ElaWidgetTools/include/ElaGraphicsItem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaGraphicsItem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElaGraphicsItem_t {
    QByteArrayData data[16];
    char stringdata0[236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ElaGraphicsItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ElaGraphicsItem_t qt_meta_stringdata_ElaGraphicsItem = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ElaGraphicsItem"
QT_MOC_LITERAL(1, 16, 13), // "pWidthChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 14), // "pHeightChanged"
QT_MOC_LITERAL(4, 46, 17), // "pItemImageChanged"
QT_MOC_LITERAL(5, 64, 25), // "pItemSelectedImageChanged"
QT_MOC_LITERAL(6, 90, 16), // "pItemNameChanged"
QT_MOC_LITERAL(7, 107, 18), // "pDataRoutesChanged"
QT_MOC_LITERAL(8, 126, 24), // "pMaxLinkPortCountChanged"
QT_MOC_LITERAL(9, 151, 6), // "pWidth"
QT_MOC_LITERAL(10, 158, 7), // "pHeight"
QT_MOC_LITERAL(11, 166, 10), // "pItemImage"
QT_MOC_LITERAL(12, 177, 18), // "pItemSelectedImage"
QT_MOC_LITERAL(13, 196, 9), // "pItemName"
QT_MOC_LITERAL(14, 206, 11), // "pDataRoutes"
QT_MOC_LITERAL(15, 218, 17) // "pMaxLinkPortCount"

    },
    "ElaGraphicsItem\0pWidthChanged\0\0"
    "pHeightChanged\0pItemImageChanged\0"
    "pItemSelectedImageChanged\0pItemNameChanged\0"
    "pDataRoutesChanged\0pMaxLinkPortCountChanged\0"
    "pWidth\0pHeight\0pItemImage\0pItemSelectedImage\0"
    "pItemName\0pDataRoutes\0pMaxLinkPortCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaGraphicsItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       7,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,
       5,    0,   52,    2, 0x06 /* Public */,
       6,    0,   53,    2, 0x06 /* Public */,
       7,    0,   54,    2, 0x06 /* Public */,
       8,    0,   55,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::Int, 0x00495003,
      10, QMetaType::Int, 0x00495003,
      11, QMetaType::QImage, 0x00495003,
      12, QMetaType::QImage, 0x00495003,
      13, QMetaType::QString, 0x00495003,
      14, QMetaType::QVariantMap, 0x00495003,
      15, QMetaType::Int, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,

       0        // eod
};

void ElaGraphicsItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaGraphicsItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pWidthChanged(); break;
        case 1: _t->pHeightChanged(); break;
        case 2: _t->pItemImageChanged(); break;
        case 3: _t->pItemSelectedImageChanged(); break;
        case 4: _t->pItemNameChanged(); break;
        case 5: _t->pDataRoutesChanged(); break;
        case 6: _t->pMaxLinkPortCountChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaGraphicsItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaGraphicsItem::pWidthChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElaGraphicsItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaGraphicsItem::pHeightChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ElaGraphicsItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaGraphicsItem::pItemImageChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ElaGraphicsItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaGraphicsItem::pItemSelectedImageChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ElaGraphicsItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaGraphicsItem::pItemNameChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ElaGraphicsItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaGraphicsItem::pDataRoutesChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ElaGraphicsItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaGraphicsItem::pMaxLinkPortCountChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ElaGraphicsItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getWidth(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getHeight(); break;
        case 2: *reinterpret_cast< QImage*>(_v) = _t->getItemImage(); break;
        case 3: *reinterpret_cast< QImage*>(_v) = _t->getItemSelectedImage(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->getItemName(); break;
        case 5: *reinterpret_cast< QVariantMap*>(_v) = _t->getDataRoutes(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->getMaxLinkPortCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ElaGraphicsItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWidth(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setHeight(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setItemImage(*reinterpret_cast< QImage*>(_v)); break;
        case 3: _t->setItemSelectedImage(*reinterpret_cast< QImage*>(_v)); break;
        case 4: _t->setItemName(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setDataRoutes(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 6: _t->setMaxLinkPortCount(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ElaGraphicsItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsObject::staticMetaObject>(),
    qt_meta_stringdata_ElaGraphicsItem.data,
    qt_meta_data_ElaGraphicsItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ElaGraphicsItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaGraphicsItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaGraphicsItem.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsObject::qt_metacast(_clname);
}

int ElaGraphicsItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ElaGraphicsItem::pWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ElaGraphicsItem::pHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ElaGraphicsItem::pItemImageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ElaGraphicsItem::pItemSelectedImageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ElaGraphicsItem::pItemNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ElaGraphicsItem::pDataRoutesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ElaGraphicsItem::pMaxLinkPortCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
