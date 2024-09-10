QT			+=		core
QT			+=		gui
QT			+=		widgets

TEMPLATE	=		app
TARGET		=		iEdit

CONFIG		+=		rtti

#输入
INCLUDEPATH	+=		.

SOURCES		+=		../src/main.cpp
HEADERS		+=		../src/MainWindow.hpp
SOURCES		+=		../src/MainWindow.cpp

HEADERS		+=		../src/MenuBar/MenuBar.hpp
SOURCES		+=		../src/MenuBar/MenuBar.cpp

HEADERS		+=		../src/MainEditor/MainEditor.hpp
SOURCES		+=		../src/MainEditor/MainEditor.cpp
HEADERS		+=		../src/MainEditor/SubEditor/SubEditor.hpp
SOURCES		+=		../src/MainEditor/SubEditor/SubEditor.cpp

#输出
MOC_DIR		=		./moc			#MOC中间文件
OBJECTS_DIR	=		./obj			#obj文件
