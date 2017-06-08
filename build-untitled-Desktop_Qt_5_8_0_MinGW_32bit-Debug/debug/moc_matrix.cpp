/****************************************************************************
** Meta object code from reading C++ file 'matrix.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CIS202_Final-JohnTwedt/matrix.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'matrix.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Matrix_t {
    QByteArrayData data[27];
    char stringdata0[275];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Matrix_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Matrix_t qt_meta_stringdata_Matrix = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Matrix"
QT_MOC_LITERAL(1, 7, 14), // "matrixToOutput"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 17), // "autoFilledMatrixA"
QT_MOC_LITERAL(4, 41, 17), // "autoFilledMatrixB"
QT_MOC_LITERAL(5, 59, 10), // "sxmToggled"
QT_MOC_LITERAL(6, 70, 6), // "toggle"
QT_MOC_LITERAL(7, 77, 10), // "mxmToggled"
QT_MOC_LITERAL(8, 88, 10), // "addToggled"
QT_MOC_LITERAL(9, 99, 15), // "subtractToggled"
QT_MOC_LITERAL(10, 115, 15), // "multiplyToggled"
QT_MOC_LITERAL(11, 131, 10), // "goodScalar"
QT_MOC_LITERAL(12, 142, 6), // "scalar"
QT_MOC_LITERAL(13, 149, 9), // "goodRowsA"
QT_MOC_LITERAL(14, 159, 4), // "rows"
QT_MOC_LITERAL(15, 164, 9), // "goodColsA"
QT_MOC_LITERAL(16, 174, 4), // "cols"
QT_MOC_LITERAL(17, 179, 9), // "goodRowsB"
QT_MOC_LITERAL(18, 189, 9), // "goodColsB"
QT_MOC_LITERAL(19, 199, 11), // "goodMatrixA"
QT_MOC_LITERAL(20, 211, 2), // "ma"
QT_MOC_LITERAL(21, 214, 11), // "goodMatrixB"
QT_MOC_LITERAL(22, 226, 2), // "mb"
QT_MOC_LITERAL(23, 229, 9), // "autofillA"
QT_MOC_LITERAL(24, 239, 9), // "autofillB"
QT_MOC_LITERAL(25, 249, 12), // "sxmSubmitted"
QT_MOC_LITERAL(26, 262, 12) // "mxmSubmitted"

    },
    "Matrix\0matrixToOutput\0\0autoFilledMatrixA\0"
    "autoFilledMatrixB\0sxmToggled\0toggle\0"
    "mxmToggled\0addToggled\0subtractToggled\0"
    "multiplyToggled\0goodScalar\0scalar\0"
    "goodRowsA\0rows\0goodColsA\0cols\0goodRowsB\0"
    "goodColsB\0goodMatrixA\0ma\0goodMatrixB\0"
    "mb\0autofillA\0autofillB\0sxmSubmitted\0"
    "mxmSubmitted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Matrix[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  109,    2, 0x06 /* Public */,
       3,    1,  116,    2, 0x06 /* Public */,
       4,    1,  119,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,  122,    2, 0x0a /* Public */,
       7,    1,  125,    2, 0x0a /* Public */,
       8,    1,  128,    2, 0x0a /* Public */,
       9,    1,  131,    2, 0x0a /* Public */,
      10,    1,  134,    2, 0x0a /* Public */,
      11,    1,  137,    2, 0x0a /* Public */,
      13,    1,  140,    2, 0x0a /* Public */,
      15,    1,  143,    2, 0x0a /* Public */,
      17,    1,  146,    2, 0x0a /* Public */,
      18,    1,  149,    2, 0x0a /* Public */,
      19,    1,  152,    2, 0x0a /* Public */,
      21,    1,  155,    2, 0x0a /* Public */,
      23,    0,  158,    2, 0x0a /* Public */,
      24,    0,  159,    2, 0x0a /* Public */,
      25,    0,  160,    2, 0x0a /* Public */,
      26,    0,  161,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QStringList,    2,    2,    2,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::QStringList,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::QReal,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::QStringList,   20,
    QMetaType::Void, QMetaType::QStringList,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Matrix::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Matrix *_t = static_cast<Matrix *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->matrixToOutput((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QStringList(*)>(_a[3]))); break;
        case 1: _t->autoFilledMatrixA((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 2: _t->autoFilledMatrixB((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 3: _t->sxmToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->mxmToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->addToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->subtractToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->multiplyToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->goodScalar((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 9: _t->goodRowsA((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->goodColsA((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->goodRowsB((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->goodColsB((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->goodMatrixA((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 14: _t->goodMatrixB((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 15: _t->autofillA(); break;
        case 16: _t->autofillB(); break;
        case 17: _t->sxmSubmitted(); break;
        case 18: _t->mxmSubmitted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Matrix::*_t)(int , int , QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Matrix::matrixToOutput)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Matrix::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Matrix::autoFilledMatrixA)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Matrix::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Matrix::autoFilledMatrixB)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject Matrix::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Matrix.data,
      qt_meta_data_Matrix,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Matrix::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Matrix::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Matrix.stringdata0))
        return static_cast<void*>(const_cast< Matrix*>(this));
    return QObject::qt_metacast(_clname);
}

int Matrix::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void Matrix::matrixToOutput(int _t1, int _t2, QStringList _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Matrix::autoFilledMatrixA(QStringList _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Matrix::autoFilledMatrixB(QStringList _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
