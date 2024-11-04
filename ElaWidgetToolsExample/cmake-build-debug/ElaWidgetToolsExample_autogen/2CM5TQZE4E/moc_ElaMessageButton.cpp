/****************************************************************************
** Meta object code from reading C++ file 'ElaMessageButton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../element/ElaWidgetTools/include/ElaMessageButton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaMessageButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElaMessageButton_t {
    QByteArrayData data[19];
    char stringdata0[333];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ElaMessageButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ElaMessageButton_t qt_meta_stringdata_ElaMessageButton = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ElaMessageButton"
QT_MOC_LITERAL(1, 17, 20), // "pBorderRadiusChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 16), // "pBarTitleChanged"
QT_MOC_LITERAL(4, 56, 15), // "pBarTextChanged"
QT_MOC_LITERAL(5, 72, 19), // "pDisplayMsecChanged"
QT_MOC_LITERAL(6, 92, 27), // "pMessageTargetWidgetChanged"
QT_MOC_LITERAL(7, 120, 19), // "pMessageModeChanged"
QT_MOC_LITERAL(8, 140, 22), // "pPositionPolicyChanged"
QT_MOC_LITERAL(9, 163, 13), // "pBorderRadius"
QT_MOC_LITERAL(10, 177, 9), // "pBarTitle"
QT_MOC_LITERAL(11, 187, 8), // "pBarText"
QT_MOC_LITERAL(12, 196, 12), // "pDisplayMsec"
QT_MOC_LITERAL(13, 209, 20), // "pMessageTargetWidget"
QT_MOC_LITERAL(14, 230, 8), // "QWidget*"
QT_MOC_LITERAL(15, 239, 12), // "pMessageMode"
QT_MOC_LITERAL(16, 252, 30), // "ElaMessageBarType::MessageMode"
QT_MOC_LITERAL(17, 283, 15), // "pPositionPolicy"
QT_MOC_LITERAL(18, 299, 33) // "ElaMessageBarType::PositionPo..."

    },
    "ElaMessageButton\0pBorderRadiusChanged\0"
    "\0pBarTitleChanged\0pBarTextChanged\0"
    "pDisplayMsecChanged\0pMessageTargetWidgetChanged\0"
    "pMessageModeChanged\0pPositionPolicyChanged\0"
    "pBorderRadius\0pBarTitle\0pBarText\0"
    "pDisplayMsec\0pMessageTargetWidget\0"
    "QWidget*\0pMessageMode\0"
    "ElaMessageBarType::MessageMode\0"
    "pPositionPolicy\0ElaMessageBarType::PositionPolicy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaMessageButton[] = {

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
      10, QMetaType::QString, 0x00495003,
      11, QMetaType::QString, 0x00495003,
      12, QMetaType::Int, 0x00495003,
      13, 0x80000000 | 14, 0x0049500b,
      15, 0x80000000 | 16, 0x0049500b,
      17, 0x80000000 | 18, 0x0049500b,

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

void ElaMessageButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaMessageButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pBorderRadiusChanged(); break;
        case 1: _t->pBarTitleChanged(); break;
        case 2: _t->pBarTextChanged(); break;
        case 3: _t->pDisplayMsecChanged(); break;
        case 4: _t->pMessageTargetWidgetChanged(); break;
        case 5: _t->pMessageModeChanged(); break;
        case 6: _t->pPositionPolicyChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaMessageButton::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaMessageButton::pBorderRadiusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElaMessageButton::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaMessageButton::pBarTitleChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ElaMessageButton::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaMessageButton::pBarTextChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ElaMessageButton::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaMessageButton::pDisplayMsecChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ElaMessageButton::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaMessageButton::pMessageTargetWidgetChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ElaMessageButton::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaMessageButton::pMessageModeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ElaMessageButton::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaMessageButton::pPositionPolicyChanged)) {
                *result = 6;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ElaMessageButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getBorderRadius(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getBarTitle(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getBarText(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getDisplayMsec(); break;
        case 4: *reinterpret_cast< QWidget**>(_v) = _t->getMessageTargetWidget(); break;
        case 5: *reinterpret_cast< ElaMessageBarType::MessageMode*>(_v) = _t->getMessageMode(); break;
        case 6: *reinterpret_cast< ElaMessageBarType::PositionPolicy*>(_v) = _t->getPositionPolicy(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ElaMessageButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBorderRadius(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setBarTitle(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setBarText(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setDisplayMsec(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setMessageTargetWidget(*reinterpret_cast< QWidget**>(_v)); break;
        case 5: _t->setMessageMode(*reinterpret_cast< ElaMessageBarType::MessageMode*>(_v)); break;
        case 6: _t->setPositionPolicy(*reinterpret_cast< ElaMessageBarType::PositionPolicy*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject::SuperData qt_meta_extradata_ElaMessageButton[] = {
    QMetaObject::SuperData::link<ElaMessageBarType::staticMetaObject>(),
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject ElaMessageButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QPushButton::staticMetaObject>(),
    qt_meta_stringdata_ElaMessageButton.data,
    qt_meta_data_ElaMessageButton,
    qt_static_metacall,
    qt_meta_extradata_ElaMessageButton,
    nullptr
} };


const QMetaObject *ElaMessageButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaMessageButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaMessageButton.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int ElaMessageButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
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
void ElaMessageButton::pBorderRadiusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ElaMessageButton::pBarTitleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ElaMessageButton::pBarTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ElaMessageButton::pDisplayMsecChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ElaMessageButton::pMessageTargetWidgetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ElaMessageButton::pMessageModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ElaMessageButton::pPositionPolicyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
