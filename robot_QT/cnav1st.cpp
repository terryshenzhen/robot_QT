#include "cnav1st.h"

CNav1st::CNav1st(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	Init();
	InitUi();
	InitSlot();
}

CNav1st::~CNav1st()
{

}

void CNav1st::Init()
{
	setWindowFlags(Qt::FramelessWindowHint | Qt::Tool);

	ui.btnUp->setFixedSize(250, 20);
	ui.btnUp->setText(QString::null);
	ui.btnUp->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnUp->setStyleSheet(
		"QPushButton{border-image:url(:/images/arr_up_nor);}"
		"QPushButton::hover{border-image:url(:/images/arr_up_hov);}"
		"QPushButton::pressed{border-image:url(:/images/arr_up_cli);}");

	ui.btnDown->setFixedSize(250, 20);
	ui.btnDown->setText(QString::null);
	ui.btnDown->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnDown->setStyleSheet(
		"QPushButton{border-image:url(:/images/arr_down_nor);}"
		"QPushButton::hover{border-image:url(:/images/arr_down_hov);}"
		"QPushButton::pressed{border-image:url(:/images/arr_down_cli);}");

	ui.btnFun1->setFixedSize(240, 34);
	ui.btnFun1->setText(QString::null);
	ui.btnFun1->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnFun1->setStyleSheet(
		"QPushButton{border-image:url(:/images/fun1_nor);}"
		"QPushButton::hover{border-image:url(:/images/fun1_hov);}"
		"QPushButton::pressed{border-image:url(:/images/fun1_cli);}");

	ui.btnFun2->setFixedSize(240, 34);
	ui.btnFun2->setText(QString::null);
	ui.btnFun2->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnFun2->setStyleSheet(
		"QPushButton{border-image:url(:/images/fun2_nor);}"
		"QPushButton::hover{border-image:url(:/images/fun2_hov);}"
		"QPushButton::pressed{border-image:url(:/images/fun2_cli);}");

	ui.btnFun3->setFixedSize(240, 34);
	ui.btnFun3->setText(QString::null);
	ui.btnFun3->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnFun3->setStyleSheet(
		"QPushButton{border-image:url(:/images/fun3_nor);}"
		"QPushButton::hover{border-image:url(:/images/fun3_hov);}"
		"QPushButton::pressed{border-image:url(:/images/fun3_cli);}");

	ui.btnFun4->setFixedSize(240, 34);
	ui.btnFun4->setText(QString::null);
	ui.btnFun4->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnFun4->setStyleSheet(
		"QPushButton{border-image:url(:/images/fun4_nor);}"
		"QPushButton::hover{border-image:url(:/images/fun4_hov);}"
		"QPushButton::pressed{border-image:url(:/images/fun4_cli);}");

	ui.btnFun5->setFixedSize(240, 34);
	ui.btnFun5->setText(QString::null);
	ui.btnFun5->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnFun5->setStyleSheet(
		"QPushButton{border-image:url(:/images/fun5_nor);}"
		"QPushButton::hover{border-image:url(:/images/fun5_hov);}"
		"QPushButton::pressed{border-image:url(:/images/fun5_cli);}");

	ui.btnFun6->setFixedSize(240, 34);
	ui.btnFun6->setText(QString::null);
	ui.btnFun6->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnFun6->setStyleSheet(
		"QPushButton{border-image:url(:/images/fun6_nor);}"
		"QPushButton::hover{border-image:url(:/images/fun6_hov);}"
		"QPushButton::pressed{border-image:url(:/images/fun6_cli);}");

	ui.btnFun7->setFixedSize(240, 34);
	ui.btnFun7->setText(QString::null);
	ui.btnFun7->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnFun7->setStyleSheet(
		"QPushButton{border-image:url(:/images/fun7_nor);}"
		"QPushButton::hover{border-image:url(:/images/fun7_hov);}"
		"QPushButton::pressed{border-image:url(:/images/fun7_cli);}");

	ui.btnFun8->setFixedSize(240, 34);
	ui.btnFun8->setText(QString::null);
	ui.btnFun8->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnFun8->setStyleSheet(
		"QPushButton{border-image:url(:/images/fun8_nor);}"
		"QPushButton::hover{border-image:url(:/images/fun8_hov);}"
		"QPushButton::pressed{border-image:url(:/images/fun8_cli);}");
}

void CNav1st::InitUi()
{

}

void CNav1st::InitSlot()
{
	connect(ui.btnFun1, SIGNAL(clicked()), this, SLOT(SlotFun1()));
	connect(ui.btnFun2, SIGNAL(clicked()), this, SLOT(SlotFun2()));
	connect(ui.btnFun3, SIGNAL(clicked()), this, SLOT(SlotFun3()));
	connect(ui.btnFun4, SIGNAL(clicked()), this, SLOT(SlotFun4()));
	connect(ui.btnFun5, SIGNAL(clicked()), this, SLOT(SlotFun5()));
	connect(ui.btnFun6, SIGNAL(clicked()), this, SLOT(SlotFun6()));
	connect(ui.btnFun7, SIGNAL(clicked()), this, SLOT(SlotFun7()));
	connect(ui.btnFun8, SIGNAL(clicked()), this, SLOT(SlotFun8()));
}

void CNav1st::SlotFun1()
{
	SigFun1();
}

void CNav1st::SlotFun2()
{
	SigFun2();
}

void CNav1st::SlotFun3()
{
	SigFun3();
}

void CNav1st::SlotFun4()
{
	SigFun4();
}

void CNav1st::SlotFun5()
{
	SigFun5();
}

void CNav1st::SlotFun6()
{
	SigFun6();
}

void CNav1st::SlotFun7()
{
	SigFun7();
}

void CNav1st::SlotFun8()
{
	SigFun8();
}
