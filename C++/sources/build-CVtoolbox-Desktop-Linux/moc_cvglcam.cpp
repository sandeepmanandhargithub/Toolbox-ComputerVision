/****************************************************************************
** Meta object code from reading C++ file 'cvglcam.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../opencv_opengl_toolbox/cvglcam.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cvglcam.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CvGlCam_t {
    QByteArrayData data[8];
    char stringdata[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CvGlCam_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CvGlCam_t qt_meta_stringdata_CvGlCam = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 16),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 6),
QT_MOC_LITERAL(4, 33, 6),
QT_MOC_LITERAL(5, 40, 8),
QT_MOC_LITERAL(6, 49, 13),
QT_MOC_LITERAL(7, 63, 9)
    },
    "CvGlCam\0imageSizeChanged\0\0imageW\0"
    "imageH\0finished\0workRequested\0showImage\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CvGlCam[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06,
       5,    0,   39,    2, 0x06,
       6,    0,   40,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       7,    0,   41,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool,

       0        // eod
};

void CvGlCam::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CvGlCam *_t = static_cast<CvGlCam *>(_o);
        switch (_id) {
        case 0: _t->imageSizeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->finished(); break;
        case 2: _t->workRequested(); break;
        case 3: { bool _r = _t->showImage();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CvGlCam::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CvGlCam::imageSizeChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (CvGlCam::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CvGlCam::finished)) {
                *result = 1;
            }
        }
        {
            typedef void (CvGlCam::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CvGlCam::workRequested)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject CvGlCam::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_CvGlCam.data,
      qt_meta_data_CvGlCam,  qt_static_metacall, 0, 0}
};


const QMetaObject *CvGlCam::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CvGlCam::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CvGlCam.stringdata))
        return static_cast<void*>(const_cast< CvGlCam*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int CvGlCam::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
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
void CvGlCam::imageSizeChanged(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CvGlCam::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void CvGlCam::workRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
