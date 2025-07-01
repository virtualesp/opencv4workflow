/****************************************************************************
** Meta object code from reading C++ file 'frmCameraSetUp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../frmCameraSetUp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frmCameraSetUp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_frmCameraSetUp_t {
    QByteArrayData data[14];
    char stringdata0[250];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_frmCameraSetUp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_frmCameraSetUp_t qt_meta_stringdata_frmCameraSetUp = {
    {
QT_MOC_LITERAL(0, 0, 14), // "frmCameraSetUp"
QT_MOC_LITERAL(1, 15, 20), // "onButtonCloseClicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 23), // "on_btnAddCamera_clicked"
QT_MOC_LITERAL(4, 61, 26), // "on_btnSearchCamera_clicked"
QT_MOC_LITERAL(5, 88, 21), // "on_btnConnect_clicked"
QT_MOC_LITERAL(6, 110, 24), // "on_btnDisconnect_clicked"
QT_MOC_LITERAL(7, 135, 18), // "on_btnSave_clicked"
QT_MOC_LITERAL(8, 154, 11), // "slot_MoveUp"
QT_MOC_LITERAL(9, 166, 13), // "slot_MoveDown"
QT_MOC_LITERAL(10, 180, 15), // "slot_DeleteName"
QT_MOC_LITERAL(11, 196, 18), // "slot_DoubleClicked"
QT_MOC_LITERAL(12, 215, 17), // "InitCameraConnect"
QT_MOC_LITERAL(13, 233, 16) // "camera_key_value"

    },
    "frmCameraSetUp\0onButtonCloseClicked\0"
    "\0on_btnAddCamera_clicked\0"
    "on_btnSearchCamera_clicked\0"
    "on_btnConnect_clicked\0on_btnDisconnect_clicked\0"
    "on_btnSave_clicked\0slot_MoveUp\0"
    "slot_MoveDown\0slot_DeleteName\0"
    "slot_DoubleClicked\0InitCameraConnect\0"
    "camera_key_value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_frmCameraSetUp[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    2,   78,    2, 0x08 /* Private */,
      12,    1,   83,    2, 0x0a /* Public */,

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
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

void frmCameraSetUp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<frmCameraSetUp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onButtonCloseClicked(); break;
        case 1: _t->on_btnAddCamera_clicked(); break;
        case 2: _t->on_btnSearchCamera_clicked(); break;
        case 3: _t->on_btnConnect_clicked(); break;
        case 4: _t->on_btnDisconnect_clicked(); break;
        case 5: _t->on_btnSave_clicked(); break;
        case 6: _t->slot_MoveUp(); break;
        case 7: _t->slot_MoveDown(); break;
        case 8: _t->slot_DeleteName(); break;
        case 9: _t->slot_DoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->InitCameraConnect((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject frmCameraSetUp::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_frmCameraSetUp.data,
    qt_meta_data_frmCameraSetUp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *frmCameraSetUp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *frmCameraSetUp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_frmCameraSetUp.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int frmCameraSetUp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
