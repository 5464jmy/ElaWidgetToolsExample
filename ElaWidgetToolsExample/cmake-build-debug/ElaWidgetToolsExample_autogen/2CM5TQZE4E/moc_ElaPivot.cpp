/****************************************************************************
** Meta object code from reading C++ file 'ElaPivot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../element/ElaWidgetTools/include/ElaPivot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaPivot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElaPivot_t {
    QByteArrayData data[13];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ElaPivot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ElaPivot_t qt_meta_stringdata_ElaPivot = {
    {
QT_MOC_LITERAL(0, 0, 8), // "ElaPivot"
QT_MOC_LITERAL(1, 9, 21), // "pTextPixelSizeChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 20), // "pCurrentIndexChanged"
QT_MOC_LITERAL(4, 53, 20), // "pPivotSpacingChanged"
QT_MOC_LITERAL(5, 74, 17), // "pMarkWidthChanged"
QT_MOC_LITERAL(6, 92, 12), // "pivotClicked"
QT_MOC_LITERAL(7, 105, 5), // "index"
QT_MOC_LITERAL(8, 111, 18), // "pivotDoubleClicked"
QT_MOC_LITERAL(9, 130, 14), // "pTextPixelSize"
QT_MOC_LITERAL(10, 145, 13), // "pCurrentIndex"
QT_MOC_LITERAL(11, 159, 13), // "pPivotSpacing"
QT_MOC_LITERAL(12, 173, 10) // "pMarkWidth"

    },
    "ElaPivot\0pTextPixelSizeChanged\0\0"
    "pCurrentIndexChanged\0pPivotSpacingChanged\0"
    "pMarkWidthChanged\0pivotClicked\0index\0"
    "pivotDoubleClicked\0pTextPixelSize\0"
    "pCurrentIndex\0pPivotSpacing\0pMarkWidth"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaPivot[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    1,   48,    2, 0x06 /* Public */,
       8,    1,   51,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,

 // properties: name, type, flags
       9, QMetaType::Int, 0x00495003,
      10, QMetaType::Int, 0x00495003,
      11, QMetaType::Int, 0x00495003,
      12, QMetaType::Int, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void ElaPivot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaPivot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pTextPixelSizeChanged(); break;
        case 1: _t->pCurrentIndexChanged(); break;
        case 2: _t->pPivotSpacingChanged(); break;
        case 3: _t->pMarkWidthChanged(); break;
        case 4: _t->pivotClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->pivotDoubleClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaPivot::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaPivot::pTextPixelSizeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElaPivot::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaPivot::pCurrentIndexChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ElaPivot::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaPivot::pPivotSpacingChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ElaPivot::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaPivot::pMarkWidthChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ElaPivot::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaPivot::pivotClicked)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ElaPivot::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaPivot::pivotDoubleClicked)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ElaPivot *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getTextPixelSize(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getCurrentIndex(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getPivotSpacing(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getMarkWidth(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ElaPivot *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTextPixelSize(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setCurrentIndex(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setPivotSpacing(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setMarkWidth(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ElaPivot::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ElaPivot.data,
    qt_meta_data_ElaPivot,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ElaPivot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaPivot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaPivot.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ElaPivot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ElaPivot::pTextPixelSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ElaPivot::pCurrentIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ElaPivot::pPivotSpacingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ElaPivot::pMarkWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ElaPivot::pivotClicked(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ElaPivot::pivotDoubleClicked(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
