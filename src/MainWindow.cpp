#include"MainWindow.hpp"

MainWindow::MainWindow(QWidget* parent):QMainWindow(parent)
{//构造函数
	this->setMenuBar(&menuBar);
	this->setCentralWidget(&mainEditor);
	connect(&menuBar,SIGNAL(newFileTriggered()),this,SLOT(actNewFile_triggered()));
	connect(&menuBar,SIGNAL(openFileTriggered()),this,SLOT(actOpenFile_triggered()));
	connect(&menuBar,SIGNAL(saveFileTriggered()),this,SLOT(actSaveFile_triggered()));
	connect(&menuBar,SIGNAL(saveAsFileTriggered()),this,SLOT(actSaveAsFile_triggered()));
	connect(&menuBar,SIGNAL(setFontTriggered()),this,SLOT(actSetFont_triggered()));
	connect(&menuBar,SIGNAL(setViewModeTriggered()),this,SLOT(actSetViewMode_triggered()));
}
MainWindow::~MainWindow(){}

void MainWindow::actNewFile_triggered()
{//"新建"action
	SubEditor* subEditor=new SubEditor(&mainEditor);
	mainEditor.addSubWindow(subEditor);
	subEditor->show();
}

void MainWindow::actOpenFile_triggered()
{//"打开"action
	QString file=QFileDialog::getOpenFileName(this,"打开文件",QDir::currentPath());
	if(!file.isEmpty())
	{
		SubEditor* subEditor=new SubEditor(&mainEditor);
		subEditor->setFile(file);
		mainEditor.addSubWindow(subEditor);
		subEditor->show();
	}
}

void MainWindow::actSaveFile_triggered()
{//"保存"action
	QMdiSubWindow* pSubWindow=mainEditor.activeSubWindow();
	if(pSubWindow)
	{
		SubEditor* active=static_cast<SubEditor*>(pSubWindow->widget());
		if((active->file()).isEmpty())
		{
			QString file=QFileDialog::getSaveFileName(this,"保存",QDir::currentPath());
			if(!file.isEmpty())
			{
				active->saveFile(file);
				active->setFile(file);
			}
		}
		else
			active->saveFile();
	}
	else
		QMessageBox::warning(this,"警告","未打开文件");
}

void MainWindow::actSaveAsFile_triggered()
{//"另存为"action
	QMdiSubWindow* pSubWindow=mainEditor.activeSubWindow();
	if(pSubWindow)
	{
		SubEditor* active=static_cast<SubEditor*>(pSubWindow->widget());
		QString file=QFileDialog::getSaveFileName(this,"另存为",QDir::currentPath());
		if(!file.isEmpty())
		{
			active->saveFile(file);
			active->setFile(file);
		}
	}
	else
		QMessageBox::warning(this,"警告","未打开文件");
}

void MainWindow::actSetFont_triggered()
{//"字体"action
	bool ok;
	QFont font=QFontDialog::getFont(&ok,this);
	if(ok)
		this->setFont(font);
}

void MainWindow::actSetViewMode_triggered()
{
	if(mainEditor.viewMode()==MainEditor::SubWindowView)
		mainEditor.setViewMode(MainEditor::TabbedView);
	else
		mainEditor.setViewMode(MainEditor::SubWindowView);
}
