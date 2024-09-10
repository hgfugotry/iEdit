#include<QtCore/QString>
#include<QtCore/QFile>
#include<QtCore/QSaveFile>
#include<QtCore/QFileInfo>
#include<QtCore/QException>
#include<QtGui/QIcon>
#include<QtWidgets/QWidget>
#include<QtWidgets/QPlainTextEdit>
#include<QtWidgets/QMessageBox>

class SubEditor:public QPlainTextEdit
{
	Q_OBJECT
	Q_CLASSINFO("AUTHOR","hgfugotry");
	Q_PROPERTY(QString file READ file WRITE setFile NOTIFY fileChanged);
public:
	SubEditor(QWidget* parent=nullptr);
	~SubEditor();
private:
	QIcon icon;
	QString m_file;
public:
	QString file()const;
	void setFile(const QString& file);
	void saveFile();
	void saveFile(const QString& file)const;
signals:
	void fileChanged(QString curFile,QString preFile);
};
