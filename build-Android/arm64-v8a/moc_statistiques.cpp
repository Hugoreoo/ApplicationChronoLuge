/****************************************************************************
** Meta object code from reading C++ file 'statistiques.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ChronoLuge/entity/statistiques.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statistiques.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Statistiques_t {
    QByteArrayData data[8];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Statistiques_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Statistiques_t qt_meta_stringdata_Statistiques = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Statistiques"
QT_MOC_LITERAL(1, 13, 12), // "nmbrDescente"
QT_MOC_LITERAL(2, 26, 11), // "vitesseMoye"
QT_MOC_LITERAL(3, 38, 10), // "vitesseMin"
QT_MOC_LITERAL(4, 49, 10), // "vitesseMax"
QT_MOC_LITERAL(5, 60, 9), // "tempsMoye"
QT_MOC_LITERAL(6, 70, 8), // "tempsMin"
QT_MOC_LITERAL(7, 79, 8) // "tempsMax"

    },
    "Statistiques\0nmbrDescente\0vitesseMoye\0"
    "vitesseMin\0vitesseMax\0tempsMoye\0"
    "tempsMin\0tempsMax"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Statistiques[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00095001,
       2, QMetaType::Double, 0x00095001,
       3, QMetaType::Double, 0x00095001,
       4, QMetaType::Double, 0x00095001,
       5, QMetaType::QString, 0x00095001,
       6, QMetaType::QString, 0x00095001,
       7, QMetaType::QString, 0x00095001,

       0        // eod
};

void Statistiques::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Statistiques *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getNmbrDescente(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->getVitesseMoye(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->getVitesseMin(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->getVitesseMax(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->getTempsMoye(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->getTempsMin(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->getTempsMax(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Statistiques::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Statistiques.data,
    qt_meta_data_Statistiques,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Statistiques::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Statistiques::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Statistiques.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Statistiques::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE