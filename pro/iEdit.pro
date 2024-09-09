QT			+=		core
QT			+=		gui
QT			+=		widgets

TEMPLATE	=		app
TARGET		=		iEdit

CONFIG		+=		rtti

INCLUDEPATH	+=		.

SOURCES		+=		../src/main.cpp
HEADERS		+=		../src/MainWindow.hpp
SOURCES		+=		../src/MainWindow.cpp

HEADERS		+=		../src/MenuBar/MenuBar.hpp
SOURCES		+=		../src/MenuBar/MenuBar.cpp

HEADERS		+=		../src/MainEditor/MainEditor.hpp
SOURCES		+=		../src/MainEditor/MainEditor.cpp
HEADERS		+=		../src/MainEditor/SubEditor.hpp
SOURCES		+=		../src/MainEditor/SubEditor.cpp
