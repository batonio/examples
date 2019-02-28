/****************************************************************************
** Meta object code from reading C++ file 'adaptivemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../valuemodel/adaptivemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adaptivemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AdaptiveModel_t {
    QByteArrayData data[31];
    char stringdata[344];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdaptiveModel_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdaptiveModel_t qt_meta_stringdata_AdaptiveModel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "AdaptiveModel"
QT_MOC_LITERAL(1, 14, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 30, 6), // "source"
QT_MOC_LITERAL(3, 37, 13), // "sourceChanged"
QT_MOC_LITERAL(4, 51, 0), // ""
QT_MOC_LITERAL(5, 52, 13), // "filterChanged"
QT_MOC_LITERAL(6, 66, 8), // "QJSValue"
QT_MOC_LITERAL(7, 75, 6), // "filter"
QT_MOC_LITERAL(8, 82, 12), // "countChanged"
QT_MOC_LITERAL(9, 95, 5), // "count"
QT_MOC_LITERAL(10, 101, 13), // "sorterChanged"
QT_MOC_LITERAL(11, 115, 6), // "sorter"
QT_MOC_LITERAL(12, 122, 16), // "sortOrderChanged"
QT_MOC_LITERAL(13, 139, 13), // "Qt::SortOrder"
QT_MOC_LITERAL(14, 153, 5), // "order"
QT_MOC_LITERAL(15, 159, 16), // "valueRoleChanged"
QT_MOC_LITERAL(16, 176, 8), // "roleName"
QT_MOC_LITERAL(17, 185, 9), // "setSource"
QT_MOC_LITERAL(18, 195, 9), // "setFilter"
QT_MOC_LITERAL(19, 205, 9), // "setSorter"
QT_MOC_LITERAL(20, 215, 9), // "predicate"
QT_MOC_LITERAL(21, 225, 12), // "setSortOrder"
QT_MOC_LITERAL(22, 238, 12), // "setValueRole"
QT_MOC_LITERAL(23, 251, 11), // "applyFilter"
QT_MOC_LITERAL(24, 263, 14), // "mapToSourceRow"
QT_MOC_LITERAL(25, 278, 8), // "proxyRow"
QT_MOC_LITERAL(26, 287, 16), // "mapFromSourceRow"
QT_MOC_LITERAL(27, 304, 9), // "sourceRow"
QT_MOC_LITERAL(28, 314, 9), // "applySort"
QT_MOC_LITERAL(29, 324, 9), // "sortOrder"
QT_MOC_LITERAL(30, 334, 9) // "valueRole"

    },
    "AdaptiveModel\0DefaultProperty\0source\0"
    "sourceChanged\0\0filterChanged\0QJSValue\0"
    "filter\0countChanged\0count\0sorterChanged\0"
    "sorter\0sortOrderChanged\0Qt::SortOrder\0"
    "order\0valueRoleChanged\0roleName\0"
    "setSource\0setFilter\0setSorter\0predicate\0"
    "setSortOrder\0setValueRole\0applyFilter\0"
    "mapToSourceRow\0proxyRow\0mapFromSourceRow\0"
    "sourceRow\0applySort\0sortOrder\0valueRole"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdaptiveModel[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
      15,   16, // methods
       6,  132, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    1,   91,    4, 0x06 /* Public */,
       5,    1,   94,    4, 0x06 /* Public */,
       8,    1,   97,    4, 0x06 /* Public */,
      10,    1,  100,    4, 0x06 /* Public */,
      12,    1,  103,    4, 0x06 /* Public */,
      15,    1,  106,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    1,  109,    4, 0x0a /* Public */,
      18,    1,  112,    4, 0x0a /* Public */,
      19,    1,  115,    4, 0x0a /* Public */,
      21,    1,  118,    4, 0x0a /* Public */,
      22,    1,  121,    4, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      23,    0,  124,    4, 0x02 /* Public */,
      24,    1,  125,    4, 0x02 /* Public */,
      26,    1,  128,    4, 0x02 /* Public */,
      28,    0,  131,    4, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QObjectStar,    2,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, 0x80000000 | 6,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::QString,   16,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,    2,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,   20,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::QString,   16,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Int, QMetaType::Int,   25,
    QMetaType::Int, QMetaType::Int,   27,
    QMetaType::Void,

 // properties: name, type, flags
       2, QMetaType::QObjectStar, 0x00495103,
       7, 0x80000000 | 6, 0x0049510b,
      11, 0x80000000 | 6, 0x0049510b,
      29, 0x80000000 | 13, 0x0049510b,
       9, QMetaType::Int, 0x00495001,
      30, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       3,
       4,
       2,
       5,

       0        // eod
};

void AdaptiveModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AdaptiveModel *_t = static_cast<AdaptiveModel *>(_o);
        switch (_id) {
        case 0: _t->sourceChanged((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 1: _t->filterChanged((*reinterpret_cast< QJSValue(*)>(_a[1]))); break;
        case 2: _t->countChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->sorterChanged((*reinterpret_cast< QJSValue(*)>(_a[1]))); break;
        case 4: _t->sortOrderChanged((*reinterpret_cast< Qt::SortOrder(*)>(_a[1]))); break;
        case 5: _t->valueRoleChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->setSource((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 7: _t->setFilter((*reinterpret_cast< QJSValue(*)>(_a[1]))); break;
        case 8: _t->setSorter((*reinterpret_cast< QJSValue(*)>(_a[1]))); break;
        case 9: _t->setSortOrder((*reinterpret_cast< Qt::SortOrder(*)>(_a[1]))); break;
        case 10: _t->setValueRole((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->applyFilter(); break;
        case 12: { int _r = _t->mapToSourceRow((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { int _r = _t->mapFromSourceRow((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: _t->applySort(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AdaptiveModel::*_t)(QObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AdaptiveModel::sourceChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (AdaptiveModel::*_t)(QJSValue );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AdaptiveModel::filterChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (AdaptiveModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AdaptiveModel::countChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (AdaptiveModel::*_t)(QJSValue );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AdaptiveModel::sorterChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (AdaptiveModel::*_t)(Qt::SortOrder );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AdaptiveModel::sortOrderChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (AdaptiveModel::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AdaptiveModel::valueRoleChanged)) {
                *result = 5;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
        }
    }

}

const QMetaObject AdaptiveModel::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_AdaptiveModel.data,
      qt_meta_data_AdaptiveModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AdaptiveModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdaptiveModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AdaptiveModel.stringdata))
        return static_cast<void*>(const_cast< AdaptiveModel*>(this));
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int AdaptiveModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QObject**>(_v) = source(); break;
        case 1: *reinterpret_cast< QJSValue*>(_v) = filter(); break;
        case 2: *reinterpret_cast< QJSValue*>(_v) = sorter(); break;
        case 3: *reinterpret_cast< Qt::SortOrder*>(_v) = sortOrder(); break;
        case 4: *reinterpret_cast< int*>(_v) = count(); break;
        case 5: *reinterpret_cast< QString*>(_v) = valueRole(); break;
        default: break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSource(*reinterpret_cast< QObject**>(_v)); break;
        case 1: setFilter(*reinterpret_cast< QJSValue*>(_v)); break;
        case 2: setSorter(*reinterpret_cast< QJSValue*>(_v)); break;
        case 3: setSortOrder(*reinterpret_cast< Qt::SortOrder*>(_v)); break;
        case 5: setValueRole(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AdaptiveModel::sourceChanged(QObject * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AdaptiveModel::filterChanged(QJSValue _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AdaptiveModel::countChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AdaptiveModel::sorterChanged(QJSValue _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AdaptiveModel::sortOrderChanged(Qt::SortOrder _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AdaptiveModel::valueRoleChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
