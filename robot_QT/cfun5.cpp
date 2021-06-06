#include "cfun5.h"
#include "robothmi.h"
#include "ztest.h"

//Ѳ��������
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

void CFun5::SlotAct1() //�Աȷ���
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("�Աȷ���")))
	{
		w = new ZTest();
		w->SetLabelText("Ѳ����ȷ�ϡ��Աȷ���");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("�Աȷ���"), QString::fromLocal8Bit("Ѳ�����������Աȷ���"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("Ѳ�����������Աȷ���"));
}

void CFun5::SlotAct2() //���ɱ���
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("���ɱ���")))
	{
		w = new ZTest();
		w->SetLabelText("Ѳ�������������ɱ���");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("���ɱ���"), QString::fromLocal8Bit("Ѳ�������������ɱ���"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("Ѳ�������������ɱ���"));
}
