#include "robothmi.h"
#include "ztest.h"

RobotHmi::RobotHmi(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	Init();
	InitUi();
	InitSlot();

	SlotHome();
}

RobotHmi::~RobotHmi()
{

}

void RobotHmi::Init()
{
	//setWindowFlags(Qt::FramelessWindowHint);
	setMinimumSize(1000, 600);

	m_pFun1 = new CFun1(this);
	m_pFun2 = new CFun2(this);
	m_pFun3 = new CFun3(this);
	m_pFun4 = new CFun4(this);
	m_pFun5 = new CFun5(this);
	m_pFun6 = new CFun6(this);
	m_pFun7 = new CFun7(this);
	m_pFun8 = new CFun8(this);
	m_pTopLeft = new CTopLeft(this);
	m_pTopRight = new CTopRight(this);
	m_pCenter = new CCenter(this);
	m_pNav1st = new CNav1st(this);
}

void RobotHmi::InitUi()
{
	m_hBoxLyout = new QHBoxLayout;
	m_hBoxLyout->addWidget(m_pTopLeft);
	m_hBoxLyout->addWidget(m_pTopRight);
	m_hBoxLyout->setContentsMargins(0,0,0,0);
	m_hBoxLyout->setSpacing(0);

	m_vBoxLyout = new QVBoxLayout;
	m_vBoxLyout->addLayout(m_hBoxLyout);
	m_vBoxLyout->addWidget(m_pCenter);
	m_vBoxLyout->setContentsMargins(0,0,0,0);
	m_vBoxLyout->setSpacing(0);

	setLayout(m_vBoxLyout);
	this->show();
}

void RobotHmi::InitSlot()
{
	connect(m_pTopLeft, SIGNAL(SigHome()), this, SLOT(SlotHome()));
	connect(m_pTopLeft, SIGNAL(SigHelp()), this, SLOT(SlotHelp()));
	connect(m_pTopLeft, SIGNAL(SigQuit()), this, SLOT(SlotQuit()));
	connect(m_pTopLeft, SIGNAL(SigNavigation()), this, SLOT(SlotNavigation()));
	connect(m_pNav1st, SIGNAL(SigFun1()), this, SLOT(SlotFun1()));
	connect(m_pNav1st, SIGNAL(SigFun2()), this, SLOT(SlotFun2()));
	connect(m_pNav1st, SIGNAL(SigFun3()), this, SLOT(SlotFun3()));
	connect(m_pNav1st, SIGNAL(SigFun4()), this, SLOT(SlotFun4()));
	connect(m_pNav1st, SIGNAL(SigFun5()), this, SLOT(SlotFun5()));
	connect(m_pNav1st, SIGNAL(SigFun6()), this, SLOT(SlotFun6()));
	connect(m_pNav1st, SIGNAL(SigFun7()), this, SLOT(SlotFun7()));
	connect(m_pNav1st, SIGNAL(SigFun8()), this, SLOT(SlotFun8()));
}

void RobotHmi::resizeEvent(QResizeEvent *e)
{
	SlotAllFunHide();
}

void RobotHmi::moveEvent(QMoveEvent *e)
{
	SlotAllFunHide();
}

void RobotHmi::SlotHome()
{
	ZTest *w = NULL;
	if (!WidgetIsExist(QString::fromLocal8Bit("变电站智能机器人巡检")))
	{
		w = new ZTest();
		w->SetLabelText("变电站智能机器人巡检");
	}

	SlotAllFunHide();
	AddFunWidget(QString::fromLocal8Bit("变电站智能机器人巡检"), QString::fromLocal8Bit("变电站智能机器人巡检"), w);
	SetLabelNavigation(QString::fromLocal8Bit("变电站智能机器人巡检"));
}

void RobotHmi::SlotHelp()
{
	ZTest *w = NULL;
	if (!WidgetIsExist(QString::fromLocal8Bit("帮助")))
	{
		w = new ZTest();
		w->SetLabelText("帮助");
	}

	SlotAllFunHide();
	AddFunWidget(QString::fromLocal8Bit("帮助"), QString::fromLocal8Bit("帮助"), w);
	SetLabelNavigation(QString::fromLocal8Bit("帮助"));
}

void RobotHmi::SlotQuit()
{
	SlotAllFunHide();
	int ret = QMessageBox::question(this, QString::fromLocal8Bit("询问"), QString::fromLocal8Bit("您确认退出？"), QString::fromLocal8Bit("退出"), QString::fromLocal8Bit("放弃"));
	if (!ret)
		close();
}

void RobotHmi::SlotNavigation()
{
	QPoint p = m_pTopLeft->GetNavigationPos();
	p = mapToGlobal(p);
	p.setY(p.y() + 37);
	m_pNav1st->move(p);
	if (m_pNav1st->isHidden())
		m_pNav1st->show();
	else
		SlotAllFunHide();

	update();
}

void RobotHmi::SlotFun1()
{
	QPoint p = m_pNav1st->GetFun1Pos();
	p.setX(p.x() + 245);
	p.setY(p.y() + 22);
	m_pFun1->move(p);
	if (m_pFun1->isHidden())
	{
		m_pFun1->show();
		m_pFun2->hide();
		m_pFun3->hide();
		m_pFun4->hide();
		m_pFun5->hide();
		m_pFun6->hide();
		m_pFun7->hide();
		m_pFun8->hide();
	}
	else
		m_pFun1->hide();

	update();
}

void RobotHmi::SlotFun2()
{
	QPoint p = m_pNav1st->GetFun2Pos();
	p.setX(p.x() + 245);
	p.setY(p.y() + 22);
	m_pFun2->move(p);
	if (m_pFun2->isHidden())
	{
		m_pFun1->hide();
		m_pFun2->show();
		m_pFun3->hide();
		m_pFun4->hide();
		m_pFun5->hide();
		m_pFun6->hide();
		m_pFun7->hide();
		m_pFun8->hide();
	}
	else
		m_pFun2->hide();

	update();
}

void RobotHmi::SlotFun3()
{
	QPoint p = m_pNav1st->GetFun3Pos();
	p.setX(p.x() + 245);
	p.setY(p.y() + 22);
	m_pFun3->move(p);
	if (m_pFun3->isHidden())
	{
		m_pFun1->hide();
		m_pFun2->hide();
		m_pFun3->show();
		m_pFun4->hide();
		m_pFun5->hide();
		m_pFun6->hide();
		m_pFun7->hide();
		m_pFun8->hide();
	}
	else
		m_pFun3->hide();

	update();
}

void RobotHmi::SlotFun4()
{
	QPoint p = m_pNav1st->GetFun4Pos();
	p.setX(p.x() + 245);
	p.setY(p.y() + 22);
	m_pFun4->move(p);
	if (m_pFun4->isHidden())
	{
		m_pFun1->hide();
		m_pFun2->hide();
		m_pFun3->hide();
		m_pFun4->show();
		m_pFun5->hide();
		m_pFun6->hide();
		m_pFun7->hide();
		m_pFun8->hide();
	}
	else
		m_pFun4->hide();

	update();
}

void RobotHmi::SlotFun5()
{
	QPoint p = m_pNav1st->GetFun5Pos();
	p.setX(p.x() + 245);
	p.setY(p.y() + 22);
	m_pFun5->move(p);
	if (m_pFun5->isHidden())
	{
		m_pFun1->hide();
		m_pFun2->hide();
		m_pFun3->hide();
		m_pFun4->hide();
		m_pFun5->show();
		m_pFun6->hide();
		m_pFun7->hide();
		m_pFun8->hide();
	}
	else
		m_pFun5->hide();

	update();
}

void RobotHmi::SlotFun6()
{
	QPoint p = m_pNav1st->GetFun6Pos();
	p.setX(p.x() + 245);
	p.setY(p.y() + 22);
	m_pFun6->move(p);
	if (m_pFun6->isHidden())
	{
		m_pFun1->hide();
		m_pFun2->hide();
		m_pFun3->hide();
		m_pFun4->hide();
		m_pFun5->hide();
		m_pFun6->show();
		m_pFun7->hide();
		m_pFun8->hide();
	}
	else
		m_pFun6->hide();

	update();
}

void RobotHmi::SlotFun7()
{
	QPoint p = m_pNav1st->GetFun7Pos();
	p.setX(p.x() + 245);
	p.setY(p.y() + 22);
	m_pFun7->move(p);
	if (m_pFun7->isHidden())
	{
		m_pFun1->hide();
		m_pFun2->hide();
		m_pFun3->hide();
		m_pFun4->hide();
		m_pFun5->hide();
		m_pFun6->hide();
		m_pFun7->show();
		m_pFun8->hide();
	}
	else
		m_pFun7->hide();

	update();
}

void RobotHmi::SlotFun8()
{
	QPoint p = m_pNav1st->GetFun8Pos();
	p.setX(p.x() + 245);
	p.setY(p.y() + 22);
	m_pFun8->move(p);
	if (m_pFun8->isHidden())
	{
		m_pFun1->hide();
		m_pFun2->hide();
		m_pFun3->hide();
		m_pFun4->hide();
		m_pFun5->hide();
		m_pFun6->hide();
		m_pFun7->hide();
		m_pFun8->show();
	}
	else
		m_pFun8->hide();

	update();
}

void RobotHmi::SlotFunHide()
{
	m_pFun1->hide();
	m_pFun2->hide();
	m_pFun3->hide();
	m_pFun4->hide();
	m_pFun5->hide();
	m_pFun6->hide();
	m_pFun7->hide();
	m_pFun8->hide();

	update();
}

void RobotHmi::SlotAllFunHide()
{
	m_pNav1st->hide();
	SlotFunHide();
}
