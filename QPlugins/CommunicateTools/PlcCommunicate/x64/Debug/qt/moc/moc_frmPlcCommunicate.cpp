/****************************************************************************
** Meta object code from reading C++ file 'frmPlcCommunicate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../frmPlcCommunicate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frmPlcCommunicate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_frmPlcCommunicate_t {
    QByteArrayData data[40];
    char stringdata0[653];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_frmPlcCommunicate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_frmPlcCommunicate_t qt_meta_stringdata_frmPlcCommunicate = {
    {
QT_MOC_LITERAL(0, 0, 17), // "frmPlcCommunicate"
QT_MOC_LITERAL(1, 18, 16), // "sig_AsciiWrite1D"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 11), // "QTcpSocket*"
QT_MOC_LITERAL(4, 48, 8), // "m_socket"
QT_MOC_LITERAL(5, 57, 6), // "device"
QT_MOC_LITERAL(6, 64, 5), // "value"
QT_MOC_LITERAL(7, 70, 15), // "sig_AsciiRead1D"
QT_MOC_LITERAL(8, 86, 6), // "short&"
QT_MOC_LITERAL(9, 93, 16), // "sig_AsciiWrite2D"
QT_MOC_LITERAL(10, 110, 15), // "sig_AsciiRead2D"
QT_MOC_LITERAL(11, 126, 4), // "int&"
QT_MOC_LITERAL(12, 131, 17), // "sig_BinaryWrite1D"
QT_MOC_LITERAL(13, 149, 6), // "string"
QT_MOC_LITERAL(14, 156, 17), // "sig_BinaryWrite2D"
QT_MOC_LITERAL(15, 174, 16), // "sig_BinaryRead1D"
QT_MOC_LITERAL(16, 191, 16), // "sig_BinaryRead2D"
QT_MOC_LITERAL(17, 208, 20), // "onButtonCloseClicked"
QT_MOC_LITERAL(18, 229, 21), // "on_btnExecute_clicked"
QT_MOC_LITERAL(19, 251, 20), // "on_btnUpdata_clicked"
QT_MOC_LITERAL(20, 272, 25), // "on_btnAddRegister_clicked"
QT_MOC_LITERAL(21, 298, 28), // "on_btnDeleteRegister_clicked"
QT_MOC_LITERAL(22, 327, 33), // "on_btnLinkMitRegisterData_cli..."
QT_MOC_LITERAL(23, 361, 36), // "on_btnDelLinkMitRegisterData_..."
QT_MOC_LITERAL(24, 398, 21), // "on_btnMitSave_clicked"
QT_MOC_LITERAL(25, 420, 21), // "on_btnMitBack_clicked"
QT_MOC_LITERAL(26, 442, 36), // "on_comboCommName_currentIndex..."
QT_MOC_LITERAL(27, 479, 5), // "index"
QT_MOC_LITERAL(28, 485, 21), // "slot_PlcDoubleClicked"
QT_MOC_LITERAL(29, 507, 12), // "onRadioClick"
QT_MOC_LITERAL(30, 520, 23), // "slot_MitRegisterAddress"
QT_MOC_LITERAL(31, 544, 4), // "text"
QT_MOC_LITERAL(32, 549, 12), // "AsciiWrite1D"
QT_MOC_LITERAL(33, 562, 11), // "AsciiRead1D"
QT_MOC_LITERAL(34, 574, 12), // "AsciiWrite2D"
QT_MOC_LITERAL(35, 587, 11), // "AsciiRead2D"
QT_MOC_LITERAL(36, 599, 13), // "BinaryWrite1D"
QT_MOC_LITERAL(37, 613, 13), // "BinaryWrite2D"
QT_MOC_LITERAL(38, 627, 12), // "BinaryRead1D"
QT_MOC_LITERAL(39, 640, 12) // "BinaryRead2D"

    },
    "frmPlcCommunicate\0sig_AsciiWrite1D\0\0"
    "QTcpSocket*\0m_socket\0device\0value\0"
    "sig_AsciiRead1D\0short&\0sig_AsciiWrite2D\0"
    "sig_AsciiRead2D\0int&\0sig_BinaryWrite1D\0"
    "string\0sig_BinaryWrite2D\0sig_BinaryRead1D\0"
    "sig_BinaryRead2D\0onButtonCloseClicked\0"
    "on_btnExecute_clicked\0on_btnUpdata_clicked\0"
    "on_btnAddRegister_clicked\0"
    "on_btnDeleteRegister_clicked\0"
    "on_btnLinkMitRegisterData_clicked\0"
    "on_btnDelLinkMitRegisterData_clicked\0"
    "on_btnMitSave_clicked\0on_btnMitBack_clicked\0"
    "on_comboCommName_currentIndexChanged\0"
    "index\0slot_PlcDoubleClicked\0onRadioClick\0"
    "slot_MitRegisterAddress\0text\0AsciiWrite1D\0"
    "AsciiRead1D\0AsciiWrite2D\0AsciiRead2D\0"
    "BinaryWrite1D\0BinaryWrite2D\0BinaryRead1D\0"
    "BinaryRead2D"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_frmPlcCommunicate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  159,    2, 0x06 /* Public */,
       7,    3,  166,    2, 0x06 /* Public */,
       9,    3,  173,    2, 0x06 /* Public */,
      10,    3,  180,    2, 0x06 /* Public */,
      12,    3,  187,    2, 0x06 /* Public */,
      14,    3,  194,    2, 0x06 /* Public */,
      15,    3,  201,    2, 0x06 /* Public */,
      16,    3,  208,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    0,  215,    2, 0x08 /* Private */,
      18,    0,  216,    2, 0x08 /* Private */,
      19,    0,  217,    2, 0x08 /* Private */,
      20,    0,  218,    2, 0x08 /* Private */,
      21,    0,  219,    2, 0x08 /* Private */,
      22,    0,  220,    2, 0x08 /* Private */,
      23,    0,  221,    2, 0x08 /* Private */,
      24,    0,  222,    2, 0x08 /* Private */,
      25,    0,  223,    2, 0x08 /* Private */,
      26,    1,  224,    2, 0x08 /* Private */,
      28,    2,  227,    2, 0x08 /* Private */,
      29,    0,  232,    2, 0x08 /* Private */,
      30,    1,  233,    2, 0x08 /* Private */,
      32,    3,  236,    2, 0x08 /* Private */,
      33,    3,  243,    2, 0x08 /* Private */,
      34,    3,  250,    2, 0x08 /* Private */,
      35,    3,  257,    2, 0x08 /* Private */,
      36,    3,  264,    2, 0x08 /* Private */,
      37,    3,  271,    2, 0x08 /* Private */,
      38,    3,  278,    2, 0x08 /* Private */,
      39,    3,  285,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Bool, 0x80000000 | 3, QMetaType::QString, QMetaType::Short,    4,    5,    6,
    QMetaType::Bool, 0x80000000 | 3, QMetaType::QString, 0x80000000 | 8,    4,    5,    6,
    QMetaType::Bool, 0x80000000 | 3, QMetaType::QString, QMetaType::Int,    4,    5,    6,
    QMetaType::Bool, 0x80000000 | 3, QMetaType::QString, 0x80000000 | 11,    4,    5,    6,
    QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 13, QMetaType::Short,    4,    5,    6,
    QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 13, QMetaType::Int,    4,    5,    6,
    QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 13, 0x80000000 | 8,    4,    5,    6,
    QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 13, 0x80000000 | 11,    4,    5,    6,

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
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Bool, 0x80000000 | 3, QMetaType::QString, QMetaType::Short,    4,    5,    6,
    QMetaType::Bool, 0x80000000 | 3, QMetaType::QString, 0x80000000 | 8,    4,    5,    6,
    QMetaType::Bool, 0x80000000 | 3, QMetaType::QString, QMetaType::Int,    4,    5,    6,
    QMetaType::Bool, 0x80000000 | 3, QMetaType::QString, 0x80000000 | 11,    4,    5,    6,
    QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 13, QMetaType::Short,    4,    5,    6,
    QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 13, QMetaType::Int,    4,    5,    6,
    QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 13, 0x80000000 | 8,    4,    5,    6,
    QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 13, 0x80000000 | 11,    4,    5,    6,

       0        // eod
};

void frmPlcCommunicate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<frmPlcCommunicate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->sig_AsciiWrite1D((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< short(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->sig_AsciiRead1D((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< short(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->sig_AsciiWrite2D((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->sig_AsciiRead2D((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->sig_BinaryWrite1D((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2])),(*reinterpret_cast< short(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->sig_BinaryWrite2D((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->sig_BinaryRead1D((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2])),(*reinterpret_cast< short(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->sig_BinaryRead2D((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->onButtonCloseClicked(); break;
        case 9: _t->on_btnExecute_clicked(); break;
        case 10: _t->on_btnUpdata_clicked(); break;
        case 11: _t->on_btnAddRegister_clicked(); break;
        case 12: _t->on_btnDeleteRegister_clicked(); break;
        case 13: _t->on_btnLinkMitRegisterData_clicked(); break;
        case 14: _t->on_btnDelLinkMitRegisterData_clicked(); break;
        case 15: _t->on_btnMitSave_clicked(); break;
        case 16: _t->on_btnMitBack_clicked(); break;
        case 17: _t->on_comboCommName_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->slot_PlcDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->onRadioClick(); break;
        case 20: _t->slot_MitRegisterAddress((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 21: { bool _r = _t->AsciiWrite1D((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< short(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 22: { bool _r = _t->AsciiRead1D((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< short(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 23: { bool _r = _t->AsciiWrite2D((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 24: { bool _r = _t->AsciiRead2D((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 25: { bool _r = _t->BinaryWrite1D((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2])),(*reinterpret_cast< short(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 26: { bool _r = _t->BinaryWrite2D((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 27: { bool _r = _t->BinaryRead1D((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2])),(*reinterpret_cast< short(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 28: { bool _r = _t->BinaryRead2D((*reinterpret_cast< QTcpSocket*(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTcpSocket* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = bool (frmPlcCommunicate::*)(QTcpSocket * , QString , short );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&frmPlcCommunicate::sig_AsciiWrite1D)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = bool (frmPlcCommunicate::*)(QTcpSocket * , QString , short & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&frmPlcCommunicate::sig_AsciiRead1D)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = bool (frmPlcCommunicate::*)(QTcpSocket * , QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&frmPlcCommunicate::sig_AsciiWrite2D)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = bool (frmPlcCommunicate::*)(QTcpSocket * , QString , int & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&frmPlcCommunicate::sig_AsciiRead2D)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = bool (frmPlcCommunicate::*)(QTcpSocket * , string , short );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&frmPlcCommunicate::sig_BinaryWrite1D)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = bool (frmPlcCommunicate::*)(QTcpSocket * , string , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&frmPlcCommunicate::sig_BinaryWrite2D)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = bool (frmPlcCommunicate::*)(QTcpSocket * , string , short & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&frmPlcCommunicate::sig_BinaryRead1D)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = bool (frmPlcCommunicate::*)(QTcpSocket * , string , int & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&frmPlcCommunicate::sig_BinaryRead2D)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject frmPlcCommunicate::staticMetaObject = { {
    QMetaObject::SuperData::link<Toolnterface::staticMetaObject>(),
    qt_meta_stringdata_frmPlcCommunicate.data,
    qt_meta_data_frmPlcCommunicate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *frmPlcCommunicate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *frmPlcCommunicate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_frmPlcCommunicate.stringdata0))
        return static_cast<void*>(this);
    return Toolnterface::qt_metacast(_clname);
}

int frmPlcCommunicate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Toolnterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    }
    return _id;
}

// SIGNAL 0
bool frmPlcCommunicate::sig_AsciiWrite1D(QTcpSocket * _t1, QString _t2, short _t3)
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
bool frmPlcCommunicate::sig_AsciiRead1D(QTcpSocket * _t1, QString _t2, short & _t3)
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}

// SIGNAL 2
bool frmPlcCommunicate::sig_AsciiWrite2D(QTcpSocket * _t1, QString _t2, int _t3)
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
    return _t0;
}

// SIGNAL 3
bool frmPlcCommunicate::sig_AsciiRead2D(QTcpSocket * _t1, QString _t2, int & _t3)
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
    return _t0;
}

// SIGNAL 4
bool frmPlcCommunicate::sig_BinaryWrite1D(QTcpSocket * _t1, string _t2, short _t3)
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
    return _t0;
}

// SIGNAL 5
bool frmPlcCommunicate::sig_BinaryWrite2D(QTcpSocket * _t1, string _t2, int _t3)
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
    return _t0;
}

// SIGNAL 6
bool frmPlcCommunicate::sig_BinaryRead1D(QTcpSocket * _t1, string _t2, short & _t3)
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
    return _t0;
}

// SIGNAL 7
bool frmPlcCommunicate::sig_BinaryRead2D(QTcpSocket * _t1, string _t2, int & _t3)
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
    return _t0;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
