#include "cfun5.h"
#include "robothmi.h"
#include "ztest.h"

//巡检结果分析
CFun5::CFun5(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	m_pHmi = (RobotHmi*)parent;

	Init();
	InitUi();
	InitSlot();
}

CFun5::~CFun5()
{

}

void CFun5::Init()
{
	setWindowFlags(Qt::FramelessWindowHint | Qt::Tool);
	ui.btnAct1->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnAct2->setCursor(QCursor(Qt::PointingHandCursor));
}

void CFun5::InitUi()
{

}

void CFun5::InitSlot()
{
	connect(ui.btnAct1, SIGNAL(clicked()), this, SLOT(SlotAct1()));
	connect(ui.btnAct2, SIGNAL(clicked()), this, SLOT(SlotAct2()));
}

void CFun5::SlotAct1() //对比分析
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("对比分析")))
	{
		w = new ZTest();
		w->SetLabelText("巡检结果确认—对比分析");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("对比分析"), QString::fromLocal8Bit("巡检结果分析—对比分析"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("巡检结果分析—对比分析"));
}

void CFun5::SlotAct2() //生成报表
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("生成报表")))
	{
		w = new ZTest();
		w->SetLabelText("巡检结果分析—生成报表");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("生成报表"), QString::fromLocal8Bit("巡检结果分析—生成报表"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("巡检结果分析—生成报表"));
}
