/****************************************************************************
** Meta object code from reading C++ file 'profile.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../profile.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'profile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN7profileE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN7profileE = QtMocHelpers::stringData(
    "profile",
    "receiveduserprofile",
    "",
    "email",
    "name",
    "password",
    "phone",
    "address",
    "firstname",
    "lastname",
    "on_edit_information_btn_clicked",
    "on_Dashboard_btn_clicked",
    "on_Mywallets_btn_clicked",
    "on_recordchange_btn_clicked",
    "on_change_pas_clicked",
    "on_backtoeditprof_btn_clicked",
    "on_backt_btn_clicked",
    "on_confirm_pas_btn_clicked",
    "on_backt_btn_2_clicked",
    "on_deposit_btn_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN7profileE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    7,   80,    2, 0x0a,    1 /* Public */,
      10,    0,   95,    2, 0x0a,    9 /* Public */,
      11,    0,   96,    2, 0x08,   10 /* Private */,
      12,    0,   97,    2, 0x08,   11 /* Private */,
      13,    0,   98,    2, 0x08,   12 /* Private */,
      14,    0,   99,    2, 0x08,   13 /* Private */,
      15,    0,  100,    2, 0x08,   14 /* Private */,
      16,    0,  101,    2, 0x08,   15 /* Private */,
      17,    0,  102,    2, 0x08,   16 /* Private */,
      18,    0,  103,    2, 0x08,   17 /* Private */,
      19,    0,  104,    2, 0x08,   18 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,    7,    8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject profile::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN7profileE.offsetsAndSizes,
    qt_meta_data_ZN7profileE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN7profileE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<profile, std::true_type>,
        // method 'receiveduserprofile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString, std::false_type>,
        // method 'on_edit_information_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Dashboard_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Mywallets_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_recordchange_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_change_pas_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_backtoeditprof_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_backt_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_confirm_pas_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_backt_btn_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_deposit_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void profile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<profile *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->receiveduserprofile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[7]))); break;
        case 1: _t->on_edit_information_btn_clicked(); break;
        case 2: _t->on_Dashboard_btn_clicked(); break;
        case 3: _t->on_Mywallets_btn_clicked(); break;
        case 4: _t->on_recordchange_btn_clicked(); break;
        case 5: _t->on_change_pas_clicked(); break;
        case 6: _t->on_backtoeditprof_btn_clicked(); break;
        case 7: _t->on_backt_btn_clicked(); break;
        case 8: _t->on_confirm_pas_btn_clicked(); break;
        case 9: _t->on_backt_btn_2_clicked(); break;
        case 10: _t->on_deposit_btn_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *profile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *profile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN7profileE.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int profile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
