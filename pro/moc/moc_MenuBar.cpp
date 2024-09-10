/****************************************************************************
** Meta object code from reading C++ file 'MenuBar.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/MenuBar/MenuBar.hpp"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MenuBar.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.2. It"
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

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMenuBarENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMenuBarENDCLASS = QtMocHelpers::stringData(
    "MenuBar",
    "AUTHOR",
    "hgfugotry",
    "newFileTriggered",
    "",
    "openFileTriggered",
    "saveFileTriggered",
    "saveAsFileTriggered",
    "setFontTriggered",
    "setViewModeTriggered"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMenuBarENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       1,   14, // classinfo
       6,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   52,    4, 0x06,    1 /* Public */,
       5,    0,   53,    4, 0x06,    2 /* Public */,
       6,    0,   54,    4, 0x06,    3 /* Public */,
       7,    0,   55,    4, 0x06,    4 /* Public */,
       8,    0,   56,    4, 0x06,    5 /* Public */,
       9,    0,   57,    4, 0x06,    6 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MenuBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QMenuBar::staticMetaObject>(),
    qt_meta_stringdata_CLASSMenuBarENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMenuBarENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMenuBarENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MenuBar, std::true_type>,
        // method 'newFileTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openFileTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveFileTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveAsFileTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setFontTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setViewModeTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MenuBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MenuBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->newFileTriggered(); break;
        case 1: _t->openFileTriggered(); break;
        case 2: _t->saveFileTriggered(); break;
        case 3: _t->saveAsFileTriggered(); break;
        case 4: _t->setFontTriggered(); break;
        case 5: _t->setViewModeTriggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MenuBar::*)();
            if (_t _q_method = &MenuBar::newFileTriggered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MenuBar::*)();
            if (_t _q_method = &MenuBar::openFileTriggered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MenuBar::*)();
            if (_t _q_method = &MenuBar::saveFileTriggered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MenuBar::*)();
            if (_t _q_method = &MenuBar::saveAsFileTriggered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MenuBar::*)();
            if (_t _q_method = &MenuBar::setFontTriggered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MenuBar::*)();
            if (_t _q_method = &MenuBar::setViewModeTriggered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *MenuBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MenuBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMenuBarENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMenuBar::qt_metacast(_clname);
}

int MenuBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMenuBar::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void MenuBar::newFileTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MenuBar::openFileTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MenuBar::saveFileTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MenuBar::saveAsFileTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MenuBar::setFontTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MenuBar::setViewModeTriggered()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
