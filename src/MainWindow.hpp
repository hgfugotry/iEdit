#ifndef IEDIT_SRC_MAINWINDOW_HPP_
#define IEDIT_SRC_MAINWINDOW_HPP_

//C++标准库
#include<iostream>

//Qt类库
#include<QtCore/QDir>
#include<QtCore/QString>
#include<QtCore/QByteArray>
#include<QtWidgets/QMainWindow>
#include<QtWidgets/QFileDialog>
#include<QtWidgets/QFontDialog>
#include<QtWidgets/QMessageBox>

//项目头文件
#include"MainEditor/MainEditor.hpp"
#include"MainEditor/SubEditor.hpp"
#include"MenuBar/MenuBar.hpp"

class MainWindow:public QMainWindow
{
	Q_OBJECT
	Q_CLASSINFO("AUTHOR","hgfugotry");
public:
	MainWindow(QWidget* parent=nullptr);
	~MainWindow();
private:
	MainEditor mainEditor;
	MenuBar menuBar;
private slots:
	void actNewFile_triggered();
	void actOpenFile_triggered();
	void actSaveFile_triggered();
	void actSaveAsFile_triggered();
	void actSetFont_triggered();
	void actSetViewMode_triggered();
};

#endif

