#include "cfun7.h"
#include "robothmi.h"
#include "ztest.h"

//机器人系统调试维护
CFun7::CFun7(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	m_pHmi = (RobotHmi*)parent;

	Init();
	InitUi();
	InitSlot();
}

CFun7::~CFun7()
{

}

void CFun7::Init()
{
	setWindowFlags(Qt::FramelessWindowHint | Qt::Tool);
	ui.btnAct1->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnAct2->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnAct3->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnAct4->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnAct5->setCursor(QCursor(Qt::PointingHandCursor));
}

void CFun7::InitUi()
{

}

void CFun7::InitSlot()
{
	connect(ui.btnAct1, SIGNAL(clicked()), this, SLOT(SlotAct1()));
	connect(ui.btnAct2, SIGNAL(clicked()), this, SLOT(SlotAct2()));
	connect(ui.btnAct3, SIGNAL(clicked()), this, SLOT(SlotAct3()));
	connect(ui.btnAct4, SIGNAL(clicked()), this, SLOT(SlotAct4()));
	connect(ui.btnAct5, SIGNAL(clicked()), this, SLOT(SlotAct5()));
}

void CFun7::SlotAct1() //巡检地图维护
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("巡检地图维护")))
	{
		w = new ZTest();
		w->SetLabelText("机器人系统调试维护—巡检地图维护");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("巡检地图维护"), QString::fromLocal8Bit("机器人系统调试维护—巡检地图维护"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("机器人系统调试维护—巡检地图维护"));
}

void CFun7::SlotAct2() //软件设置
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("软件设置")))
	{
		w = new ZTest();
		w->SetLabelText("机器人系统调试维护—软件设置");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("软件设置"), QString::fromLocal8Bit("机器人系统调试维护—软件设置"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("机器人系统调试维护—软件设置"));
}

void CFun7::SlotAct3() //机器人设置
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("机器人设置")))
	{
		w = new ZTest();
		w->SetLabelText("机器人系统调试维护—机器人设置");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("机器人设置"), QString::fromLocal8Bit("机器人系统调试维护—机器人设置"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("机器人系统调试维护—机器人设置"));
}

void CFun7::SlotAct4() //机器人告警查询
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("机器人告警查询")))
	{
		w = new ZTest();
		w->SetLabelText("机器人系统调试维护—机器人告警查询");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("机器人告警查询"), QString::fromLocal8Bit("机器人系统调试维护—机器人告警查询"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("机器人系统调试维护—机器人告警查询"));
}

void CFun7::SlotAct5() //识别异常点位查询
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("识别异常点位查询")))
	{
		w = new ZTest();
		w->SetLabelText("机器人系统调试维护—识别异常点位查询");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("识别异常点位查询"), QString::fromLocal8Bit("机器人系统调试维护—识别异常点位查询"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("机器人系统调试维护—识别异常点位查询"));
}

