/****************************************************************************
** Meta object code from reading C++ file 'ElaSuggestBoxPrivate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../element/ElaWidgetTools/private/ElaSuggestBoxPrivate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaSuggestBoxPrivate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElaSuggestion_t {
    QByteArrayData data[9];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ElaSuggestion_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ElaSuggestion_t qt_meta_stringdata_ElaSuggestion = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ElaSuggestion"
QT_MOC_LITERAL(1, 14, 15), // "pElaIconChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 19), // "pSuggestTextChanged"
QT_MOC_LITERAL(4, 51, 19), // "pSuggestDataChanged"
QT_MOC_LITERAL(5, 71, 8), // "pElaIcon"
QT_MOC_LITERAL(6, 80, 21), // "ElaIconType::IconName"
QT_MOC_LITERAL(7, 102, 12), // "pSuggestText"
QT_MOC_LITERAL(8, 115, 12) // "pSuggestData"

    },
    "ElaSuggestion\0pElaIconChanged\0\0"
    "pSuggestTextChanged\0pSuggestDataChanged\0"
    "pElaIcon\0ElaIconType::IconName\0"
    "pSuggestText\0pSuggestData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaSuggestion[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, 0x80000000 | 6, 0x0049500b,
       7, QMetaType::QString, 0x00495003,
       8, QMetaType::QVariantMap, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void ElaSuggestion::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaSuggestion *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pElaIconChanged(); break;
        case 1: _t->pSuggestTextChanged(); break;
        case 2: _t->pSuggestDataChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaSuggestion::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaSuggestion::pElaIconChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElaSuggestion::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaSuggestion::pSuggestTextChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ElaSuggestion::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaSuggestion::pSuggestDataChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ElaSuggestion *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ElaIconType::IconName*>(_v) = _t->_pElaIcon; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->_pSuggestText; break;
        case 2: *reinterpret_cast< QVariantMap*>(_v) = _t->_pSuggestData; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ElaSuggestion *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_pElaIcon != *reinterpret_cast< ElaIconType::IconName*>(_v)) {
                _t->_pElaIcon = *reinterpret_cast< ElaIconType::IconName*>(_v);
                Q_EMIT _t->pElaIconChanged();
            }
            break;
        case 1:
            if (_t->_pSuggestText != *reinterpret_cast< QString*>(_v)) {
                _t->_pSuggestText = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->pSuggestTextChanged();
            }
            break;
        case 2:
            if (_t->_pSuggestData != *reinterpret_cast< QVariantMap*>(_v)) {
                _t->_pSuggestData = *reinterpret_cast< QVariantMap*>(_v);
                Q_EMIT _t->pSuggestDataChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

static const QMetaObject::SuperData qt_meta_extradata_ElaSuggestion[] = {
    QMetaObject::SuperData::link<ElaIconType::staticMetaObject>(),
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject ElaSuggestion::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ElaSuggestion.data,
    qt_meta_data_ElaSuggestion,
    qt_static_metacall,
    qt_meta_extradata_ElaSuggestion,
    nullptr
} };


const QMetaObject *ElaSuggestion::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaSuggestion::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaSuggestion.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ElaSuggestion::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void ElaSuggestion::pElaIconChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ElaSuggestion::pSuggestTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ElaSuggestion::pSuggestDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_ElaSuggestBoxPrivate_t {
    QByteArrayData data[10];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ElaSuggestBoxPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ElaSuggestBoxPrivate_t qt_meta_stringdata_ElaSuggestBoxPrivate = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ElaSuggestBoxPrivate"
QT_MOC_LITERAL(1, 21, 18), // "onThemeModeChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 23), // "ElaThemeType::ThemeMode"
QT_MOC_LITERAL(4, 65, 9), // "themeMode"
QT_MOC_LITERAL(5, 75, 20), // "onSearchEditTextEdit"
QT_MOC_LITERAL(6, 96, 10), // "searchText"
QT_MOC_LITERAL(7, 107, 19), // "onSearchViewClicked"
QT_MOC_LITERAL(8, 127, 11), // "QModelIndex"
QT_MOC_LITERAL(9, 139, 5) // "index"

    },
    "ElaSuggestBoxPrivate\0onThemeModeChanged\0"
    "\0ElaThemeType::ThemeMode\0themeMode\0"
    "onSearchEditTextEdit\0searchText\0"
    "onSearchViewClicked\0QModelIndex\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaSuggestBoxPrivate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       5,    1,   32,    2, 0x0a /* Public */,
       7,    1,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void ElaSuggestBoxPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaSuggestBoxPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onThemeModeChanged((*reinterpret_cast< ElaThemeType::ThemeMode(*)>(_a[1]))); break;
        case 1: _t->onSearchEditTextEdit((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->onSearchViewClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ElaSuggestBoxPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ElaSuggestBoxPrivate.data,
    qt_meta_data_ElaSuggestBoxPrivate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ElaSuggestBoxPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaSuggestBoxPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaSuggestBoxPrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ElaSuggestBoxPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
