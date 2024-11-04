/****************************************************************************
** Meta object code from reading C++ file 'ElaPromotionView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../element/ElaWidgetTools/include/ElaPromotionView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaPromotionView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElaPromotionView_t {
    QByteArrayData data[12];
    char stringdata0[221];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ElaPromotionView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ElaPromotionView_t qt_meta_stringdata_ElaPromotionView = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ElaPromotionView"
QT_MOC_LITERAL(1, 17, 23), // "pCardExpandWidthChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 25), // "pCardCollapseWidthChanged"
QT_MOC_LITERAL(4, 68, 20), // "pCurrentIndexChanged"
QT_MOC_LITERAL(5, 89, 20), // "pIsAutoScrollChanged"
QT_MOC_LITERAL(6, 110, 26), // "pAutoScrollIntervalChanged"
QT_MOC_LITERAL(7, 137, 16), // "pCardExpandWidth"
QT_MOC_LITERAL(8, 154, 18), // "pCardCollapseWidth"
QT_MOC_LITERAL(9, 173, 13), // "pCurrentIndex"
QT_MOC_LITERAL(10, 187, 13), // "pIsAutoScroll"
QT_MOC_LITERAL(11, 201, 19) // "pAutoScrollInterval"

    },
    "ElaPromotionView\0pCardExpandWidthChanged\0"
    "\0pCardCollapseWidthChanged\0"
    "pCurrentIndexChanged\0pIsAutoScrollChanged\0"
    "pAutoScrollIntervalChanged\0pCardExpandWidth\0"
    "pCardCollapseWidth\0pCurrentIndex\0"
    "pIsAutoScroll\0pAutoScrollInterval"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaPromotionView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       5,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
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

 // properties: name, type, flags
       7, QMetaType::Int, 0x00495003,
       8, QMetaType::Int, 0x00495003,
       9, QMetaType::Int, 0x00495003,
      10, QMetaType::Bool, 0x00495003,
      11, QMetaType::Int, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void ElaPromotionView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaPromotionView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pCardExpandWidthChanged(); break;
        case 1: _t->pCardCollapseWidthChanged(); break;
        case 2: _t->pCurrentIndexChanged(); break;
        case 3: _t->pIsAutoScrollChanged(); break;
        case 4: _t->pAutoScrollIntervalChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaPromotionView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaPromotionView::pCardExpandWidthChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElaPromotionView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaPromotionView::pCardCollapseWidthChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ElaPromotionView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaPromotionView::pCurrentIndexChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ElaPromotionView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaPromotionView::pIsAutoScrollChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ElaPromotionView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaPromotionView::pAutoScrollIntervalChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ElaPromotionView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getCardExpandWidth(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getCardCollapseWidth(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getCurrentIndex(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->getIsAutoScroll(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->getAutoScrollInterval(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ElaPromotionView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCardExpandWidth(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setCardCollapseWidth(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setCurrentIndex(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setIsAutoScroll(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setAutoScrollInterval(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ElaPromotionView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ElaPromotionView.data,
    qt_meta_data_ElaPromotionView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ElaPromotionView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaPromotionView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaPromotionView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ElaPromotionView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ElaPromotionView::pCardExpandWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ElaPromotionView::pCardCollapseWidthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ElaPromotionView::pCurrentIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ElaPromotionView::pIsAutoScrollChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ElaPromotionView::pAutoScrollIntervalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
