/****************************************************************************
** Meta object code from reading C++ file 'ElaWindowPrivate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../element/ElaWidgetTools/private/ElaWindowPrivate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaWindowPrivate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElaWindowPrivate_t {
    QByteArrayData data[17];
    char stringdata0[280];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ElaWindowPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ElaWindowPrivate_t qt_meta_stringdata_ElaWindowPrivate = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ElaWindowPrivate"
QT_MOC_LITERAL(1, 17, 25), // "onNavigationButtonClicked"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 18), // "onThemeReadyChange"
QT_MOC_LITERAL(4, 63, 20), // "onDisplayModeChanged"
QT_MOC_LITERAL(5, 84, 18), // "onThemeModeChanged"
QT_MOC_LITERAL(6, 103, 23), // "ElaThemeType::ThemeMode"
QT_MOC_LITERAL(7, 127, 9), // "themeMode"
QT_MOC_LITERAL(8, 137, 23), // "onNavigationNodeClicked"
QT_MOC_LITERAL(9, 161, 37), // "ElaNavigationType::Navigation..."
QT_MOC_LITERAL(10, 199, 8), // "nodeType"
QT_MOC_LITERAL(11, 208, 7), // "nodeKey"
QT_MOC_LITERAL(12, 216, 21), // "onNavigationNodeAdded"
QT_MOC_LITERAL(13, 238, 8), // "QWidget*"
QT_MOC_LITERAL(14, 247, 4), // "page"
QT_MOC_LITERAL(15, 252, 22), // "onWMWindowClickedEvent"
QT_MOC_LITERAL(16, 275, 4) // "data"

    },
    "ElaWindowPrivate\0onNavigationButtonClicked\0"
    "\0onThemeReadyChange\0onDisplayModeChanged\0"
    "onThemeModeChanged\0ElaThemeType::ThemeMode\0"
    "themeMode\0onNavigationNodeClicked\0"
    "ElaNavigationType::NavigationNodeType\0"
    "nodeType\0nodeKey\0onNavigationNodeAdded\0"
    "QWidget*\0page\0onWMWindowClickedEvent\0"
    "data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaWindowPrivate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    1,   52,    2, 0x0a /* Public */,
       8,    2,   55,    2, 0x0a /* Public */,
      12,    3,   60,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      15,    1,   67,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString,   10,   11,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString, 0x80000000 | 13,   10,   11,   14,

 // methods: parameters
    QMetaType::Void, QMetaType::QVariantMap,   16,

       0        // eod
};

void ElaWindowPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaWindowPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onNavigationButtonClicked(); break;
        case 1: _t->onThemeReadyChange(); break;
        case 2: _t->onDisplayModeChanged(); break;
        case 3: _t->onThemeModeChanged((*reinterpret_cast< ElaThemeType::ThemeMode(*)>(_a[1]))); break;
        case 4: _t->onNavigationNodeClicked((*reinterpret_cast< ElaNavigationType::NavigationNodeType(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->onNavigationNodeAdded((*reinterpret_cast< ElaNavigationType::NavigationNodeType(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QWidget*(*)>(_a[3]))); break;
        case 6: _t->onWMWindowClickedEvent((*reinterpret_cast< QVariantMap(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ElaWindowPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ElaWindowPrivate.data,
    qt_meta_data_ElaWindowPrivate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ElaWindowPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaWindowPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaWindowPrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ElaWindowPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
