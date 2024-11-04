/****************************************************************************
** Meta object code from reading C++ file 'ElaToolTip.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../element/ElaWidgetTools/include/ElaToolTip.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaToolTip.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElaToolTip_t {
    QByteArrayData data[15];
    char stringdata0[223];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ElaToolTip_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ElaToolTip_t qt_meta_stringdata_ElaToolTip = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ElaToolTip"
QT_MOC_LITERAL(1, 11, 20), // "pBorderRadiusChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 19), // "pDisplayMsecChanged"
QT_MOC_LITERAL(4, 53, 21), // "pShowDelayMsecChanged"
QT_MOC_LITERAL(5, 75, 21), // "pHideDelayMsecChanged"
QT_MOC_LITERAL(6, 97, 15), // "pToolTipChanged"
QT_MOC_LITERAL(7, 113, 20), // "pCustomWidgetChanged"
QT_MOC_LITERAL(8, 134, 13), // "pBorderRadius"
QT_MOC_LITERAL(9, 148, 12), // "pDisplayMsec"
QT_MOC_LITERAL(10, 161, 14), // "pShowDelayMsec"
QT_MOC_LITERAL(11, 176, 14), // "pHideDelayMsec"
QT_MOC_LITERAL(12, 191, 8), // "pToolTip"
QT_MOC_LITERAL(13, 200, 13), // "pCustomWidget"
QT_MOC_LITERAL(14, 214, 8) // "QWidget*"

    },
    "ElaToolTip\0pBorderRadiusChanged\0\0"
    "pDisplayMsecChanged\0pShowDelayMsecChanged\0"
    "pHideDelayMsecChanged\0pToolTipChanged\0"
    "pCustomWidgetChanged\0pBorderRadius\0"
    "pDisplayMsec\0pShowDelayMsec\0pHideDelayMsec\0"
    "pToolTip\0pCustomWidget\0QWidget*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaToolTip[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       6,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    0,   48,    2, 0x06 /* Public */,
       7,    0,   49,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::Int, 0x00495003,
       9, QMetaType::Int, 0x00495003,
      10, QMetaType::Int, 0x00495003,
      11, QMetaType::Int, 0x00495003,
      12, QMetaType::QString, 0x00495003,
      13, 0x80000000 | 14, 0x0049500b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,

       0        // eod
};

void ElaToolTip::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaToolTip *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pBorderRadiusChanged(); break;
        case 1: _t->pDisplayMsecChanged(); break;
        case 2: _t->pShowDelayMsecChanged(); break;
        case 3: _t->pHideDelayMsecChanged(); break;
        case 4: _t->pToolTipChanged(); break;
        case 5: _t->pCustomWidgetChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaToolTip::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaToolTip::pBorderRadiusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElaToolTip::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaToolTip::pDisplayMsecChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ElaToolTip::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaToolTip::pShowDelayMsecChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ElaToolTip::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaToolTip::pHideDelayMsecChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ElaToolTip::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaToolTip::pToolTipChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ElaToolTip::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaToolTip::pCustomWidgetChanged)) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ElaToolTip *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getBorderRadius(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getDisplayMsec(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getShowDelayMsec(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getHideDelayMsec(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->getToolTip(); break;
        case 5: *reinterpret_cast< QWidget**>(_v) = _t->getCustomWidget(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ElaToolTip *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBorderRadius(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setDisplayMsec(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setShowDelayMsec(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setHideDelayMsec(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setToolTip(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setCustomWidget(*reinterpret_cast< QWidget**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ElaToolTip::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ElaToolTip.data,
    qt_meta_data_ElaToolTip,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ElaToolTip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaToolTip::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaToolTip.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ElaToolTip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ElaToolTip::pBorderRadiusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ElaToolTip::pDisplayMsecChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ElaToolTip::pShowDelayMsecChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ElaToolTip::pHideDelayMsecChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ElaToolTip::pToolTipChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ElaToolTip::pCustomWidgetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
