#include "cfun6.h"
#include "robothmi.h"
#include "ztest.h"

//用户设置
CFun6::CFun6(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	m_pHmi = (RobotHmi*)parent;

	Init();
	InitUi();
	InitSlot();
}

CFun6::~CFun6()
{

}

void CFun6::Init()
{
	setWindowFlags(Qt::FramelessWindowHint | Qt::Tool);
	ui.btnAct1->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnAct2->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnAct3->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnAct4->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnAct5->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnAct6->setCursor(QCursor(Qt::PointingHandCursor));
}

void CFun6::InitUi()
{

}

void CFun6::InitSlot()
{
	connect(ui.btnAct1, SIGNAL(clicked()), this, SLOT(SlotAct1()));
	connect(ui.btnAct2, SIGNAL(clicked()), this, SLOT(SlotAct2()));
	connect(ui.btnAct3, SIGNAL(clicked()), this, SLOT(SlotAct3()));
	connect(ui.btnAct4, SIGNAL(clicked()), this, SLOT(SlotAct4()));
	connect(ui.btnAct5, SIGNAL(clicked()), this, SLOT(SlotAct5()));
	connect(ui.btnAct6, SIGNAL(clicked()), this, SLOT(SlotAct6()));
}

void CFun6::SlotAct1() //告警阀值设置
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("告警阀值设置")))
	{
		w = new ZTest();
		w->SetLabelText("用户设置—告警阀值设置");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("告警阀值设置"), QString::fromLocal8Bit("用户设置—告警阀值设置"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("用户设置—告警阀值设置"));
}

void CFun6::SlotAct2() //告警信息订阅设置
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("告警信息订阅设置")))
	{
		w = new ZTest();
		w->SetLabelText("用户设置—告警信息订阅设置");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("告警信息订阅设置"), QString::fromLocal8Bit("用户设置—告警信息订阅设置"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("用户设置—告警信息订阅设置"));
}

void CFun6::SlotAct3() //权限管理
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("权限管理")))
	{
		w = new ZTest();
		w->SetLabelText("用户设置—权限管理");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("权限管理"), QString::fromLocal8Bit("用户设置—权限管理"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("用户设置—权限管理"));
}

void CFun6::SlotAct4() //典型巡检点位库维护
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("典型巡检点位库维护")))
	{
		w = new ZTest();
		w->SetLabelText("用户设置—典型巡检点位库维护");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("典型巡检点位库维护"), QString::fromLocal8Bit("用户设置—典型巡检点位库维护"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("用户设置—典型巡检点位库维护"));
}

void CFun6::SlotAct5() //巡检点位设置
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("巡检点位设置")))
	{
		w = new ZTest();
		w->SetLabelText("用户设置—巡检点位设置");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("巡检点位设置"), QString::fromLocal8Bit("用户设置—巡检点位设置"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("用户设置—巡检点位设置"));
}

void CFun6::SlotAct6() //检修区域设置
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("检修区域设置")))
	{
		w = new ZTest();
		w->SetLabelText("用户设置—检修区域设置");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("检修区域设置"), QString::fromLocal8Bit("用户设置—检修区域设置"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("用户设置—检修区域设置"));
}

