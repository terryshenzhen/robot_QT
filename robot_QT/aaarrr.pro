QT       += core gui
QT += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ccenter.cpp \
    cfun1.cpp \
    cfun2.cpp \
    cfun3.cpp \
    cfun4.cpp \
    cfun5.cpp \
    cfun6.cpp \
    cfun7.cpp \
    cfun8.cpp \
    cnav1st.cpp \
    ctopleft.cpp \
    ctopright.cpp \
    main.cpp \
    robothmi.cpp \
    widget.cpp \
    ztest.cpp

HEADERS += \
    ccenter.h \
    cfun1.h \
    cfun2.h \
    cfun3.h \
    cfun4.h \
    cfun5.h \
    cfun6.h \
    cfun7.h \
    cfun8.h \
    cnav1st.h \
    common.h \
    ctopleft.h \
    ctopright.h \
    robothmi.h \
    widget.h \
    ztest.h

FORMS += \
    ccenter.ui \
    cfun1.ui \
    cfun2.ui \
    cfun3.ui \
    cfun4.ui \
    cfun5.ui \
    cfun6.ui \
    cfun7.ui \
    cfun8.ui \
    cnav1st.ui \
    robothmi.ui \
    widget.ui \
    ztest.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    robothmi.qrc
