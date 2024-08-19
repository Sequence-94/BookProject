/****************************************************************************
** Meta object code from reading C++ file 'book.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../BookProject/book.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'book.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
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
struct qt_meta_stringdata_CLASSBookENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSBookENDCLASS = QtMocHelpers::stringData(
    "Book",
    "titleChanged",
    "",
    "authorsChanged",
    "isbnChanged",
    "publicationDateChanged",
    "setTitle",
    "t",
    "setAuthors",
    "a",
    "setIsbn",
    "i",
    "setPublicationDate",
    "p",
    "title",
    "authors",
    "isbn",
    "publicationDate"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSBookENDCLASS_t {
    uint offsetsAndSizes[36];
    char stringdata0[5];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[12];
    char stringdata5[23];
    char stringdata6[9];
    char stringdata7[2];
    char stringdata8[11];
    char stringdata9[2];
    char stringdata10[8];
    char stringdata11[2];
    char stringdata12[19];
    char stringdata13[2];
    char stringdata14[6];
    char stringdata15[8];
    char stringdata16[5];
    char stringdata17[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSBookENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSBookENDCLASS_t qt_meta_stringdata_CLASSBookENDCLASS = {
    {
        QT_MOC_LITERAL(0, 4),  // "Book"
        QT_MOC_LITERAL(5, 12),  // "titleChanged"
        QT_MOC_LITERAL(18, 0),  // ""
        QT_MOC_LITERAL(19, 14),  // "authorsChanged"
        QT_MOC_LITERAL(34, 11),  // "isbnChanged"
        QT_MOC_LITERAL(46, 22),  // "publicationDateChanged"
        QT_MOC_LITERAL(69, 8),  // "setTitle"
        QT_MOC_LITERAL(78, 1),  // "t"
        QT_MOC_LITERAL(80, 10),  // "setAuthors"
        QT_MOC_LITERAL(91, 1),  // "a"
        QT_MOC_LITERAL(93, 7),  // "setIsbn"
        QT_MOC_LITERAL(101, 1),  // "i"
        QT_MOC_LITERAL(103, 18),  // "setPublicationDate"
        QT_MOC_LITERAL(122, 1),  // "p"
        QT_MOC_LITERAL(124, 5),  // "title"
        QT_MOC_LITERAL(130, 7),  // "authors"
        QT_MOC_LITERAL(138, 4),  // "isbn"
        QT_MOC_LITERAL(143, 15)   // "publicationDate"
    },
    "Book",
    "titleChanged",
    "",
    "authorsChanged",
    "isbnChanged",
    "publicationDateChanged",
    "setTitle",
    "t",
    "setAuthors",
    "a",
    "setIsbn",
    "i",
    "setPublicationDate",
    "p",
    "title",
    "authors",
    "isbn",
    "publicationDate"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSBookENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       4,   78, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    5 /* Public */,
       3,    0,   63,    2, 0x06,    6 /* Public */,
       4,    0,   64,    2, 0x06,    7 /* Public */,
       5,    0,   65,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   66,    2, 0x0a,    9 /* Public */,
       8,    1,   69,    2, 0x0a,   11 /* Public */,
      10,    1,   72,    2, 0x0a,   13 /* Public */,
      12,    1,   75,    2, 0x0a,   15 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QStringList,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QDate,   13,

 // properties: name, type, flags
      14, QMetaType::QString, 0x00015103, uint(0), 0,
      15, QMetaType::QStringList, 0x00015103, uint(1), 0,
      16, QMetaType::QString, 0x00015103, uint(2), 0,
      17, QMetaType::QDate, 0x00015103, uint(3), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Book::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSBookENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSBookENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSBookENDCLASS_t,
        // property 'title'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'authors'
        QtPrivate::TypeAndForceComplete<QStringList, std::true_type>,
        // property 'isbn'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'publicationDate'
        QtPrivate::TypeAndForceComplete<QDate, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Book, std::true_type>,
        // method 'titleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'authorsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isbnChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'publicationDateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setTitle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setAuthors'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'setIsbn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setPublicationDate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>
    >,
    nullptr
} };

void Book::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Book *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->titleChanged(); break;
        case 1: _t->authorsChanged(); break;
        case 2: _t->isbnChanged(); break;
        case 3: _t->publicationDateChanged(); break;
        case 4: _t->setTitle((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->setAuthors((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 6: _t->setIsbn((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->setPublicationDate((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Book::*)();
            if (_t _q_method = &Book::titleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Book::*)();
            if (_t _q_method = &Book::authorsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Book::*)();
            if (_t _q_method = &Book::isbnChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Book::*)();
            if (_t _q_method = &Book::publicationDateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Book *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getTitle(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->getAuthors(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getIsbn(); break;
        case 3: *reinterpret_cast< QDate*>(_v) = _t->getPublicationDate(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Book *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setAuthors(*reinterpret_cast< QStringList*>(_v)); break;
        case 2: _t->setIsbn(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setPublicationDate(*reinterpret_cast< QDate*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *Book::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Book::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSBookENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Book::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Book::titleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Book::authorsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Book::isbnChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Book::publicationDateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
