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
    QByteArrayData data[23];
    char stringdata0[312];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlowController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlowController_t qt_meta_stringdata_FlowController = {
    {
QT_MOC_LITERAL(0, 0, 14), // "FlowController"
QT_MOC_LITERAL(1, 15, 13), // "enableSxMVals"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 15), // "enableSxMSubmit"
QT_MOC_LITERAL(4, 46, 14), // "enableMxMAVals"
QT_MOC_LITERAL(5, 61, 14), // "enableMxMBVals"
QT_MOC_LITERAL(6, 76, 15), // "enableMxMSubmit"
QT_MOC_LITERAL(7, 92, 11), // "sxmSelected"
QT_MOC_LITERAL(8, 104, 6), // "toggle"
QT_MOC_LITERAL(9, 111, 11), // "mxmSelected"
QT_MOC_LITERAL(10, 123, 16), // "addButtonToggled"
QT_MOC_LITERAL(11, 140, 21), // "subtractButtonToggled"
QT_MOC_LITERAL(12, 162, 21), // "multiplyButtonToggled"
QT_MOC_LITERAL(13, 184, 13), // "sxmScalarGood"
QT_MOC_LITERAL(14, 198, 11), // "sxmRowsGood"
QT_MOC_LITERAL(15, 210, 11), // "sxmColsGood"
QT_MOC_LITERAL(16, 222, 11), // "sxmValsGood"
QT_MOC_LITERAL(17, 234, 12), // "mxmARowsGood"
QT_MOC_LITERAL(18, 247, 12), // "mxmAColsGood"
QT_MOC_LITERAL(19, 260, 12), // "mxmAValsGood"
QT_MOC_LITERAL(20, 273, 12), // "mxmBRowsGood"
QT_MOC_LITERAL(21, 286, 12), // "mxmBColsGood"
QT_MOC_LITERAL(22, 299, 12) // "mxmBValsGood"

    },
    "FlowController\0enableSxMVals\0\0"
    "enableSxMSubmit\0enableMxMAVals\0"
    "enableMxMBVals\0enableMxMSubmit\0"
    "sxmSelected\0toggle\0mxmSelected\0"
    "addButtonToggled\0subtractButtonToggled\0"
    "multiplyButtonToggled\0sxmScalarGood\0"
    "sxmRowsGood\0sxmColsGood\0sxmValsGood\0"
    "mxmARowsGood\0mxmAColsGood\0mxmAValsGood\0"
    "mxmBRowsGood\0mxmBColsGood\0mxmBValsGood"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlowController[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  114,    2, 0x06 /* Public */,
       3,    1,  117,    2, 0x06 /* Public */,
       4,    1,  120,    2, 0x06 /* Public */,
       5,    1,  123,    2, 0x06 /* Public */,
       6,    1,  126,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,  129,    2, 0x0a /* Public */,
       9,    1,  132,    2, 0x0a /* Public */,
      10,    1,  135,    2, 0x0a /* Public */,
      11,    1,  138,    2, 0x0a /* Public */,
      12,    1,  141,    2, 0x0a /* Public */,
      13,    1,  144,    2, 0x0a /* Public */,
      14,    1,  147,    2, 0x0a /* Public */,
      15,    1,  150,    2, 0x0a /* Public */,
      16,    1,  153,    2, 0x0a /* Public */,
      17,    1,  156,    2, 0x0a /* Public */,
      18,    1,  159,    2, 0x0a /* Public */,
      19,    1,  162,    2, 0x0a /* Public */,
      20,    1,  165,    2, 0x0a /* Public */,
      21,    1,  168,    2, 0x0a /* Public */,
      22,    1,  171,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,

       0        // eod
};

void FlowController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FlowController *_t = static_cast<FlowController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enableSxMVals((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->enableSxMSubmit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->enableMxMAVals((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->enableMxMBVals((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->enableMxMSubmit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->sxmSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->mxmSelected((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->addButtonToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->subtractButtonToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->multiplyButtonToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->sxmScalarGood((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->sxmRowsGood((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->sxmColsGood((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->sxmValsGood((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->mxmARowsGood((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->mxmAColsGood((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->mxmAValsGood((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->mxmBRowsGood((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->mxmBColsGood((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->mxmBValsGood((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FlowController::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FlowController::enableSxMVals)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (FlowController::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FlowController::enableSxMSubmit)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (FlowController::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FlowController::enableMxMAVals)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (FlowController::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FlowController::enableMxMBVals)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (FlowController::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FlowController::enableMxMSubmit)) {
                *result = 4;
                return;
            }
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
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void FlowController::enableSxMVals(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FlowController::enableSxMSubmit(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FlowController::enableMxMAVals(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FlowController::enableMxMBVals(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FlowController::enableMxMSubmit(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
