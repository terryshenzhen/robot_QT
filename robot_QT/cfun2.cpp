#include "cfun2.h"
#include "robothmi.h"
#include "ztest.h"

//�������
CFun2::CFun2(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	m_pHmi = (RobotHmi*)parent;

	Init();
	InitUi();
	InitSlot();
}

CFun2::~CFun2()
{

}

void CFun2::Init()
{
	setWindowFlags(Qt::FramelessWindowHint | Qt::Tool);
	ui.btnAct1->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnAct2->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnAct3->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnAct4->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnAct5->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnAct6->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnAct7->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnAct8->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnAct9->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnAct10->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnAct11->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnAct12->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnAct13->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnAct14->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnAct15->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnAct16->setCursor(QCursor(Qt::PointingHandCursor));
	ui.btnAct17->setCursor(QCursor(Qt::PointingHandCursor));
}

void CFun2::InitUi()
{

}

void CFun2::InitSlot()
{
	connect(ui.btnAct1, SIGNAL(clicked()), this, SLOT(SlotAct1()));
	connect(ui.btnAct2, SIGNAL(clicked()), this, SLOT(SlotAct2()));
	connect(ui.btnAct3, SIGNAL(clicked()), this, SLOT(SlotAct3()));
	connect(ui.btnAct4, SIGNAL(clicked()), this, SLOT(SlotAct4()));
	connect(ui.btnAct5, SIGNAL(clicked()), this, SLOT(SlotAct5()));
	connect(ui.btnAct6, SIGNAL(clicked()), this, SLOT(SlotAct6()));
	connect(ui.btnAct7, SIGNAL(clicked()), this, SLOT(SlotAct7()));
	connect(ui.btnAct8, SIGNAL(clicked()), this, SLOT(SlotAct8()));
	connect(ui.btnAct9, SIGNAL(clicked()), this, SLOT(SlotAct9()));
	connect(ui.btnAct10, SIGNAL(clicked()), this, SLOT(SlotAct10()));
	connect(ui.btnAct11, SIGNAL(clicked()), this, SLOT(SlotAct11()));
	connect(ui.btnAct12, SIGNAL(clicked()), this, SLOT(SlotAct12()));
	connect(ui.btnAct13, SIGNAL(clicked()), this, SLOT(SlotAct13()));
	connect(ui.btnAct14, SIGNAL(clicked()), this, SLOT(SlotAct14()));
	connect(ui.btnAct15, SIGNAL(clicked()), this, SLOT(SlotAct15()));
	connect(ui.btnAct16, SIGNAL(clicked()), this, SLOT(SlotAct16()));
	connect(ui.btnAct17, SIGNAL(clicked()), this, SLOT(SlotAct17()));
}

void CFun2::SlotAct1() //ȫ��Ѳ��
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("ȫ��Ѳ��")))
	{
		w = new ZTest();
		w->SetLabelText("�������ȫ��Ѳ��");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("ȫ��Ѳ��"), QString::fromLocal8Bit("�������ȫ��Ѳ��"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("�������ȫ��Ѳ��"));
}

void CFun2::SlotAct2() //����Ѳ��
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("����Ѳ��")))
	{
		w = new ZTest();
		w->SetLabelText("�����������Ѳ��");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("����Ѳ��"), QString::fromLocal8Bit("�����������Ѳ��"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("�����������Ѳ��"));
}

void CFun2::SlotAct3() //�������
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("�������")))
	{
		w = new ZTest();
		w->SetLabelText("��������������");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("�������"), QString::fromLocal8Bit("��������������"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("��������������"));
}

void CFun2::SlotAct4() //��λ�����±���
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("��λ�����±���")))
	{
		w = new ZTest();
		w->SetLabelText("���������λ�����±���");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("��λ�����±���"), QString::fromLocal8Bit("���������λ�����±���"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("���������λ�����±���"));
}

void CFun2::SlotAct5() //��������ƶ�ȡ
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("��������ƶ�ȡ")))
	{
		w = new ZTest();
		w->SetLabelText("���������������ƶ�ȡ");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("��������ƶ�ȡ"), QString::fromLocal8Bit("���������������ƶ�ȡ"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("���������������ƶ�ȡ"));
}

void CFun2::SlotAct6() //SF6ѹ����¼
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("SF6ѹ����¼")))
	{
		w = new ZTest();
		w->SetLabelText("�������SF6ѹ����¼");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("SF6ѹ����¼"), QString::fromLocal8Bit("�������SF6ѹ����¼"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("�������SF6ѹ����¼"));
}

void CFun2::SlotAct7() //Һѹ��¼
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("Һѹ��¼")))
	{
		w = new ZTest();
		w->SetLabelText("�������Һѹ��¼");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("Һѹ��¼"), QString::fromLocal8Bit("�������Һѹ��¼"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("�������Һѹ��¼"));
}

void CFun2::SlotAct8() //λ��״̬ʶ��
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("λ��״̬ʶ��")))
	{
		w = new ZTest();
		w->SetLabelText("�������λ��״̬ʶ��");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("λ��״̬ʶ��"), QString::fromLocal8Bit("�������λ��״̬ʶ��"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("�������λ��״̬ʶ��"));
}

void CFun2::SlotAct9() //����������Ѳ
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("����������Ѳ")))
	{
		w = new ZTest();
		w->SetLabelText("�����������������Ѳ");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("����������Ѳ"), QString::fromLocal8Bit("�����������������Ѳ"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("�����������������Ѳ"));
}

void CFun2::SlotAct10() //ȱ�ݸ���
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("ȱ�ݸ���")))
	{
		w = new ZTest();
		w->SetLabelText("�������ȱ�ݸ���");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("ȱ�ݸ���"), QString::fromLocal8Bit("�������ȱ�ݸ���"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("�������ȱ�ݸ���"));
}

void CFun2::SlotAct11() //Զ��״̬ȷ��
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("Զ��״̬ȷ��")))
	{
		w = new ZTest();
		w->SetLabelText("�������Զ��״̬ȷ��");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("Զ��״̬ȷ��"), QString::fromLocal8Bit("�������Զ��״̬ȷ��"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("�������Զ��״̬ȷ��"));
}

void CFun2::SlotAct12() //Զ���쳣�澯ȷ��
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("Զ���쳣�澯ȷ��")))
	{
		w = new ZTest();
		w->SetLabelText("�������Զ���쳣�澯ȷ��");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("Զ���쳣�澯ȷ��"), QString::fromLocal8Bit("�������Զ���쳣�澯ȷ��"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("�������Զ���쳣�澯ȷ��"));
}

void CFun2::SlotAct13() //��������
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("��������")))
	{
		w = new ZTest();
		w->SetLabelText("���������������");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("��������"), QString::fromLocal8Bit("���������������"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("���������������"));
}

void CFun2::SlotAct14() //Э��Ӧ���¹ʴ���
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("Э��Ӧ���¹ʴ���")))
	{
		w = new ZTest();
		w->SetLabelText("�������Э��Ӧ���¹ʴ���");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("Э��Ӧ���¹ʴ���"), QString::fromLocal8Bit("�������Э��Ӧ���¹ʴ���"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("�������Э��Ӧ���¹ʴ���"));
}

void CFun2::SlotAct15() //�Զ�������
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("�Զ�������")))
	{
		w = new ZTest();
		w->SetLabelText("��������Զ�������");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("�Զ�������"), QString::fromLocal8Bit("��������Զ�������"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("��������Զ�������"));
}

void CFun2::SlotAct16() //��ͼѡ��
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("��ͼѡ��")))
	{
		w = new ZTest();
		w->SetLabelText("���������ͼѡ��");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("��ͼѡ��"), QString::fromLocal8Bit("���������ͼѡ��"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("���������ͼѡ��"));
}

void CFun2::SlotAct17() //����չʾ
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("����չʾ")))
	{
		w = new ZTest();
		w->SetLabelText("�����������չʾ");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("����չʾ"), QString::fromLocal8Bit("�����������չʾ"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("�����������չʾ"));
}
