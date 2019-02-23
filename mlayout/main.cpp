#include "mlayout.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	mlayout w;
	w.show();
	return a.exec();
}
