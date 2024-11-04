/****************************************************************************
** Meta object code from reading C++ file 'ElaGraphicsScene.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../element/ElaWidgetTools/include/ElaGraphicsScene.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaGraphicsScene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElaGraphicsScene_t {
    QByteArrayData data[12];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ElaGraphicsScene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ElaGraphicsScene_t qt_meta_stringdata_ElaGraphicsScene = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ElaGraphicsScene"
QT_MOC_LITERAL(1, 17, 23), // "pIsCheckLinkPortChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 21), // "pSerializePathChanged"
QT_MOC_LITERAL(4, 64, 12), // "showItemLink"
QT_MOC_LITERAL(5, 77, 20), // "mouseLeftClickedItem"
QT_MOC_LITERAL(6, 98, 16), // "ElaGraphicsItem*"
QT_MOC_LITERAL(7, 115, 4), // "item"
QT_MOC_LITERAL(8, 120, 21), // "mouseRightClickedItem"
QT_MOC_LITERAL(9, 142, 22), // "mouseDoubleClickedItem"
QT_MOC_LITERAL(10, 165, 16), // "pIsCheckLinkPort"
QT_MOC_LITERAL(11, 182, 14) // "pSerializePath"

    },
    "ElaGraphicsScene\0pIsCheckLinkPortChanged\0"
    "\0pSerializePathChanged\0showItemLink\0"
    "mouseLeftClickedItem\0ElaGraphicsItem*\0"
    "item\0mouseRightClickedItem\0"
    "mouseDoubleClickedItem\0pIsCheckLinkPort\0"
    "pSerializePath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaGraphicsScene[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,
       8,    1,   50,    2, 0x06 /* Public */,
       9,    1,   53,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,

 // properties: name, type, flags
      10, QMetaType::Bool, 0x00495003,
      11, QMetaType::QString, 0x00495003,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void ElaGraphicsScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaGraphicsScene *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pIsCheckLinkPortChanged(); break;
        case 1: _t->pSerializePathChanged(); break;
        case 2: _t->showItemLink(); break;
        case 3: _t->mouseLeftClickedItem((*reinterpret_cast< ElaGraphicsItem*(*)>(_a[1]))); break;
        case 4: _t->mouseRightClickedItem((*reinterpret_cast< ElaGraphicsItem*(*)>(_a[1]))); break;
        case 5: _t->mouseDoubleClickedItem((*reinterpret_cast< ElaGraphicsItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaGraphicsScene::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaGraphicsScene::pIsCheckLinkPortChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElaGraphicsScene::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaGraphicsScene::pSerializePathChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ElaGraphicsScene::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaGraphicsScene::showItemLink)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ElaGraphicsScene::*)(ElaGraphicsItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaGraphicsScene::mouseLeftClickedItem)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ElaGraphicsScene::*)(ElaGraphicsItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaGraphicsScene::mouseRightClickedItem)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ElaGraphicsScene::*)(ElaGraphicsItem * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaGraphicsScene::mouseDoubleClickedItem)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ElaGraphicsScene *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getIsCheckLinkPort(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getSerializePath(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ElaGraphicsScene *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIsCheckLinkPort(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setSerializePath(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ElaGraphicsScene::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsScene::staticMetaObject>(),
    qt_meta_stringdata_ElaGraphicsScene.data,
    qt_meta_data_ElaGraphicsScene,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ElaGraphicsScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaGraphicsScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaGraphicsScene.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsScene::qt_metacast(_clname);
}

int ElaGraphicsScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ElaGraphicsScene::pIsCheckLinkPortChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ElaGraphicsScene::pSerializePathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ElaGraphicsScene::showItemLink()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ElaGraphicsScene::mouseLeftClickedItem(ElaGraphicsItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ElaGraphicsScene::mouseRightClickedItem(ElaGraphicsItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ElaGraphicsScene::mouseDoubleClickedItem(ElaGraphicsItem * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
