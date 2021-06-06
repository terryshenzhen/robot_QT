#include "cfun3.h"
#include "robothmi.h"
#include "ztest.h"

//ʵʱ���
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

void CFun3::SlotAct1() //Ѳ�Ӽ��
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("Ѳ�Ӽ��")))
	{
		w = new ZTest();
		w->SetLabelText("ʵʱ��ء�Ѳ�Ӽ��");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("Ѳ�Ӽ��"), QString::fromLocal8Bit("ʵʱ��ء�Ѳ�Ӽ��"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("ʵʱ��ء�Ѳ�Ӽ��"));
}

void CFun3::SlotAct2() //������ң��
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("������ң��")))
	{
		w = new ZTest();
		w->SetLabelText("ʵʱ��ء�������ң��");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("������ң��"), QString::fromLocal8Bit("ʵʱ��ء�������ң��"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("ʵʱ��ء�������ң��"));
}

