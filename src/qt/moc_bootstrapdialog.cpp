/****************************************************************************
** Meta object code from reading C++ file 'bootstrapdialog.h'
**
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qt/bootstrapdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bootstrapdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BootstrapDialog_t {
    QByteArrayData data[17];
    char stringdata0[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BootstrapDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BootstrapDialog_t qt_meta_stringdata_BootstrapDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "BootstrapDialog"
QT_MOC_LITERAL(1, 16, 18), // "onButtonSelectFile"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 11), // "onButtonRun"
QT_MOC_LITERAL(4, 48, 12), // "onButtonHide"
QT_MOC_LITERAL(5, 61, 14), // "onButtonCancel"
QT_MOC_LITERAL(6, 76, 18), // "onButtonRadioCloud"
QT_MOC_LITERAL(7, 95, 17), // "onButtonRadioFile"
QT_MOC_LITERAL(8, 113, 21), // "onEditFilePathChanged"
QT_MOC_LITERAL(9, 135, 4), // "text"
QT_MOC_LITERAL(10, 140, 23), // "onBootstrapModelChanged"
QT_MOC_LITERAL(11, 164, 19), // "onBootstrapProgress"
QT_MOC_LITERAL(12, 184, 5), // "title"
QT_MOC_LITERAL(13, 190, 9), // "nProgress"
QT_MOC_LITERAL(14, 200, 20), // "onBootstrapCompleted"
QT_MOC_LITERAL(15, 221, 7), // "success"
QT_MOC_LITERAL(16, 229, 5) // "error"

    },
    "BootstrapDialog\0onButtonSelectFile\0\0"
    "onButtonRun\0onButtonHide\0onButtonCancel\0"
    "onButtonRadioCloud\0onButtonRadioFile\0"
    "onEditFilePathChanged\0text\0"
    "onBootstrapModelChanged\0onBootstrapProgress\0"
    "title\0nProgress\0onBootstrapCompleted\0"
    "success\0error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BootstrapDialog[] = {

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
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    1,   70,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    2,   74,    2, 0x08 /* Private */,
      14,    2,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   12,   13,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   15,   16,

       0        // eod
};

void BootstrapDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BootstrapDialog *_t = static_cast<BootstrapDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onButtonSelectFile(); break;
        case 1: _t->onButtonRun(); break;
        case 2: _t->onButtonHide(); break;
        case 3: _t->onButtonCancel(); break;
        case 4: _t->onButtonRadioCloud(); break;
        case 5: _t->onButtonRadioFile(); break;
        case 6: _t->onEditFilePathChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->onBootstrapModelChanged(); break;
        case 8: _t->onBootstrapProgress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->onBootstrapCompleted((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject BootstrapDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BootstrapDialog.data,
      qt_meta_data_BootstrapDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BootstrapDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BootstrapDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BootstrapDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int BootstrapDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
