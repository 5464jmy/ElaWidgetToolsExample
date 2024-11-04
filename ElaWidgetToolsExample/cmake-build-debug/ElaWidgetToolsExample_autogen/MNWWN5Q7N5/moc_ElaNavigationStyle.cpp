/****************************************************************************
** Meta object code from reading C++ file 'ElaNavigationStyle.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../element/ElaWidgetTools/DeveloperComponents/ElaNavigationStyle.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaNavigationStyle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElaNavigationStyle_t {
    QByteArrayData data[16];
    char stringdata0[275];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ElaNavigationStyle_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ElaNavigationStyle_t qt_meta_stringdata_ElaNavigationStyle = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ElaNavigationStyle"
QT_MOC_LITERAL(1, 19, 15), // "pOpacityChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 14), // "pRotateChanged"
QT_MOC_LITERAL(4, 51, 18), // "pItemHeightChanged"
QT_MOC_LITERAL(5, 70, 25), // "pLastSelectMarkTopChanged"
QT_MOC_LITERAL(6, 96, 28), // "pLastSelectMarkBottomChanged"
QT_MOC_LITERAL(7, 125, 21), // "pSelectMarkTopChanged"
QT_MOC_LITERAL(8, 147, 24), // "pSelectMarkBottomChanged"
QT_MOC_LITERAL(9, 172, 8), // "pOpacity"
QT_MOC_LITERAL(10, 181, 7), // "pRotate"
QT_MOC_LITERAL(11, 189, 11), // "pItemHeight"
QT_MOC_LITERAL(12, 201, 18), // "pLastSelectMarkTop"
QT_MOC_LITERAL(13, 220, 21), // "pLastSelectMarkBottom"
QT_MOC_LITERAL(14, 242, 14), // "pSelectMarkTop"
QT_MOC_LITERAL(15, 257, 17) // "pSelectMarkBottom"

    },
    "ElaNavigationStyle\0pOpacityChanged\0\0"
    "pRotateChanged\0pItemHeightChanged\0"
    "pLastSelectMarkTopChanged\0"
    "pLastSelectMarkBottomChanged\0"
    "pSelectMarkTopChanged\0pSelectMarkBottomChanged\0"
    "pOpacity\0pRotate\0pItemHeight\0"
    "pLastSelectMarkTop\0pLastSelectMarkBottom\0"
    "pSelectMarkTop\0pSelectMarkBottom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaNavigationStyle[] = {

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
       9, QMetaType::QReal, 0x00495003,
      10, QMetaType::QReal, 0x00495003,
      11, QMetaType::Int, 0x00495003,
      12, QMetaType::QReal, 0x00495003,
      13, QMetaType::QReal, 0x00495003,
      14, QMetaType::QReal, 0x00495003,
      15, QMetaType::QReal, 0x00495003,

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

void ElaNavigationStyle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaNavigationStyle *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pOpacityChanged(); break;
        case 1: _t->pRotateChanged(); break;
        case 2: _t->pItemHeightChanged(); break;
        case 3: _t->pLastSelectMarkTopChanged(); break;
        case 4: _t->pLastSelectMarkBottomChanged(); break;
        case 5: _t->pSelectMarkTopChanged(); break;
        case 6: _t->pSelectMarkBottomChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaNavigationStyle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaNavigationStyle::pOpacityChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElaNavigationStyle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaNavigationStyle::pRotateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ElaNavigationStyle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaNavigationStyle::pItemHeightChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ElaNavigationStyle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaNavigationStyle::pLastSelectMarkTopChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ElaNavigationStyle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaNavigationStyle::pLastSelectMarkBottomChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ElaNavigationStyle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaNavigationStyle::pSelectMarkTopChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ElaNavigationStyle::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaNavigationStyle::pSelectMarkBottomChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ElaNavigationStyle *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->_pOpacity; break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->_pRotate; break;
        case 2: *reinterpret_cast< int*>(_v) = _t->_pItemHeight; break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->_pLastSelectMarkTop; break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->_pLastSelectMarkBottom; break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->_pSelectMarkTop; break;
        case 6: *reinterpret_cast< qreal*>(_v) = _t->_pSelectMarkBottom; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ElaNavigationStyle *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_pOpacity != *reinterpret_cast< qreal*>(_v)) {
                _t->_pOpacity = *reinterpret_cast< qreal*>(_v);
                Q_EMIT _t->pOpacityChanged();
            }
            break;
        case 1:
            if (_t->_pRotate != *reinterpret_cast< qreal*>(_v)) {
                _t->_pRotate = *reinterpret_cast< qreal*>(_v);
                Q_EMIT _t->pRotateChanged();
            }
            break;
        case 2:
            if (_t->_pItemHeight != *reinterpret_cast< int*>(_v)) {
                _t->_pItemHeight = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->pItemHeightChanged();
            }
            break;
        case 3:
            if (_t->_pLastSelectMarkTop != *reinterpret_cast< qreal*>(_v)) {
                _t->_pLastSelectMarkTop = *reinterpret_cast< qreal*>(_v);
                Q_EMIT _t->pLastSelectMarkTopChanged();
            }
            break;
        case 4:
            if (_t->_pLastSelectMarkBottom != *reinterpret_cast< qreal*>(_v)) {
                _t->_pLastSelectMarkBottom = *reinterpret_cast< qreal*>(_v);
                Q_EMIT _t->pLastSelectMarkBottomChanged();
            }
            break;
        case 5:
            if (_t->_pSelectMarkTop != *reinterpret_cast< qreal*>(_v)) {
                _t->_pSelectMarkTop = *reinterpret_cast< qreal*>(_v);
                Q_EMIT _t->pSelectMarkTopChanged();
            }
            break;
        case 6:
            if (_t->_pSelectMarkBottom != *reinterpret_cast< qreal*>(_v)) {
                _t->_pSelectMarkBottom = *reinterpret_cast< qreal*>(_v);
                Q_EMIT _t->pSelectMarkBottomChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ElaNavigationStyle::staticMetaObject = { {
    QMetaObject::SuperData::link<QProxyStyle::staticMetaObject>(),
    qt_meta_stringdata_ElaNavigationStyle.data,
    qt_meta_data_ElaNavigationStyle,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ElaNavigationStyle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaNavigationStyle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaNavigationStyle.stringdata0))
        return static_cast<void*>(this);
    return QProxyStyle::qt_metacast(_clname);
}

int ElaNavigationStyle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProxyStyle::qt_metacall(_c, _id, _a);
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
void ElaNavigationStyle::pOpacityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ElaNavigationStyle::pRotateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ElaNavigationStyle::pItemHeightChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ElaNavigationStyle::pLastSelectMarkTopChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ElaNavigationStyle::pLastSelectMarkBottomChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ElaNavigationStyle::pSelectMarkTopChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ElaNavigationStyle::pSelectMarkBottomChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
