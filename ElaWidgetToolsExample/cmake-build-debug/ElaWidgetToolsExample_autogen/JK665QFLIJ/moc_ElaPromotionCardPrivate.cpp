/****************************************************************************
** Meta object code from reading C++ file 'ElaPromotionCardPrivate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../element/ElaWidgetTools/private/ElaPromotionCardPrivate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaPromotionCardPrivate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElaPromotionCardPrivate_t {
    QByteArrayData data[8];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ElaPromotionCardPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ElaPromotionCardPrivate_t qt_meta_stringdata_ElaPromotionCardPrivate = {
    {
QT_MOC_LITERAL(0, 0, 23), // "ElaPromotionCardPrivate"
QT_MOC_LITERAL(1, 24, 19), // "pPressRadiusChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 20), // "pHoverOpacityChanged"
QT_MOC_LITERAL(4, 66, 20), // "pPressOpacityChanged"
QT_MOC_LITERAL(5, 87, 12), // "pPressRadius"
QT_MOC_LITERAL(6, 100, 13), // "pHoverOpacity"
QT_MOC_LITERAL(7, 114, 13) // "pPressOpacity"

    },
    "ElaPromotionCardPrivate\0pPressRadiusChanged\0"
    "\0pHoverOpacityChanged\0pPressOpacityChanged\0"
    "pPressRadius\0pHoverOpacity\0pPressOpacity"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaPromotionCardPrivate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QReal, 0x00495003,
       6, QMetaType::QReal, 0x00495003,
       7, QMetaType::QReal, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void ElaPromotionCardPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaPromotionCardPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pPressRadiusChanged(); break;
        case 1: _t->pHoverOpacityChanged(); break;
        case 2: _t->pPressOpacityChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaPromotionCardPrivate::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaPromotionCardPrivate::pPressRadiusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElaPromotionCardPrivate::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaPromotionCardPrivate::pHoverOpacityChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ElaPromotionCardPrivate::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaPromotionCardPrivate::pPressOpacityChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ElaPromotionCardPrivate *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->_pPressRadius; break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->_pHoverOpacity; break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->_pPressOpacity; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ElaPromotionCardPrivate *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_pPressRadius != *reinterpret_cast< qreal*>(_v)) {
                _t->_pPressRadius = *reinterpret_cast< qreal*>(_v);
                Q_EMIT _t->pPressRadiusChanged();
            }
            break;
        case 1:
            if (_t->_pHoverOpacity != *reinterpret_cast< qreal*>(_v)) {
                _t->_pHoverOpacity = *reinterpret_cast< qreal*>(_v);
                Q_EMIT _t->pHoverOpacityChanged();
            }
            break;
        case 2:
            if (_t->_pPressOpacity != *reinterpret_cast< qreal*>(_v)) {
                _t->_pPressOpacity = *reinterpret_cast< qreal*>(_v);
                Q_EMIT _t->pPressOpacityChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ElaPromotionCardPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ElaPromotionCardPrivate.data,
    qt_meta_data_ElaPromotionCardPrivate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ElaPromotionCardPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaPromotionCardPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaPromotionCardPrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ElaPromotionCardPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ElaPromotionCardPrivate::pPressRadiusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ElaPromotionCardPrivate::pHoverOpacityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ElaPromotionCardPrivate::pPressOpacityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
