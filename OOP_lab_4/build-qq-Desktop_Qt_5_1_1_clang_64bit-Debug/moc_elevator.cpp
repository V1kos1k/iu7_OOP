/****************************************************************************
** Meta object code from reading C++ file 'elevator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qq/elevator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'elevator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Elevator_t {
    QByteArrayData data[14];
    char stringdata[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Elevator_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Elevator_t qt_meta_stringdata_Elevator = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 8),
QT_MOC_LITERAL(2, 18, 0),
QT_MOC_LITERAL(3, 19, 10),
QT_MOC_LITERAL(4, 30, 6),
QT_MOC_LITERAL(5, 37, 6),
QT_MOC_LITERAL(6, 44, 12),
QT_MOC_LITERAL(7, 57, 5),
QT_MOC_LITERAL(8, 63, 10),
QT_MOC_LITERAL(9, 74, 12),
QT_MOC_LITERAL(10, 87, 6),
QT_MOC_LITERAL(11, 94, 9),
QT_MOC_LITERAL(12, 104, 9),
QT_MOC_LITERAL(13, 114, 8)
    },
    "Elevator\0doMoveUp\0\0doMoveDown\0doOpen\0"
    "doStop\0onPushButton\0level\0onMovingUp\0"
    "onMovingDown\0onIdle\0onOpening\0onClosing\0"
    "onOpened\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Elevator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x05,
       3,    0,   70,    2, 0x05,
       4,    0,   71,    2, 0x05,
       5,    0,   72,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       6,    1,   73,    2, 0x0a,
       8,    0,   76,    2, 0x0a,
       9,    0,   77,    2, 0x0a,
      10,    0,   78,    2, 0x0a,
      11,    0,   79,    2, 0x0a,
      12,    0,   80,    2, 0x0a,
      13,    0,   81,    2, 0x0a,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Elevator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Elevator *_t = static_cast<Elevator *>(_o);
        switch (_id) {
        case 0: _t->doMoveUp(); break;
        case 1: _t->doMoveDown(); break;
        case 2: _t->doOpen(); break;
        case 3: _t->doStop(); break;
        case 4: _t->onPushButton((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->onMovingUp(); break;
        case 6: _t->onMovingDown(); break;
        case 7: _t->onIdle(); break;
        case 8: _t->onOpening(); break;
        case 9: _t->onClosing(); break;
        case 10: _t->onOpened(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Elevator::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Elevator::doMoveUp)) {
                *result = 0;
            }
        }
        {
            typedef void (Elevator::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Elevator::doMoveDown)) {
                *result = 1;
            }
        }
        {
            typedef void (Elevator::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Elevator::doOpen)) {
                *result = 2;
            }
        }
        {
            typedef void (Elevator::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Elevator::doStop)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject Elevator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Elevator.data,
      qt_meta_data_Elevator,  qt_static_metacall, 0, 0}
};


const QMetaObject *Elevator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Elevator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Elevator.stringdata))
        return static_cast<void*>(const_cast< Elevator*>(this));
    return QObject::qt_metacast(_clname);
}

int Elevator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Elevator::doMoveUp()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Elevator::doMoveDown()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Elevator::doOpen()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Elevator::doStop()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
QT_END_MOC_NAMESPACE
