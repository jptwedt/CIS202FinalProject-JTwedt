/****************************************************************************
** Meta object code from reading C++ file 'flowcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CIS202_Final-JohnTwedt/flowcontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flowcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FlowController_t {
    QByteArrayData data[15];
    char stringdata0[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlowController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlowController_t qt_meta_stringdata_FlowController = {
    {
QT_MOC_LITERAL(0, 0, 14), // "FlowController"
QT_MOC_LITERAL(1, 15, 16), // "addButtonToggled"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 21), // "subtractButtonToggled"
QT_MOC_LITERAL(4, 55, 21), // "multiplyButtonToggled"
QT_MOC_LITERAL(5, 77, 16), // "sxmScalarFlipped"
QT_MOC_LITERAL(6, 94, 14), // "sxmRowsFlipped"
QT_MOC_LITERAL(7, 109, 14), // "sxmColsFlipped"
QT_MOC_LITERAL(8, 124, 14), // "sxmValsFlipped"
QT_MOC_LITERAL(9, 139, 15), // "mxmARowsFlipped"
QT_MOC_LITERAL(10, 155, 15), // "mxmAColsFlipped"
QT_MOC_LITERAL(11, 171, 15), // "mxmAValsFlipped"
QT_MOC_LITERAL(12, 187, 15), // "mxmBRowsFlipped"
QT_MOC_LITERAL(13, 203, 15), // "mxmBColsFlipped"
QT_MOC_LITERAL(14, 219, 15) // "mxmBValsFlipped"

    },
    "FlowController\0addButtonToggled\0\0"
    "subtractButtonToggled\0multiplyButtonToggled\0"
    "sxmScalarFlipped\0sxmRowsFlipped\0"
    "sxmColsFlipped\0sxmValsFlipped\0"
    "mxmARowsFlipped\0mxmAColsFlipped\0"
    "mxmAValsFlipped\0mxmBRowsFlipped\0"
    "mxmBColsFlipped\0mxmBValsFlipped"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlowController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x0a /* Public */,
       3,    1,   82,    2, 0x0a /* Public */,
       4,    1,   85,    2, 0x0a /* Public */,
       5,    1,   88,    2, 0x0a /* Public */,
       6,    1,   91,    2, 0x0a /* Public */,
       7,    1,   94,    2, 0x0a /* Public */,
       8,    1,   97,    2, 0x0a /* Public */,
       9,    1,  100,    2, 0x0a /* Public */,
      10,    1,  103,    2, 0x0a /* Public */,
      11,    1,  106,    2, 0x0a /* Public */,
      12,    1,  109,    2, 0x0a /* Public */,
      13,    1,  112,    2, 0x0a /* Public */,
      14,    1,  115,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void FlowController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FlowController *_t = static_cast<FlowController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addButtonToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->subtractButtonToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->multiplyButtonToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->sxmScalarFlipped((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->sxmRowsFlipped((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->sxmColsFlipped((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->sxmValsFlipped((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->mxmARowsFlipped((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->mxmAColsFlipped((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->mxmAValsFlipped((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->mxmBRowsFlipped((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->mxmBColsFlipped((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->mxmBValsFlipped((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject FlowController::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FlowController.data,
      qt_meta_data_FlowController,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FlowController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlowController::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FlowController.stringdata0))
        return static_cast<void*>(const_cast< FlowController*>(this));
    return QObject::qt_metacast(_clname);
}

int FlowController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
