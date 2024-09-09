#ifndef IEDIT_SRC_MAINEDITOR_MAINEDITOR_HPP_
#define IEDIT_SRC_MAINEDITOR_MAINEDITOR_HPP_

#include<QtWidgets/QMdiArea>
#include<QtWidgets/QMdiSubWindow>

class MainEditor:public QMdiArea
{
	Q_OBJECT
public:
	MainEditor(QWidget* parent=nullptr);
	~MainEditor();
};

#endif
