/****************************************************************************
** Meta object code from reading C++ file 'ElaCalendar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../element/ElaWidgetTools/include/ElaCalendar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaCalendar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElaCalendar_t {
    QByteArrayData data[12];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ElaCalendar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ElaCalendar_t qt_meta_stringdata_ElaCalendar = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ElaCalendar"
QT_MOC_LITERAL(1, 12, 20), // "pBorderRaiudsChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 20), // "pSelectedDateChanged"
QT_MOC_LITERAL(4, 55, 19), // "pMinimumDateChanged"
QT_MOC_LITERAL(5, 75, 19), // "pMaximumDateChanged"
QT_MOC_LITERAL(6, 95, 7), // "clicked"
QT_MOC_LITERAL(7, 103, 4), // "date"
QT_MOC_LITERAL(8, 108, 13), // "pBorderRaiuds"
QT_MOC_LITERAL(9, 122, 13), // "pSelectedDate"
QT_MOC_LITERAL(10, 136, 12), // "pMinimumDate"
QT_MOC_LITERAL(11, 149, 12) // "pMaximumDate"

    },
    "ElaCalendar\0pBorderRaiudsChanged\0\0"
    "pSelectedDateChanged\0pMinimumDateChanged\0"
    "pMaximumDateChanged\0clicked\0date\0"
    "pBorderRaiuds\0pSelectedDate\0pMinimumDate\0"
    "pMaximumDate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaCalendar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    1,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,    7,

 // properties: name, type, flags
       8, QMetaType::Int, 0x00495003,
       9, QMetaType::QDate, 0x00495003,
      10, QMetaType::QDate, 0x00495003,
      11, QMetaType::QDate, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void ElaCalendar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaCalendar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pBorderRaiudsChanged(); break;
        case 1: _t->pSelectedDateChanged(); break;
        case 2: _t->pMinimumDateChanged(); break;
        case 3: _t->pMaximumDateChanged(); break;
        case 4: _t->clicked((*reinterpret_cast< QDate(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaCalendar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaCalendar::pBorderRaiudsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElaCalendar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaCalendar::pSelectedDateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ElaCalendar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaCalendar::pMinimumDateChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ElaCalendar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaCalendar::pMaximumDateChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ElaCalendar::*)(QDate );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaCalendar::clicked)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ElaCalendar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getBorderRaiuds(); break;
        case 1: *reinterpret_cast< QDate*>(_v) = _t->getSelectedDate(); break;
        case 2: *reinterpret_cast< QDate*>(_v) = _t->getMinimumDate(); break;
        case 3: *reinterpret_cast< QDate*>(_v) = _t->getMaximumDate(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ElaCalendar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBorderRaiuds(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setSelectedDate(*reinterpret_cast< QDate*>(_v)); break;
        case 2: _t->setMinimumDate(*reinterpret_cast< QDate*>(_v)); break;
        case 3: _t->setMaximumDate(*reinterpret_cast< QDate*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ElaCalendar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ElaCalendar.data,
    qt_meta_data_ElaCalendar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ElaCalendar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaCalendar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaCalendar.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ElaCalendar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ElaCalendar::pBorderRaiudsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ElaCalendar::pSelectedDateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ElaCalendar::pMinimumDateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ElaCalendar::pMaximumDateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ElaCalendar::clicked(QDate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
