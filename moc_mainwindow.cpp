/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[314];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 26), // "on_pushButton_back_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 26), // "on_pushButton_play_clicked"
QT_MOC_LITERAL(4, 66, 8), // "playFile"
QT_MOC_LITERAL(5, 75, 14), // "positionChange"
QT_MOC_LITERAL(6, 90, 8), // "position"
QT_MOC_LITERAL(7, 99, 28), // "on_pushButton_volume_clicked"
QT_MOC_LITERAL(8, 128, 25), // "on_volumeBar_valueChanged"
QT_MOC_LITERAL(9, 154, 5), // "value"
QT_MOC_LITERAL(10, 160, 30), // "on_pushButton_previous_clicked"
QT_MOC_LITERAL(11, 191, 26), // "on_pushButton_next_clicked"
QT_MOC_LITERAL(12, 218, 25), // "on_music_list_itemClicked"
QT_MOC_LITERAL(13, 244, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(14, 261, 4), // "item"
QT_MOC_LITERAL(15, 266, 25), // "on_video_list_itemClicked"
QT_MOC_LITERAL(16, 292, 21) // "on_video_back_clicked"

    },
    "MainWindow\0on_pushButton_back_clicked\0"
    "\0on_pushButton_play_clicked\0playFile\0"
    "positionChange\0position\0"
    "on_pushButton_volume_clicked\0"
    "on_volumeBar_valueChanged\0value\0"
    "on_pushButton_previous_clicked\0"
    "on_pushButton_next_clicked\0"
    "on_music_list_itemClicked\0QListWidgetItem*\0"
    "item\0on_video_list_itemClicked\0"
    "on_video_back_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

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
       5,    1,   72,    2, 0x08 /* Private */,
       7,    0,   75,    2, 0x08 /* Private */,
       8,    1,   76,    2, 0x08 /* Private */,
      10,    0,   79,    2, 0x08 /* Private */,
      11,    0,   80,    2, 0x08 /* Private */,
      12,    1,   81,    2, 0x08 /* Private */,
      15,    1,   84,    2, 0x08 /* Private */,
      16,    0,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_back_clicked(); break;
        case 1: _t->on_pushButton_play_clicked(); break;
        case 2: _t->playFile(); break;
        case 3: _t->positionChange((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_volume_clicked(); break;
        case 5: _t->on_volumeBar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_pushButton_previous_clicked(); break;
        case 7: _t->on_pushButton_next_clicked(); break;
        case 8: _t->on_music_list_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 9: _t->on_video_list_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 10: _t->on_video_back_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
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