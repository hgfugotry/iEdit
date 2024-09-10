#include<QtWidgets/QMenuBar>
#include<QtWidgets/QMenu>
#include<QtGui/QAction>

class MenuBar:public QMenuBar
{
	Q_OBJECT
	Q_CLASSINFO("AUTHOR","hgfugotry");
public:
	MenuBar(QWidget* parent=nullptr);
	~MenuBar();
private:
	QMenu file;
	QAction newFile;
	QAction openFile;
	QAction saveFile;
	QAction saveAsFile;

	QMenu settings;
	QAction setFont;
	QAction setViewMode;

	void setMenus();
	void setActions();
	void connectActions();
signals:
	void newFileTriggered();
	void openFileTriggered();
	void saveFileTriggered();
	void saveAsFileTriggered();
	void setFontTriggered();
	void setViewModeTriggered();
};
