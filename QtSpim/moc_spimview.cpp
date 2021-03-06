/****************************************************************************
** Meta object code from reading C++ file 'spimview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "spimview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spimview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SpimView_t {
    QByteArrayData data[49];
    char stringdata0[786];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpimView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpimView_t qt_meta_stringdata_SpimView = {
    {
QT_MOC_LITERAL(0, 0, 8), // "SpimView"
QT_MOC_LITERAL(1, 9, 13), // "file_LoadFile"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 15), // "file_ReloadFile"
QT_MOC_LITERAL(4, 40, 16), // "file_SaveLogFile"
QT_MOC_LITERAL(5, 57, 10), // "file_Print"
QT_MOC_LITERAL(6, 68, 9), // "file_Exit"
QT_MOC_LITERAL(7, 78, 18), // "sim_ClearRegisters"
QT_MOC_LITERAL(8, 97, 25), // "sim_ReinitializeSimulator"
QT_MOC_LITERAL(9, 123, 20), // "sim_SetRunParameters"
QT_MOC_LITERAL(10, 144, 7), // "sim_Run"
QT_MOC_LITERAL(11, 152, 9), // "sim_Pause"
QT_MOC_LITERAL(12, 162, 8), // "sim_Stop"
QT_MOC_LITERAL(13, 171, 14), // "sim_SingleStep"
QT_MOC_LITERAL(14, 186, 18), // "sim_DisplaySymbols"
QT_MOC_LITERAL(15, 205, 12), // "sim_Settings"
QT_MOC_LITERAL(16, 218, 17), // "reg_DisplayBinary"
QT_MOC_LITERAL(17, 236, 14), // "reg_DisplayHex"
QT_MOC_LITERAL(18, 251, 18), // "reg_DisplayDecimal"
QT_MOC_LITERAL(19, 270, 17), // "setCheckedRegBase"
QT_MOC_LITERAL(20, 288, 4), // "base"
QT_MOC_LITERAL(21, 293, 15), // "setBaseInternal"
QT_MOC_LITERAL(22, 309, 8), // "QAction*"
QT_MOC_LITERAL(23, 318, 12), // "actionBinary"
QT_MOC_LITERAL(24, 331, 13), // "actionDecimal"
QT_MOC_LITERAL(25, 345, 9), // "actionHex"
QT_MOC_LITERAL(26, 355, 20), // "text_DisplayUserText"
QT_MOC_LITERAL(27, 376, 22), // "text_DisplayKernelText"
QT_MOC_LITERAL(28, 399, 20), // "text_DisplayComments"
QT_MOC_LITERAL(29, 420, 28), // "text_DisplayInstructionValue"
QT_MOC_LITERAL(30, 449, 20), // "data_DisplayUserData"
QT_MOC_LITERAL(31, 470, 21), // "data_DisplayUserStack"
QT_MOC_LITERAL(32, 492, 22), // "data_DisplayKernelData"
QT_MOC_LITERAL(33, 515, 18), // "data_DisplayBinary"
QT_MOC_LITERAL(34, 534, 15), // "data_DisplayHex"
QT_MOC_LITERAL(35, 550, 19), // "data_DisplayDecimal"
QT_MOC_LITERAL(36, 570, 32), // "setCheckedDataSegmentDisplayBase"
QT_MOC_LITERAL(37, 603, 16), // "win_IntRegisters"
QT_MOC_LITERAL(38, 620, 15), // "win_FPRegisters"
QT_MOC_LITERAL(39, 636, 15), // "win_TextSegment"
QT_MOC_LITERAL(40, 652, 15), // "win_DataSegment"
QT_MOC_LITERAL(41, 668, 11), // "win_Console"
QT_MOC_LITERAL(42, 680, 8), // "win_Tile"
QT_MOC_LITERAL(43, 689, 11), // "win_Restore"
QT_MOC_LITERAL(44, 701, 13), // "help_ViewHelp"
QT_MOC_LITERAL(45, 715, 14), // "help_AboutSPIM"
QT_MOC_LITERAL(46, 730, 18), // "continueBreakpoint"
QT_MOC_LITERAL(47, 749, 20), // "singleStepBreakpoint"
QT_MOC_LITERAL(48, 770, 15) // "abortBreakpoint"

    },
    "SpimView\0file_LoadFile\0\0file_ReloadFile\0"
    "file_SaveLogFile\0file_Print\0file_Exit\0"
    "sim_ClearRegisters\0sim_ReinitializeSimulator\0"
    "sim_SetRunParameters\0sim_Run\0sim_Pause\0"
    "sim_Stop\0sim_SingleStep\0sim_DisplaySymbols\0"
    "sim_Settings\0reg_DisplayBinary\0"
    "reg_DisplayHex\0reg_DisplayDecimal\0"
    "setCheckedRegBase\0base\0setBaseInternal\0"
    "QAction*\0actionBinary\0actionDecimal\0"
    "actionHex\0text_DisplayUserText\0"
    "text_DisplayKernelText\0text_DisplayComments\0"
    "text_DisplayInstructionValue\0"
    "data_DisplayUserData\0data_DisplayUserStack\0"
    "data_DisplayKernelData\0data_DisplayBinary\0"
    "data_DisplayHex\0data_DisplayDecimal\0"
    "setCheckedDataSegmentDisplayBase\0"
    "win_IntRegisters\0win_FPRegisters\0"
    "win_TextSegment\0win_DataSegment\0"
    "win_Console\0win_Tile\0win_Restore\0"
    "help_ViewHelp\0help_AboutSPIM\0"
    "continueBreakpoint\0singleStepBreakpoint\0"
    "abortBreakpoint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpimView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      42,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  224,    2, 0x0a /* Public */,
       3,    0,  225,    2, 0x0a /* Public */,
       4,    0,  226,    2, 0x0a /* Public */,
       5,    0,  227,    2, 0x0a /* Public */,
       6,    0,  228,    2, 0x0a /* Public */,
       7,    0,  229,    2, 0x0a /* Public */,
       8,    0,  230,    2, 0x0a /* Public */,
       9,    0,  231,    2, 0x0a /* Public */,
      10,    0,  232,    2, 0x0a /* Public */,
      11,    0,  233,    2, 0x0a /* Public */,
      12,    0,  234,    2, 0x0a /* Public */,
      13,    0,  235,    2, 0x0a /* Public */,
      14,    0,  236,    2, 0x0a /* Public */,
      15,    0,  237,    2, 0x0a /* Public */,
      16,    0,  238,    2, 0x0a /* Public */,
      17,    0,  239,    2, 0x0a /* Public */,
      18,    0,  240,    2, 0x0a /* Public */,
      19,    1,  241,    2, 0x0a /* Public */,
      21,    4,  244,    2, 0x0a /* Public */,
      26,    0,  253,    2, 0x0a /* Public */,
      27,    0,  254,    2, 0x0a /* Public */,
      28,    0,  255,    2, 0x0a /* Public */,
      29,    0,  256,    2, 0x0a /* Public */,
      30,    0,  257,    2, 0x0a /* Public */,
      31,    0,  258,    2, 0x0a /* Public */,
      32,    0,  259,    2, 0x0a /* Public */,
      33,    0,  260,    2, 0x0a /* Public */,
      34,    0,  261,    2, 0x0a /* Public */,
      35,    0,  262,    2, 0x0a /* Public */,
      36,    1,  263,    2, 0x0a /* Public */,
      37,    0,  266,    2, 0x0a /* Public */,
      38,    0,  267,    2, 0x0a /* Public */,
      39,    0,  268,    2, 0x0a /* Public */,
      40,    0,  269,    2, 0x0a /* Public */,
      41,    0,  270,    2, 0x0a /* Public */,
      42,    0,  271,    2, 0x0a /* Public */,
      43,    0,  272,    2, 0x0a /* Public */,
      44,    0,  273,    2, 0x0a /* Public */,
      45,    0,  274,    2, 0x0a /* Public */,
      46,    0,  275,    2, 0x0a /* Public */,
      47,    0,  276,    2, 0x0a /* Public */,
      48,    0,  277,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, QMetaType::Int,   20,
    QMetaType::Int, QMetaType::Int, 0x80000000 | 22, 0x80000000 | 22, 0x80000000 | 22,   20,   23,   24,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, QMetaType::Int,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SpimView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SpimView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->file_LoadFile(); break;
        case 1: _t->file_ReloadFile(); break;
        case 2: _t->file_SaveLogFile(); break;
        case 3: _t->file_Print(); break;
        case 4: _t->file_Exit(); break;
        case 5: _t->sim_ClearRegisters(); break;
        case 6: _t->sim_ReinitializeSimulator(); break;
        case 7: _t->sim_SetRunParameters(); break;
        case 8: _t->sim_Run(); break;
        case 9: _t->sim_Pause(); break;
        case 10: _t->sim_Stop(); break;
        case 11: _t->sim_SingleStep(); break;
        case 12: _t->sim_DisplaySymbols(); break;
        case 13: _t->sim_Settings(); break;
        case 14: _t->reg_DisplayBinary(); break;
        case 15: _t->reg_DisplayHex(); break;
        case 16: _t->reg_DisplayDecimal(); break;
        case 17: { int _r = _t->setCheckedRegBase((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 18: { int _r = _t->setBaseInternal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QAction*(*)>(_a[2])),(*reinterpret_cast< QAction*(*)>(_a[3])),(*reinterpret_cast< QAction*(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 19: _t->text_DisplayUserText(); break;
        case 20: _t->text_DisplayKernelText(); break;
        case 21: _t->text_DisplayComments(); break;
        case 22: _t->text_DisplayInstructionValue(); break;
        case 23: _t->data_DisplayUserData(); break;
        case 24: _t->data_DisplayUserStack(); break;
        case 25: _t->data_DisplayKernelData(); break;
        case 26: _t->data_DisplayBinary(); break;
        case 27: _t->data_DisplayHex(); break;
        case 28: _t->data_DisplayDecimal(); break;
        case 29: { int _r = _t->setCheckedDataSegmentDisplayBase((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 30: _t->win_IntRegisters(); break;
        case 31: _t->win_FPRegisters(); break;
        case 32: _t->win_TextSegment(); break;
        case 33: _t->win_DataSegment(); break;
        case 34: _t->win_Console(); break;
        case 35: _t->win_Tile(); break;
        case 36: _t->win_Restore(); break;
        case 37: _t->help_ViewHelp(); break;
        case 38: _t->help_AboutSPIM(); break;
        case 39: _t->continueBreakpoint(); break;
        case 40: _t->singleStepBreakpoint(); break;
        case 41: _t->abortBreakpoint(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
            case 2:
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SpimView::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_SpimView.data,
    qt_meta_data_SpimView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SpimView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpimView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpimView.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int SpimView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
