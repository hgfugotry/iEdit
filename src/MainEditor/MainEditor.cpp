#include"MainEditor.hpp"

MainEditor::MainEditor(QWidget* parent):QMdiArea(parent)
{
	this->setViewMode(TabbedView);
	this->setTabsClosable(true);
}
MainEditor::~MainEditor(){}
