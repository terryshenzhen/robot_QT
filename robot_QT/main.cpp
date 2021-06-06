#include "robothmi.h"
#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	a.setFont(QFont("Microsoft Yahei", 10));

	RobotHmi w;
	w.show();
	return a.exec();
}
