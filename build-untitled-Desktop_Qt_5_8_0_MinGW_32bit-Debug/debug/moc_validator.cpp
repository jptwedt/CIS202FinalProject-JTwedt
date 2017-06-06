/****************************************************************************
** Meta object code from reading C++ file 'validator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CIS202_Final-JohnTwedt/validator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'validator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Validator_t {
    QByteArrayData data[7];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Validator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Validator_t qt_meta_stringdata_Validator = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Validator"
QT_MOC_LITERAL(1, 10, 13), // "sxmScalarGood"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 9), // "sxmRowsOK"
QT_MOC_LITERAL(4, 35, 9), // "sxmColsOK"
QT_MOC_LITERAL(5, 45, 15), // "sxmScalarEdited"
QT_MOC_LITERAL(6, 61, 5) // "entry"

    },
    "Validator\0sxmScalarGood\0\0sxmRowsOK\0"
    "sxmColsOK\0sxmScalarEdited\0entry"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Validator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       3,    0,   37,    2, 0x06 /* Public */,
       4,    0,   38,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Int, QMetaType::QString,    6,

       0        // eod
};

void Validator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Validator *_t = static_cast<Validator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sxmScalarGood((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->sxmRowsOK(); break;
        case 2: _t->sxmColsOK(); break;
        case 3: { int _r = _t->sxmScalarEdited((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Validator::*_t)(qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Validator::sxmScalarGood)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Validator::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Validator::sxmRowsOK)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Validator::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Validator::sxmColsOK)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject Validator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Validator.data,
      qt_meta_data_Validator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Validator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Validator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Validator.stringdata0))
        return static_cast<void*>(const_cast< Validator*>(this));
    return QObject::qt_metacast(_clname);
}

int Validator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void Validator::sxmScalarGood(qreal _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Validator::sxmRowsOK()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Validator::sxmColsOK()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
