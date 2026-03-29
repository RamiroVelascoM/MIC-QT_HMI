/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[56];
    char stringdata0[339];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 9), // "OnQTimer1"
QT_MOC_LITERAL(21, 0), // ""
QT_MOC_LITERAL(22, 11), // "eventFilter"
QT_MOC_LITERAL(34, 7), // "watched"
QT_MOC_LITERAL(42, 7), // "QEvent*"
QT_MOC_LITERAL(50, 5), // "event"
QT_MOC_LITERAL(56, 8), // "OnRxChar"
QT_MOC_LITERAL(65, 12), // "DecodeHeader"
QT_MOC_LITERAL(78, 8), // "uint8_t*"
QT_MOC_LITERAL(87, 3), // "buf"
QT_MOC_LITERAL(91, 5), // "count"
QT_MOC_LITERAL(97, 7), // "onRxUDP"
QT_MOC_LITERAL(105, 9), // "DecodeCmd"
QT_MOC_LITERAL(115, 5), // "rxBuf"
QT_MOC_LITERAL(121, 13), // "DrawMotionMPU"
QT_MOC_LITERAL(135, 12), // "DrawMovement"
QT_MOC_LITERAL(148, 7), // "buttons"
QT_MOC_LITERAL(156, 16), // "QAbstractButton*"
QT_MOC_LITERAL(173, 6), // "button"
QT_MOC_LITERAL(180, 7), // "SendCMD"
QT_MOC_LITERAL(188, 7), // "uint8_t"
QT_MOC_LITERAL(196, 6), // "length"
QT_MOC_LITERAL(203, 25), // "on_SendCMD_Button_clicked"
QT_MOC_LITERAL(229, 28), // "on_LimpiarCMD_Button_clicked"
QT_MOC_LITERAL(258, 22), // "on_Connect_USB_clicked"
QT_MOC_LITERAL(281, 30), // "on_Connect_WIFI_Button_clicked"
QT_MOC_LITERAL(312, 26) // "on_startModeButton_clicked"

    },
    "MainWindow\0OnQTimer1\0\0eventFilter\0"
    "watched\0QEvent*\0event\0OnRxChar\0"
    "DecodeHeader\0uint8_t*\0buf\0count\0onRxUDP\0"
    "DecodeCmd\0rxBuf\0DrawMotionMPU\0"
    "DrawMovement\0buttons\0QAbstractButton*\0"
    "button\0SendCMD\0uint8_t\0length\0"
    "on_SendCMD_Button_clicked\0"
    "on_LimpiarCMD_Button_clicked\0"
    "on_Connect_USB_clicked\0"
    "on_Connect_WIFI_Button_clicked\0"
    "on_startModeButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  104,    2, 0x08,    1 /* Private */,
       3,    2,  105,    2, 0x08,    2 /* Private */,
       7,    0,  110,    2, 0x08,    5 /* Private */,
       8,    2,  111,    2, 0x08,    6 /* Private */,
      12,    0,  116,    2, 0x08,    9 /* Private */,
      13,    1,  117,    2, 0x08,   10 /* Private */,
      15,    0,  120,    2, 0x08,   12 /* Private */,
      16,    0,  121,    2, 0x08,   13 /* Private */,
      17,    1,  122,    2, 0x08,   14 /* Private */,
      20,    2,  125,    2, 0x08,   16 /* Private */,
      23,    0,  130,    2, 0x08,   19 /* Private */,
      24,    0,  131,    2, 0x08,   20 /* Private */,
      25,    0,  132,    2, 0x08,   21 /* Private */,
      26,    0,  133,    2, 0x08,   22 /* Private */,
      27,    0,  134,    2, 0x08,   23 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QObjectStar, 0x80000000 | 5,    4,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int,   10,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 21,   10,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->OnQTimer1(); break;
        case 1: { bool _r = _t->eventFilter((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QEvent*>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->OnRxChar(); break;
        case 3: _t->DecodeHeader((*reinterpret_cast< std::add_pointer_t<uint8_t*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->onRxUDP(); break;
        case 5: _t->DecodeCmd((*reinterpret_cast< std::add_pointer_t<uint8_t*>>(_a[1]))); break;
        case 6: _t->DrawMotionMPU(); break;
        case 7: _t->DrawMovement(); break;
        case 8: _t->buttons((*reinterpret_cast< std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        case 9: _t->SendCMD((*reinterpret_cast< std::add_pointer_t<uint8_t*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint8_t>>(_a[2]))); break;
        case 10: _t->on_SendCMD_Button_clicked(); break;
        case 11: _t->on_LimpiarCMD_Button_clicked(); break;
        case 12: _t->on_Connect_USB_clicked(); break;
        case 13: _t->on_Connect_WIFI_Button_clicked(); break;
        case 14: _t->on_startModeButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<QObject *, std::false_type>, QtPrivate::TypeAndForceComplete<QEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<uint8_t *, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<uint8_t *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QAbstractButton *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<uint8_t *, std::false_type>, QtPrivate::TypeAndForceComplete<uint8_t, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
