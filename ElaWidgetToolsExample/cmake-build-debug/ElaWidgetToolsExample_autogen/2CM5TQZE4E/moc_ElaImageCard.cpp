/****************************************************************************
** Meta object code from reading C++ file 'ElaImageCard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../element/ElaWidgetTools/include/ElaImageCard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaImageCard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElaImageCard_t {
    QByteArrayData data[10];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ElaImageCard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ElaImageCard_t qt_meta_stringdata_ElaImageCard = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ElaImageCard"
QT_MOC_LITERAL(1, 13, 17), // "pCardImageChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 20), // "pBorderRadiusChanged"
QT_MOC_LITERAL(4, 53, 28), // "pIsPreserveAspectCropChanged"
QT_MOC_LITERAL(5, 82, 26), // "pMaximumAspectRatioChanged"
QT_MOC_LITERAL(6, 109, 10), // "pCardImage"
QT_MOC_LITERAL(7, 120, 13), // "pBorderRadius"
QT_MOC_LITERAL(8, 134, 21), // "pIsPreserveAspectCrop"
QT_MOC_LITERAL(9, 156, 19) // "pMaximumAspectRatio"

    },
    "ElaImageCard\0pCardImageChanged\0\0"
    "pBorderRadiusChanged\0pIsPreserveAspectCropChanged\0"
    "pMaximumAspectRatioChanged\0pCardImage\0"
    "pBorderRadius\0pIsPreserveAspectCrop\0"
    "pMaximumAspectRatio"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaImageCard[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::QImage, 0x00495003,
       7, QMetaType::Int, 0x00495003,
       8, QMetaType::Bool, 0x00495003,
       9, QMetaType::QReal, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void ElaImageCard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaImageCard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pCardImageChanged(); break;
        case 1: _t->pBorderRadiusChanged(); break;
        case 2: _t->pIsPreserveAspectCropChanged(); break;
        case 3: _t->pMaximumAspectRatioChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ElaImageCard::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaImageCard::pCardImageChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ElaImageCard::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaImageCard::pBorderRadiusChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ElaImageCard::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaImageCard::pIsPreserveAspectCropChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ElaImageCard::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ElaImageCard::pMaximumAspectRatioChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ElaImageCard *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QImage*>(_v) = _t->getCardImage(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getBorderRadius(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->getIsPreserveAspectCrop(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->getMaximumAspectRatio(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ElaImageCard *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCardImage(*reinterpret_cast< QImage*>(_v)); break;
        case 1: _t->setBorderRadius(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setIsPreserveAspectCrop(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setMaximumAspectRatio(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject ElaImageCard::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ElaImageCard.data,
    qt_meta_data_ElaImageCard,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ElaImageCard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaImageCard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaImageCard.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ElaImageCard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void ElaImageCard::pCardImageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ElaImageCard::pBorderRadiusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ElaImageCard::pIsPreserveAspectCropChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ElaImageCard::pMaximumAspectRatioChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
