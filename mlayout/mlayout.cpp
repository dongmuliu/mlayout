#include "mlayout.h"

mlayout::mlayout(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setMaximumSize(393, 171);
	this->setMinimumSize(393, 171);
	QObject::connect(ui.cmdLineEdit, SIGNAL(returnPressed()), this, SLOT(on_submitButton_clicked()));//��ӻس�����ȷ����һ���Ĺ���
	
}
void mlayout::on_submitButton_clicked()
{
	//QProcess *myProcess = new QProcess(parent);
	//myProcess->start(program, arguments);
	QProcess *process = new QProcess;
	QString startProgram =ui.cmdLineEdit->text();//ȡ���û�������ı�
	process->start(startProgram.trimmed());//����ո�
	ui.cmdLineEdit->clear();
	this->close();
}