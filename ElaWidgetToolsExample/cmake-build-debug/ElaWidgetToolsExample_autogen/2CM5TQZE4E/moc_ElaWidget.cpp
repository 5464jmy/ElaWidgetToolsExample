/****************************************************************************
** Meta object code from reading C++ file 'ElaWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../element/ElaWidgetTools/include/ElaWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElaWidget_t {
    QByteArrayData data[12];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ElaWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ElaWidget_t qt_meta_stringdata_ElaWidget = {
    {
QT_MOC_LITERAL(0, 0, 9), // "ElaWidget"
QT_MOC_LITERAL(1, 10, 17), // "pIsStayTopChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 19), // "pIsFixedSizeChanged"
QT_MOC_LITERAL(4, 49, 23), // "pIsDefaultClosedChanged"
QT_MOC_LITERAL(5, 73, 22), // "routeBackButtonClicked"
QT_MOC_LITERAL(6, 96, 23), // "navigationButtonClicked"
QT_MOC_LITERAL(7, 120, 24), // "themeChangeButtonClicked"
QT_MOC_LITERAL(8, 145, 18), // "closeButtonClicked"
QT_MOC_LITERAL(9, 164, 10), // "pIsStayTop"
QT_MOC_LITERAL(10, 175, 12), // "pIsFixedSize"
QT_MOC_LITERAL(11, 188, 16) // "pIsDefaultClosed"

    },
    "ElaWidget\0pIsStayTopChanged\0\0"
    "pIsFixedSizeChanged\0pIsDefaultClosedChanged\0"
    "routeBackButtonClicked\0navigationButtonClicked\0"
    "themeChangeButtonClicked\0closeButtonClicked\0"
    "pIsStayTop\0pIsFixedSize\0pIsDefaultClosed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       3,   56, // properties
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
       9, QMetaType::Bool, 0x00495003,
      10, QMetaType::Bool, 0x00495003,
      11, QMetaType::Bool, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void ElaWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pIsStayTopChanged(); break;
        case 1: _t->pIsFixedSizeChanged(); break;
        case 2: _t->pIsDefaultClosedChanged(); break;
        case 3: _t->routeBackButtonClicked(); break;
        case 4: _t->navigationButtonClicked(); break;
        case 5: _t->themeChangeButtonClicked(); break;
        case 6: _t->closeButtonClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaWidget::pIsStayTopChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElaWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaWidget::pIsFixedSizeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ElaWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaWidget::pIsDefaultClosedChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ElaWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaWidget::routeBackButtonClicked)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ElaWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaWidget::navigationButtonClicked)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ElaWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaWidget::themeChangeButtonClicked)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ElaWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaWidget::closeButtonClicked)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ElaWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getIsStayTop(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getIsFixedSize(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->getIsDefaultClosed(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ElaWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIsStayTop(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setIsFixedSize(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setIsDefaultClosed(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ElaWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ElaWidget.data,
    qt_meta_data_ElaWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ElaWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ElaWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void ElaWidget::pIsStayTopChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ElaWidget::pIsFixedSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ElaWidget::pIsDefaultClosedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ElaWidget::routeBackButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ElaWidget::navigationButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ElaWidget::themeChangeButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ElaWidget::closeButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
