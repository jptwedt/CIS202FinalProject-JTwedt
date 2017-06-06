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
    QByteArrayData data[21];
    char stringdata0[224];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Matrix_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Matrix_t qt_meta_stringdata_Matrix = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Matrix"
QT_MOC_LITERAL(1, 7, 14), // "scalarToFormat"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 6), // "output"
QT_MOC_LITERAL(4, 30, 14), // "matrixToFormat"
QT_MOC_LITERAL(5, 45, 15), // "matrixAToFormat"
QT_MOC_LITERAL(6, 61, 15), // "matrixBToFormat"
QT_MOC_LITERAL(7, 77, 10), // "addToggled"
QT_MOC_LITERAL(8, 88, 6), // "toggle"
QT_MOC_LITERAL(9, 95, 15), // "subtractToggled"
QT_MOC_LITERAL(10, 111, 15), // "multiplyToggled"
QT_MOC_LITERAL(11, 127, 10), // "goodScalar"
QT_MOC_LITERAL(12, 138, 9), // "newScalar"
QT_MOC_LITERAL(13, 148, 11), // "goodMatrixA"
QT_MOC_LITERAL(14, 160, 2), // "ma"
QT_MOC_LITERAL(15, 163, 11), // "goodMatrixB"
QT_MOC_LITERAL(16, 175, 2), // "mb"
QT_MOC_LITERAL(17, 178, 9), // "autofillA"
QT_MOC_LITERAL(18, 188, 9), // "autofillB"
QT_MOC_LITERAL(19, 198, 12), // "sxmSubmitted"
QT_MOC_LITERAL(20, 211, 12) // "mxmSubmitted"

    },
    "Matrix\0scalarToFormat\0\0output\0"
    "matrixToFormat\0matrixAToFormat\0"
    "matrixBToFormat\0addToggled\0toggle\0"
    "subtractToggled\0multiplyToggled\0"
    "goodScalar\0newScalar\0goodMatrixA\0ma\0"
    "goodMatrixB\0mb\0autofillA\0autofillB\0"
    "sxmSubmitted\0mxmSubmitted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Matrix[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    1,   87,    2, 0x06 /* Public */,
       5,    1,   90,    2, 0x06 /* Public */,
       6,    1,   93,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   96,    2, 0x0a /* Public */,
       9,    1,   99,    2, 0x0a /* Public */,
      10,    1,  102,    2, 0x0a /* Public */,
      11,    1,  105,    2, 0x0a /* Public */,
      13,    1,  108,    2, 0x0a /* Public */,
      15,    1,  111,    2, 0x0a /* Public */,
      17,    0,  114,    2, 0x0a /* Public */,
      18,    0,  115,    2, 0x0a /* Public */,
      19,    0,  116,    2, 0x0a /* Public */,
      20,    0,  117,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::QReal,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   16,
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
        case 0: _t->scalarToFormat((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->matrixToFormat((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->matrixAToFormat((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->matrixBToFormat((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->addToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->subtractToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->multiplyToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->goodScalar((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 8: _t->goodMatrixA((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->goodMatrixB((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->autofillA(); break;
        case 11: _t->autofillB(); break;
        case 12: _t->sxmSubmitted(); break;
        case 13: _t->mxmSubmitted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Matrix::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Matrix::scalarToFormat)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Matrix::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Matrix::matrixToFormat)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Matrix::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Matrix::matrixAToFormat)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Matrix::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Matrix::matrixBToFormat)) {
                *result = 3;
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
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Matrix::scalarToFormat(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Matrix::matrixToFormat(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Matrix::matrixAToFormat(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Matrix::matrixBToFormat(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
