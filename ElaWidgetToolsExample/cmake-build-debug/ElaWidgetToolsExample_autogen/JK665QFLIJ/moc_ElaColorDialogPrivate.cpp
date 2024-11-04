/****************************************************************************
** Meta object code from reading C++ file 'ElaColorDialogPrivate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../element/ElaWidgetTools/private/ElaColorDialogPrivate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ElaColorDialogPrivate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ElaColorDialogPrivate_t {
    QByteArrayData data[17];
    char stringdata0[305];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ElaColorDialogPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ElaColorDialogPrivate_t qt_meta_stringdata_ElaColorDialogPrivate = {
    {
QT_MOC_LITERAL(0, 0, 21), // "ElaColorDialogPrivate"
QT_MOC_LITERAL(1, 22, 25), // "onColorPickerColorChanged"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 13), // "selectedColor"
QT_MOC_LITERAL(4, 63, 25), // "onColorValueSliderChanged"
QT_MOC_LITERAL(5, 89, 5), // "value"
QT_MOC_LITERAL(6, 95, 18), // "onColorModeChanged"
QT_MOC_LITERAL(7, 114, 5), // "index"
QT_MOC_LITERAL(8, 120, 18), // "onHtmlEditFocusOut"
QT_MOC_LITERAL(9, 139, 4), // "text"
QT_MOC_LITERAL(10, 144, 17), // "onHtmlEditChanged"
QT_MOC_LITERAL(11, 162, 18), // "onColorEditChanged"
QT_MOC_LITERAL(12, 181, 23), // "onBasicColorViewClicked"
QT_MOC_LITERAL(13, 205, 11), // "QModelIndex"
QT_MOC_LITERAL(14, 217, 24), // "onCustomColorViewClicked"
QT_MOC_LITERAL(15, 242, 29), // "onAddCustomColorButtonClicked"
QT_MOC_LITERAL(16, 272, 32) // "onRemoveCustomColorButtonClicked"

    },
    "ElaColorDialogPrivate\0onColorPickerColorChanged\0"
    "\0selectedColor\0onColorValueSliderChanged\0"
    "value\0onColorModeChanged\0index\0"
    "onHtmlEditFocusOut\0text\0onHtmlEditChanged\0"
    "onColorEditChanged\0onBasicColorViewClicked\0"
    "QModelIndex\0onCustomColorViewClicked\0"
    "onAddCustomColorButtonClicked\0"
    "onRemoveCustomColorButtonClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ElaColorDialogPrivate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x0a /* Public */,
       4,    1,   67,    2, 0x0a /* Public */,
       6,    1,   70,    2, 0x0a /* Public */,
       8,    1,   73,    2, 0x0a /* Public */,
      10,    1,   76,    2, 0x0a /* Public */,
      11,    1,   79,    2, 0x0a /* Public */,
      12,    1,   82,    2, 0x0a /* Public */,
      14,    1,   85,    2, 0x0a /* Public */,
      15,    0,   88,    2, 0x0a /* Public */,
      16,    0,   89,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, 0x80000000 | 13,    7,
    QMetaType::Void, 0x80000000 | 13,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ElaColorDialogPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ElaColorDialogPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onColorPickerColorChanged((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 1: _t->onColorValueSliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onColorModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onHtmlEditFocusOut((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->onHtmlEditChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->onColorEditChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->onBasicColorViewClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->onCustomColorViewClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->onAddCustomColorButtonClicked(); break;
        case 9: _t->onRemoveCustomColorButtonClicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ElaColorDialogPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ElaColorDialogPrivate.data,
    qt_meta_data_ElaColorDialogPrivate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ElaColorDialogPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ElaColorDialogPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ElaColorDialogPrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ElaColorDialogPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
