#include"MenuBar.hpp"

MenuBar::MenuBar(QWidget* parent):QMenuBar(parent)
{
	this->setMenus();
	this->setActions();
	this->connectActions();
}
MenuBar::~MenuBar(){}

void MenuBar::setMenus()
{//菜单menus
	file.setTitle("文件(&F)");
	this->addMenu(&file);
	settings.setTitle("设置(&S)");
	this->addMenu(&settings);
}
void MenuBar::setActions()
{//菜单actions
	newFile.setText("新建(&N)");
	file.addAction(&newFile);
	file.addSeparator();
	openFile.setText("打开(&O)");
	file.addAction(&openFile);
	saveFile.setText("保存(&S)");
	file.addAction(&saveFile);
	saveAsFile.setText("另存为(&A)");
	file.addAction(&saveAsFile);

	setFont.setText("字体(&F)");
	settings.addAction(&setFont);
	setViewMode.setText("切换子窗口模式(&S)");
	settings.addAction(&setViewMode);
}
void MenuBar::connectActions()
{
	connect(&newFile,SIGNAL(triggered()),this,SIGNAL(newFileTriggered()));
	connect(&openFile,SIGNAL(triggered()),this,SIGNAL(openFileTriggered()));
	connect(&saveFile,SIGNAL(triggered()),this,SIGNAL(saveFileTriggered()));
	connect(&saveAsFile,SIGNAL(triggered()),this,SIGNAL(saveAsFileTriggered()));
	connect(&setFont,SIGNAL(triggered()),this,SIGNAL(setFontTriggered()));
	connect(&setViewMode,SIGNAL(triggered()),this,SIGNAL(setViewModeTriggered()));
}
