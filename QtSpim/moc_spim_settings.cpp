/****************************************************************************
** Meta object code from reading C++ file 'spim_settings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "spim_settings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spim_settings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Ui__SpimSettingDialog_t {
    QByteArrayData data[10];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Ui__SpimSettingDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Ui__SpimSettingDialog_t qt_meta_stringdata_Ui__SpimSettingDialog = {
    {
QT_MOC_LITERAL(0, 0, 21), // "Ui::SpimSettingDialog"
QT_MOC_LITERAL(1, 22, 13), // "setRegWinFont"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 1), // "f"
QT_MOC_LITERAL(4, 39, 14), // "setRegWinColor"
QT_MOC_LITERAL(5, 54, 1), // "c"
QT_MOC_LITERAL(6, 56, 19), // "setRegWinBackground"
QT_MOC_LITERAL(7, 76, 14), // "setTextWinFont"
QT_MOC_LITERAL(8, 91, 15), // "setTextWinColor"
QT_MOC_LITERAL(9, 107, 20) // "setTextWinBackground"

    },
    "Ui::SpimSettingDialog\0setRegWinFont\0"
    "\0f\0setRegWinColor\0c\0setRegWinBackground\0"
    "setTextWinFont\0setTextWinColor\0"
    "setTextWinBackground"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Ui__SpimSettingDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       4,    1,   47,    2, 0x0a /* Public */,
       6,    1,   50,    2, 0x0a /* Public */,
       7,    1,   53,    2, 0x0a /* Public */,
       8,    1,   56,    2, 0x0a /* Public */,
       9,    1,   59,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QFont,    3,
    QMetaType::Void, QMetaType::QColor,    5,
    QMetaType::Void, QMetaType::QColor,    5,
    QMetaType::Void, QMetaType::QFont,    3,
    QMetaType::Void, QMetaType::QColor,    5,
    QMetaType::Void, QMetaType::QColor,    5,

       0        // eod
};

void Ui::SpimSettingDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SpimSettingDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setRegWinFont((*reinterpret_cast< QFont(*)>(_a[1]))); break;
        case 1: _t->setRegWinColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 2: _t->setRegWinBackground((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 3: _t->setTextWinFont((*reinterpret_cast< QFont(*)>(_a[1]))); break;
        case 4: _t->setTextWinColor((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        case 5: _t->setTextWinBackground((*reinterpret_cast< QColor(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Ui::SpimSettingDialog::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Ui__SpimSettingDialog.data,
    qt_meta_data_Ui__SpimSettingDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Ui::SpimSettingDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Ui::SpimSettingDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Ui__SpimSettingDialog.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "SettingDialog"))
        return static_cast< SettingDialog*>(this);
    return QObject::qt_metacast(_clname);
}

int Ui::SpimSettingDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
