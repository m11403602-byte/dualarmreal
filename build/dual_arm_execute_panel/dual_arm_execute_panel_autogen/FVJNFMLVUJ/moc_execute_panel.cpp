/****************************************************************************
** Meta object code from reading C++ file 'execute_panel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/hiwin/dual_arm_execute_panel/include/dual_arm_execute_panel/execute_panel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'execute_panel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dual_arm_execute_panel__ExecutePanel_t {
    QByteArrayData data[7];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dual_arm_execute_panel__ExecutePanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dual_arm_execute_panel__ExecutePanel_t qt_meta_stringdata_dual_arm_execute_panel__ExecutePanel = {
    {
QT_MOC_LITERAL(0, 0, 36), // "dual_arm_execute_panel::Execu..."
QT_MOC_LITERAL(1, 37, 15), // "planInfoChanged"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 4), // "text"
QT_MOC_LITERAL(4, 59, 13), // "statusChanged"
QT_MOC_LITERAL(5, 73, 16), // "onExecuteClicked"
QT_MOC_LITERAL(6, 90, 15) // "onCancelClicked"

    },
    "dual_arm_execute_panel::ExecutePanel\0"
    "planInfoChanged\0\0text\0statusChanged\0"
    "onExecuteClicked\0onCancelClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dual_arm_execute_panel__ExecutePanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   40,    2, 0x08 /* Private */,
       6,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void dual_arm_execute_panel::ExecutePanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ExecutePanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->planInfoChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->statusChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->onExecuteClicked(); break;
        case 3: _t->onCancelClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ExecutePanel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExecutePanel::planInfoChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ExecutePanel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExecutePanel::statusChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject dual_arm_execute_panel::ExecutePanel::staticMetaObject = { {
    QMetaObject::SuperData::link<rviz_common::Panel::staticMetaObject>(),
    qt_meta_stringdata_dual_arm_execute_panel__ExecutePanel.data,
    qt_meta_data_dual_arm_execute_panel__ExecutePanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *dual_arm_execute_panel::ExecutePanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dual_arm_execute_panel::ExecutePanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dual_arm_execute_panel__ExecutePanel.stringdata0))
        return static_cast<void*>(this);
    return rviz_common::Panel::qt_metacast(_clname);
}

int dual_arm_execute_panel::ExecutePanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz_common::Panel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void dual_arm_execute_panel::ExecutePanel::planInfoChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void dual_arm_execute_panel::ExecutePanel::statusChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
