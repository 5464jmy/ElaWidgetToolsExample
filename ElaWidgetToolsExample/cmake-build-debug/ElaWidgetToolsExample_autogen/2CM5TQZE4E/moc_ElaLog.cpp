/****************************************************************************
** Meta object code from reading C++ file 'ElaLog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../element/ElaWidgetTools/include/ElaLog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaLog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElaLog_t {
    QByteArrayData data[10];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ElaLog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ElaLog_t qt_meta_stringdata_ElaLog = {
    {
QT_MOC_LITERAL(0, 0, 6), // "ElaLog"
QT_MOC_LITERAL(1, 7, 19), // "pLogSavePathChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 19), // "pLogFileNameChanged"
QT_MOC_LITERAL(4, 48, 29), // "pIsLogFileNameWithTimeChanged"
QT_MOC_LITERAL(5, 78, 10), // "logMessage"
QT_MOC_LITERAL(6, 89, 3), // "log"
QT_MOC_LITERAL(7, 93, 12), // "pLogSavePath"
QT_MOC_LITERAL(8, 106, 12), // "pLogFileName"
QT_MOC_LITERAL(9, 119, 22) // "pIsLogFileNameWithTime"

    },
    "ElaLog\0pLogSavePathChanged\0\0"
    "pLogFileNameChanged\0pIsLogFileNameWithTimeChanged\0"
    "logMessage\0log\0pLogSavePath\0pLogFileName\0"
    "pIsLogFileNameWithTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaLog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   40, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00495003,
       8, QMetaType::QString, 0x00495003,
       9, QMetaType::Bool, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void ElaLog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaLog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pLogSavePathChanged(); break;
        case 1: _t->pLogFileNameChanged(); break;
        case 2: _t->pIsLogFileNameWithTimeChanged(); break;
        case 3: _t->logMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaLog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaLog::pLogSavePathChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElaLog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaLog::pLogFileNameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ElaLog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaLog::pIsLogFileNameWithTimeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ElaLog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaLog::logMessage)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ElaLog *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getLogSavePath(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getLogFileName(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->getIsLogFileNameWithTime(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ElaLog *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLogSavePath(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setLogFileName(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setIsLogFileNameWithTime(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ElaLog::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ElaLog.data,
    qt_meta_data_ElaLog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ElaLog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaLog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaLog.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ElaLog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
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
void ElaLog::pLogSavePathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ElaLog::pLogFileNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ElaLog::pIsLogFileNameWithTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ElaLog::logMessage(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
