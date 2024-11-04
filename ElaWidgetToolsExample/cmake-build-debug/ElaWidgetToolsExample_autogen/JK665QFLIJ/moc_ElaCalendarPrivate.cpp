/****************************************************************************
** Meta object code from reading C++ file 'ElaCalendarPrivate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../element/ElaWidgetTools/private/ElaCalendarPrivate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaCalendarPrivate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElaCalendarPrivate_t {
    QByteArrayData data[12];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ElaCalendarPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ElaCalendarPrivate_t qt_meta_stringdata_ElaCalendarPrivate = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ElaCalendarPrivate"
QT_MOC_LITERAL(1, 19, 17), // "pZoomRatioChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 18), // "pPixOpacityChanged"
QT_MOC_LITERAL(4, 57, 21), // "onSwitchButtonClicked"
QT_MOC_LITERAL(5, 79, 21), // "onCalendarViewClicked"
QT_MOC_LITERAL(6, 101, 11), // "QModelIndex"
QT_MOC_LITERAL(7, 113, 5), // "index"
QT_MOC_LITERAL(8, 119, 17), // "onUpButtonClicked"
QT_MOC_LITERAL(9, 137, 19), // "onDownButtonClicked"
QT_MOC_LITERAL(10, 157, 10), // "pZoomRatio"
QT_MOC_LITERAL(11, 168, 11) // "pPixOpacity"

    },
    "ElaCalendarPrivate\0pZoomRatioChanged\0"
    "\0pPixOpacityChanged\0onSwitchButtonClicked\0"
    "onCalendarViewClicked\0QModelIndex\0"
    "index\0onUpButtonClicked\0onDownButtonClicked\0"
    "pZoomRatio\0pPixOpacity"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaCalendarPrivate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   52, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   46,    2, 0x0a /* Public */,
       5,    1,   47,    2, 0x0a /* Public */,
       8,    0,   50,    2, 0x0a /* Public */,
       9,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::QReal, 0x00495003,
      11, QMetaType::QReal, 0x00495003,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void ElaCalendarPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaCalendarPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pZoomRatioChanged(); break;
        case 1: _t->pPixOpacityChanged(); break;
        case 2: _t->onSwitchButtonClicked(); break;
        case 3: _t->onCalendarViewClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->onUpButtonClicked(); break;
        case 5: _t->onDownButtonClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaCalendarPrivate::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaCalendarPrivate::pZoomRatioChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElaCalendarPrivate::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaCalendarPrivate::pPixOpacityChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ElaCalendarPrivate *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->_pZoomRatio; break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->_pPixOpacity; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ElaCalendarPrivate *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_pZoomRatio != *reinterpret_cast< qreal*>(_v)) {
                _t->_pZoomRatio = *reinterpret_cast< qreal*>(_v);
                Q_EMIT _t->pZoomRatioChanged();
            }
            break;
        case 1:
            if (_t->_pPixOpacity != *reinterpret_cast< qreal*>(_v)) {
                _t->_pPixOpacity = *reinterpret_cast< qreal*>(_v);
                Q_EMIT _t->pPixOpacityChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ElaCalendarPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ElaCalendarPrivate.data,
    qt_meta_data_ElaCalendarPrivate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ElaCalendarPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaCalendarPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaCalendarPrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ElaCalendarPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void ElaCalendarPrivate::pZoomRatioChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ElaCalendarPrivate::pPixOpacityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
