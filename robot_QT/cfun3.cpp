#include "cfun3.h"
#include "robothmi.h"
#include "ztest.h"

//实时监控
CFun3::CFun3(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	m_pHmi = (RobotHmi*)parent;

	Init();
	InitUi();
	InitSlot();
}

CFun3::~CFun3()
{

}

void CFun3::Init()
{
	setWindowFlags(Qt::FramelessWindowHint | Qt::Tool);
	ui.btnAct1->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnAct2->setCursor(QCursor(Qt::PointingHandCursor));
}

void CFun3::InitUi()
{

}

void CFun3::InitSlot()
{
	connect(ui.btnAct1, SIGNAL(clicked()), this, SLOT(SlotAct1()));
	connect(ui.btnAct2, SIGNAL(clicked()), this, SLOT(SlotAct2()));
}

void CFun3::SlotAct1() //巡视监控
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("巡视监控")))
	{
		w = new ZTest();
		w->SetLabelText("实时监控—巡视监控");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("巡视监控"), QString::fromLocal8Bit("实时监控—巡视监控"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("实时监控—巡视监控"));
}

void CFun3::SlotAct2() //机器人遥控
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("机器人遥控")))
	{
		w = new ZTest();
		w->SetLabelText("实时监控—机器人遥控");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("机器人遥控"), QString::fromLocal8Bit("实时监控—机器人遥控"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("实时监控—机器人遥控"));
}

