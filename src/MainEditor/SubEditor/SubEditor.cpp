#include"SubEditor.hpp"

SubEditor::SubEditor(QWidget* parent):QPlainTextEdit(parent)
{
	icon=QIcon("aaaaa.ico");
	this->setWindowIcon(icon);
	this->setWindowTitle("新建[*]");
	this->setAttribute(Qt::WA_DeleteOnClose);
	connect(this,SIGNAL(modificationChanged(bool)),this,SLOT(setWindowModified(bool)));
}
SubEditor::~SubEditor(){}

namespace
{
	QString readFile(const QString& file)
	{
		QFile File(file);
		QString context;
		if(File.open(QIODevice::ReadOnly|QIODevice::Text))
		{
			QTextStream fileStream(&File);
			context=fileStream.readAll();
			File.close();
		}
		return context;
	}
	bool writeFile(const QString& file,const QString& context)
	{
		QSaveFile File(file);
		bool success=true;
		if(File.open(QIODevice::WriteOnly|QIODevice::Text))
		{
			try
			{
				QByteArray temp=context.toUtf8();
				File.write(temp,temp.length());
				File.commit();
			}
			catch(QException& e)
			{
				QMessageBox box(QMessageBox::Warning,"警告","保存文件错误");
				box.addButton("确定(&O)",QMessageBox::AcceptRole);
				box.exec();
				success=false;
			}
		}
		else
		{
			QMessageBox box(QMessageBox::Warning,"警告","保存文件错误");
			box.addButton("确定(&O)",QMessageBox::AcceptRole);
			box.exec();
			success=false;
		}
		return success;
	}
}

QString SubEditor::file()const{return m_file;}
void SubEditor::setFile(const QString& file)
{
	emit fileChanged(m_file,file);
	m_file=file;
	this->clear();
	this->setPlainText(readFile(file));
	this->setWindowModified(false);
	QFileInfo fileInfo(m_file);
	this->setWindowTitle(fileInfo.fileName()+"[*]");
}
void SubEditor::saveFile()
{
	writeFile(m_file,toPlainText());
	this->setWindowModified(false);
}
void SubEditor::saveFile(const QString& file)const
{
	writeFile(file,toPlainText());
}
