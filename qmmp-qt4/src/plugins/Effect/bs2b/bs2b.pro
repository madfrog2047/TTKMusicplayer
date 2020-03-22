include(../../plugins.pri)

HEADERS += bs2bplugin.h \
           effectbs2bfactory.h \
           settingsdialog.h

SOURCES += bs2bplugin.cpp \
           effectbs2bfactory.cpp \
           settingsdialog.cpp

TARGET = $$PLUGINS_PREFIX/Effect/bs2b

INCLUDEPATH += $$EXTRA_PREFIX/libbs2b/include

FORMS += settingsdialog.ui

win32:{
    LIBS += -L$$EXTRA_PREFIX/libbs2b/lib -lbs2b
}

unix:{
    QMAKE_CLEAN = $$PLUGINS_PREFIX/Effect/libbs2b.so
    target.path = $$LIB_DIR/qmmp/Effect
    INSTALLS += target
    LIBS += -L$$EXTRA_PREFIX/libbs2b/lib -lbs2b$$STATIC_LIBRARY_SUFFIX
}