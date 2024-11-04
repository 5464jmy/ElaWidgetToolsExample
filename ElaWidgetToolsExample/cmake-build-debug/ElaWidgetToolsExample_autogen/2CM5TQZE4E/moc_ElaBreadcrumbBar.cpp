/****************************************************************************
** Meta object code from reading C++ file 'ElaBreadcrumbBar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../element/ElaWidgetTools/include/ElaBreadcrumbBar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaBreadcrumbBar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElaBreadcrumbBar_t {
    QByteArrayData data[9];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ElaBreadcrumbBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ElaBreadcrumbBar_t qt_meta_stringdata_ElaBreadcrumbBar = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ElaBreadcrumbBar"
QT_MOC_LITERAL(1, 17, 21), // "pTextPixelSizeChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 20), // "pIsAutoRemoveChanged"
QT_MOC_LITERAL(4, 61, 17), // "breadcrumbClicked"
QT_MOC_LITERAL(5, 79, 10), // "breadcrumb"
QT_MOC_LITERAL(6, 90, 18), // "lastBreadcrumbList"
QT_MOC_LITERAL(7, 109, 14), // "pTextPixelSize"
QT_MOC_LITERAL(8, 124, 13) // "pIsAutoRemove"

    },
    "ElaBreadcrumbBar\0pTextPixelSizeChanged\0"
    "\0pIsAutoRemoveChanged\0breadcrumbClicked\0"
    "breadcrumb\0lastBreadcrumbList\0"
    "pTextPixelSize\0pIsAutoRemove"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaBreadcrumbBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   36, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    2,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,    5,    6,

 // properties: name, type, flags
       7, QMetaType::Int, 0x00495003,
       8, QMetaType::Bool, 0x00495003,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void ElaBreadcrumbBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaBreadcrumbBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pTextPixelSizeChanged(); break;
        case 1: _t->pIsAutoRemoveChanged(); break;
        case 2: _t->breadcrumbClicked((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaBreadcrumbBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaBreadcrumbBar::pTextPixelSizeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElaBreadcrumbBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaBreadcrumbBar::pIsAutoRemoveChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ElaBreadcrumbBar::*)(QString , QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaBreadcrumbBar::breadcrumbClicked)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ElaBreadcrumbBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getTextPixelSize(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getIsAutoRemove(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ElaBreadcrumbBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTextPixelSize(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setIsAutoRemove(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ElaBreadcrumbBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ElaBreadcrumbBar.data,
    qt_meta_data_ElaBreadcrumbBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ElaBreadcrumbBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaBreadcrumbBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaBreadcrumbBar.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ElaBreadcrumbBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void ElaBreadcrumbBar::pTextPixelSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ElaBreadcrumbBar::pIsAutoRemoveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ElaBreadcrumbBar::breadcrumbClicked(QString _t1, QStringList _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
