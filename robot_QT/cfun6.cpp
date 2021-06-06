#include "cfun6.h"
#include "robothmi.h"
#include "ztest.h"

//�û�����
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

void CFun6::SlotAct1() //�澯��ֵ����
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("�澯��ֵ����")))
	{
		w = new ZTest();
		w->SetLabelText("�û����á��澯��ֵ����");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("�澯��ֵ����"), QString::fromLocal8Bit("�û����á��澯��ֵ����"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("�û����á��澯��ֵ����"));
}

void CFun6::SlotAct2() //�澯��Ϣ��������
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("�澯��Ϣ��������")))
	{
		w = new ZTest();
		w->SetLabelText("�û����á��澯��Ϣ��������");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("�澯��Ϣ��������"), QString::fromLocal8Bit("�û����á��澯��Ϣ��������"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("�û����á��澯��Ϣ��������"));
}

void CFun6::SlotAct3() //Ȩ�޹���
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("Ȩ�޹���")))
	{
		w = new ZTest();
		w->SetLabelText("�û����á�Ȩ�޹���");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("Ȩ�޹���"), QString::fromLocal8Bit("�û����á�Ȩ�޹���"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("�û����á�Ȩ�޹���"));
}

void CFun6::SlotAct4() //����Ѳ���λ��ά��
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("����Ѳ���λ��ά��")))
	{
		w = new ZTest();
		w->SetLabelText("�û����á�����Ѳ���λ��ά��");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("����Ѳ���λ��ά��"), QString::fromLocal8Bit("�û����á�����Ѳ���λ��ά��"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("�û����á�����Ѳ���λ��ά��"));
}

void CFun6::SlotAct5() //Ѳ���λ����
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("Ѳ���λ����")))
	{
		w = new ZTest();
		w->SetLabelText("�û����á�Ѳ���λ����");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("Ѳ���λ����"), QString::fromLocal8Bit("�û����á�Ѳ���λ����"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("�û����á�Ѳ���λ����"));
}

void CFun6::SlotAct6() //������������
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("������������")))
	{
		w = new ZTest();
		w->SetLabelText("�û����á�������������");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("������������"), QString::fromLocal8Bit("�û����á�������������"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("�û����á�������������"));
}

