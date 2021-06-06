#include "cfun4.h"
#include "robothmi.h"
#include "ztest.h"

//巡检结果确认
CFun4::CFun4(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	m_pHmi = (RobotHmi*)parent;

	Init();
	InitUi();
	InitSlot();
}

CFun4::~CFun4()
{

}

void CFun4::Init()
{
	setWindowFlags(Qt::FramelessWindowHint | Qt::Tool);
	ui.btnAct1->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnAct2->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnAct3->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnAct4->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnAct5->setCursor(QCursor(Qt::PointingHandCursor));
}

void CFun4::InitUi()
{

}

void CFun4::InitSlot()
{
	connect(ui.btnAct1, SIGNAL(clicked()), this, SLOT(SlotAct1()));
	connect(ui.btnAct2, SIGNAL(clicked()), this, SLOT(SlotAct2()));
	connect(ui.btnAct3, SIGNAL(clicked()), this, SLOT(SlotAct3()));
	connect(ui.btnAct4, SIGNAL(clicked()), this, SLOT(SlotAct4()));
	connect(ui.btnAct5, SIGNAL(clicked()), this, SLOT(SlotAct5()));
}

void CFun4::SlotAct1() //设备告警信息确认
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("设备告警信息确认")))
	{
		w = new ZTest();
		w->SetLabelText("巡检结果确认—设备告警信息确认");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("设备告警信息确认"), QString::fromLocal8Bit("巡检结果确认—设备告警信息确认"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("巡检结果确认—设备告警信息确认"));
}

void CFun4::SlotAct2() //主接线展示
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("主接线展示")))
	{
		w = new ZTest();
		w->SetLabelText("巡检结果确认—主接线展示");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("主接线展示"), QString::fromLocal8Bit("巡检结果确认—主接线展示"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("巡检结果确认—主接线展示"));
}

void CFun4::SlotAct3() //间隔展
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("间隔展")))
	{
		w = new ZTest();
		w->SetLabelText("巡检结果确认—间隔展");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("间隔展"), QString::fromLocal8Bit("巡检结果确认—间隔展"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("巡检结果确认—间隔展"));
}

void CFun4::SlotAct4() //巡检结果浏览
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("巡检结果浏览")))
	{
		w = new ZTest();
		w->SetLabelText("巡检结果确认—巡检结果浏览");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("巡检结果浏览"), QString::fromLocal8Bit("巡检结果确认—巡检结果浏览"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("巡检结果确认—巡检结果浏览"));
}

void CFun4::SlotAct5() //巡检报告生成
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("巡检报告生成")))
	{
		w = new ZTest();
		w->SetLabelText("巡检结果确认—巡检报告生成");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("巡检报告生成"), QString::fromLocal8Bit("巡检结果确认—巡检报告生成"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("巡检结果确认—巡检报告生成"));
}
