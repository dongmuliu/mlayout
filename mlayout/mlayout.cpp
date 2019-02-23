#include "mlayout.h"

mlayout::mlayout(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setMaximumSize(393, 171);
	this->setMinimumSize(393, 171);
	QObject::connect(ui.cmdLineEdit, SIGNAL(returnPressed()), this, SLOT(on_submitButton_clicked()));//添加回车键与确定键一样的功能
	
}
void mlayout::on_submitButton_clicked()
{
	//QProcess *myProcess = new QProcess(parent);
	//myProcess->start(program, arguments);
	QProcess *process = new QProcess;
	QString startProgram =ui.cmdLineEdit->text();//取出用户输入的文本
	process->start(startProgram.trimmed());//清除空格
	ui.cmdLineEdit->clear();
	this->close();
}