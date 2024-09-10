#include"MainEditor.hpp"

MainEditor::MainEditor(QWidget* parent):QMdiArea(parent)
{
	//设置模式
	this->setViewMode(TabbedView);
	this->setTabsClosable(true);
	this->setTabsMovable(true);

	//背景图片
	pix=QPixmap("1.png");
	brush.setTexture(pix);
	this->setBackground(brush);
}
MainEditor::~MainEditor(){}
