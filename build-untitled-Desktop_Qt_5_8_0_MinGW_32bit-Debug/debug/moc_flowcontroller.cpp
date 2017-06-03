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
    QByteArrayData data[12];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlowController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlowController_t qt_meta_stringdata_FlowController = {
    {
QT_MOC_LITERAL(0, 0, 14), // "FlowController"
QT_MOC_LITERAL(1, 15, 16), // "sxmScalarFlipped"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 14), // "sxmRowsFlipped"
QT_MOC_LITERAL(4, 48, 14), // "sxmColsFlipped"
QT_MOC_LITERAL(5, 63, 14), // "sxmValsFlipped"
QT_MOC_LITERAL(6, 78, 15), // "mxmARowsFlipped"
QT_MOC_LITERAL(7, 94, 15), // "mxmAColsFlipped"
QT_MOC_LITERAL(8, 110, 15), // "mxmAValsFlipped"
QT_MOC_LITERAL(9, 126, 15), // "mxmBRowsFlipped"
QT_MOC_LITERAL(10, 142, 15), // "mxmBColsFlipped"
QT_MOC_LITERAL(11, 158, 15) // "mxmBValsFlipped"

    },
    "FlowController\0sxmScalarFlipped\0\0"
    "sxmRowsFlipped\0sxmColsFlipped\0"
    "sxmValsFlipped\0mxmARowsFlipped\0"
    "mxmAColsFlipped\0mxmAValsFlipped\0"
    "mxmBRowsFlipped\0mxmBColsFlipped\0"
    "mxmBValsFlipped"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlowController[] = {

 // content:
       7,       // revision
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
       3,    1,   67,    2, 0x0a /* Public */,
       4,    1,   70,    2, 0x0a /* Public */,
       5,    1,   73,    2, 0x0a /* Public */,
       6,    1,   76,    2, 0x0a /* Public */,
       7,    1,   79,    2, 0x0a /* Public */,
       8,    1,   82,    2, 0x0a /* Public */,
       9,    1,   85,    2, 0x0a /* Public */,
      10,    1,   88,    2, 0x0a /* Public */,
      11,    1,   91,    2, 0x0a /* Public */,

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

       0        // eod
};

void FlowController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FlowController *_t = static_cast<FlowController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sxmScalarFlipped((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->sxmRowsFlipped((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->sxmColsFlipped((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->sxmValsFlipped((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->mxmARowsFlipped((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->mxmAColsFlipped((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->mxmAValsFlipped((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->mxmBRowsFlipped((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->mxmBColsFlipped((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->mxmBValsFlipped((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject FlowController::staticMetaObject = {
    { &QSignalMapper::staticMetaObject, qt_meta_stringdata_FlowController.data,
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
    return QSignalMapper::qt_metacast(_clname);
}

int FlowController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSignalMapper::qt_metacall(_c, _id, _a);
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
