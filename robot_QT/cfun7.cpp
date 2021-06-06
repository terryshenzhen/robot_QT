#include "cfun7.h"
#include "robothmi.h"
#include "ztest.h"

//������ϵͳ����ά��
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

void CFun7::SlotAct1() //Ѳ���ͼά��
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("Ѳ���ͼά��")))
	{
		w = new ZTest();
		w->SetLabelText("������ϵͳ����ά����Ѳ���ͼά��");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("Ѳ���ͼά��"), QString::fromLocal8Bit("������ϵͳ����ά����Ѳ���ͼά��"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("������ϵͳ����ά����Ѳ���ͼά��"));
}

void CFun7::SlotAct2() //�������
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("�������")))
	{
		w = new ZTest();
		w->SetLabelText("������ϵͳ����ά�����������");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("�������"), QString::fromLocal8Bit("������ϵͳ����ά�����������"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("������ϵͳ����ά�����������"));
}

void CFun7::SlotAct3() //����������
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("����������")))
	{
		w = new ZTest();
		w->SetLabelText("������ϵͳ����ά��������������");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("����������"), QString::fromLocal8Bit("������ϵͳ����ά��������������"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("������ϵͳ����ά��������������"));
}

void CFun7::SlotAct4() //�����˸澯��ѯ
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("�����˸澯��ѯ")))
	{
		w = new ZTest();
		w->SetLabelText("������ϵͳ����ά���������˸澯��ѯ");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("�����˸澯��ѯ"), QString::fromLocal8Bit("������ϵͳ����ά���������˸澯��ѯ"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("������ϵͳ����ά���������˸澯��ѯ"));
}

void CFun7::SlotAct5() //ʶ���쳣��λ��ѯ
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("ʶ���쳣��λ��ѯ")))
	{
		w = new ZTest();
		w->SetLabelText("������ϵͳ����ά����ʶ���쳣��λ��ѯ");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("ʶ���쳣��λ��ѯ"), QString::fromLocal8Bit("������ϵͳ����ά����ʶ���쳣��λ��ѯ"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("������ϵͳ����ά����ʶ���쳣��λ��ѯ"));
}

