#include "cfun4.h"
#include "robothmi.h"
#include "ztest.h"

//Ѳ����ȷ��
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

void CFun4::SlotAct1() //�豸�澯��Ϣȷ��
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("�豸�澯��Ϣȷ��")))
	{
		w = new ZTest();
		w->SetLabelText("Ѳ����ȷ�ϡ��豸�澯��Ϣȷ��");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("�豸�澯��Ϣȷ��"), QString::fromLocal8Bit("Ѳ����ȷ�ϡ��豸�澯��Ϣȷ��"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("Ѳ����ȷ�ϡ��豸�澯��Ϣȷ��"));
}

void CFun4::SlotAct2() //������չʾ
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("������չʾ")))
	{
		w = new ZTest();
		w->SetLabelText("Ѳ����ȷ�ϡ�������չʾ");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("������չʾ"), QString::fromLocal8Bit("Ѳ����ȷ�ϡ�������չʾ"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("Ѳ����ȷ�ϡ�������չʾ"));
}

void CFun4::SlotAct3() //���չ
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("���չ")))
	{
		w = new ZTest();
		w->SetLabelText("Ѳ����ȷ�ϡ����չ");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("���չ"), QString::fromLocal8Bit("Ѳ����ȷ�ϡ����չ"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("Ѳ����ȷ�ϡ����չ"));
}

void CFun4::SlotAct4() //Ѳ�������
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("Ѳ�������")))
	{
		w = new ZTest();
		w->SetLabelText("Ѳ����ȷ�ϡ�Ѳ�������");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("Ѳ�������"), QString::fromLocal8Bit("Ѳ����ȷ�ϡ�Ѳ�������"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("Ѳ����ȷ�ϡ�Ѳ�������"));
}

void CFun4::SlotAct5() //Ѳ�챨������
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("Ѳ�챨������")))
	{
		w = new ZTest();
		w->SetLabelText("Ѳ����ȷ�ϡ�Ѳ�챨������");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("Ѳ�챨������"), QString::fromLocal8Bit("Ѳ����ȷ�ϡ�Ѳ�챨������"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("Ѳ����ȷ�ϡ�Ѳ�챨������"));
}
