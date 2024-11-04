/****************************************************************************
** Meta object code from reading C++ file 'T_Home.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../ExamplePage/T_Home.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'T_Home.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_T_Home_t {
    QByteArrayData data[9];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_T_Home_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_T_Home_t qt_meta_stringdata_T_Home = {
    {
QT_MOC_LITERAL(0, 0, 6), // "T_Home"
QT_MOC_LITERAL(1, 7, 19), // "elaScreenNavigation"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 26), // "elaBaseComponentNavigation"
QT_MOC_LITERAL(4, 55, 18), // "elaSceneNavigation"
QT_MOC_LITERAL(5, 74, 17), // "elaCardNavigation"
QT_MOC_LITERAL(6, 92, 17), // "elaIconNavigation"
QT_MOC_LITERAL(7, 110, 8), // "QWidget*"
QT_MOC_LITERAL(8, 119, 6) // "parent"

    },
    "T_Home\0elaScreenNavigation\0\0"
    "elaBaseComponentNavigation\0"
    "elaSceneNavigation\0elaCardNavigation\0"
    "elaIconNavigation\0QWidget*\0parent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_T_Home[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       2,   48, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // constructors: parameters
    0x80000000 | 2, 0x80000000 | 7,    8,
    0x80000000 | 2,

 // constructors: name, argc, parameters, tag, flags
       0,    1,   44,    2, 0x0e /* Public */,
       0,    0,   47,    2, 0x2e /* Public | MethodCloned */,

       0        // eod
};

void T_Home::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { T_Home *_r = new T_Home((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { T_Home *_r = new T_Home();
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<T_Home *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->elaScreenNavigation(); break;
        case 1: _t->elaBaseComponentNavigation(); break;
        case 2: _t->elaSceneNavigation(); break;
        case 3: _t->elaCardNavigation(); break;
        case 4: _t->elaIconNavigation(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (T_Home::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&T_Home::elaScreenNavigation)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (T_Home::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&T_Home::elaBaseComponentNavigation)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (T_Home::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&T_Home::elaSceneNavigation)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (T_Home::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&T_Home::elaCardNavigation)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (T_Home::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&T_Home::elaIconNavigation)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject T_Home::staticMetaObject = { {
    QMetaObject::SuperData::link<T_BasePage::staticMetaObject>(),
    qt_meta_stringdata_T_Home.data,
    qt_meta_data_T_Home,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *T_Home::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *T_Home::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_T_Home.stringdata0))
        return static_cast<void*>(this);
    return T_BasePage::qt_metacast(_clname);
}

int T_Home::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = T_BasePage::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void T_Home::elaScreenNavigation()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void T_Home::elaBaseComponentNavigation()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void T_Home::elaSceneNavigation()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void T_Home::elaCardNavigation()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void T_Home::elaIconNavigation()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
