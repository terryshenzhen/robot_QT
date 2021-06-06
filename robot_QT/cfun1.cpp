#include "cfun1.h"
#include "robothmi.h"
#include "ztest.h"

CFun1::CFun1(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	m_pHmi = (RobotHmi*)parent;

	Init();
	InitUi();
	InitSlot();
}

CFun1::~CFun1()
{

}

void CFun1::Init()
{
	setWindowFlags(Qt::FramelessWindowHint | Qt::Tool);
	ui.btnAct1->setCursor(QCursor(Qt::PointingHandCursor));
}

void CFun1::InitUi()
{

}

void CFun1::InitSlot()
{
	connect(ui.btnAct1, SIGNAL(clicked()), this, SLOT(SlotAct1()));
}

void CFun1::SlotAct1() //机器人管理
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("机器人管理")))
	{
		w = new ZTest();
		w->SetLabelText("机器人管理-机器人管理");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("机器人管理"), QString::fromLocal8Bit("机器人管理—机器人管理"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("机器人管理—机器人管理"));
}
