#include"MenuBar.hpp"

MenuBar::MenuBar(QWidget* parent):QMenuBar(parent)
{
	this->setMenus();
	this->setActions();
	connect(&newFile,SIGNAL(triggered()),this,SIGNAL(newFileTriggered()));
	connect(&openFile,SIGNAL(triggered()),this,SIGNAL(openFileTriggered()));
	connect(&saveFile,SIGNAL(triggered()),this,SIGNAL(saveFileTriggered()));
	connect(&saveAsFile,SIGNAL(triggered()),this,SIGNAL(saveAsFileTriggered()));
	connect(&setFont,SIGNAL(triggered()),this,SIGNAL(setFontTriggered()));
}
MenuBar::~MenuBar(){}

void MenuBar::setMenus()
{
	file.setTitle("文件(&F)");
	this->addMenu(&file);
	settings.setTitle("设置(&S)");
	this->addMenu(&settings);
}

void MenuBar::setActions()
{
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
}
