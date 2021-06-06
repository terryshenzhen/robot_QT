#include "cfun8.h"
#include "robothmi.h"
#include "ztest.h"

//�����˲���
CFun8::CFun8(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	m_pHmi = (RobotHmi*)parent;

	Init();
	InitUi();
	InitSlot();
}

CFun8::~CFun8()
{

}

void CFun8::Init()
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
}

void CFun8::InitUi()
{

}

void CFun8::InitSlot()
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
	connect(ui.checkBox1, SIGNAL(stateChanged(int)), this, SLOT(SlotCheckboxStateChanged1(int)));
	connect(ui.checkBox2, SIGNAL(stateChanged(int)), this, SLOT(SlotCheckboxStateChanged2(int)));
	connect(ui.checkBox3, SIGNAL(stateChanged(int)), this, SLOT(SlotCheckboxStateChanged3(int)));
	connect(ui.checkBox4, SIGNAL(stateChanged(int)), this, SLOT(SlotCheckboxStateChanged4(int)));
	connect(ui.checkBox5, SIGNAL(stateChanged(int)), this, SLOT(SlotCheckboxStateChanged5(int)));
}

void CFun8::SlotAct1() //������̨
{

}

void CFun8::SlotAct2() //���Ե���
{

}

void CFun8::SlotAct3() //��������ҳ��
{

}

void CFun8::SlotAct4() //��̨���У��
{

}

void CFun8::SlotAct5() //��̨��λ
{

}

void CFun8::SlotAct6() //����ʹ�ø�վ��ͼ
{

}

void CFun8::SlotAct7() //�������ɰ�������ƻ�
{

}

void CFun8::SlotAct8() //�������и澯
{

}

void CFun8::SlotAct9() //����������
{

}

void CFun8::SlotAct10() //�˳�ң��ģʽ
{

}

void CFun8::SlotCheckboxStateChanged1(int state) //ʹ���״�
{
	if (state == Qt::Checked)
	{
		//��ѡ
	}
	else if (state == Qt::Unchecked)
	{
		//����ѡ
	}
}

void CFun8::SlotCheckboxStateChanged2(int state) //���þ���
{
	if (state == Qt::Checked)
	{
		//��ѡ
	}
	else if (state == Qt::Unchecked)
	{
		//����ѡ
	}
}

void CFun8::SlotCheckboxStateChanged3(int state) //ʹ�ܷ�����
{
	if (state == Qt::Checked)
	{
		//��ѡ
	}
	else if (state == Qt::Unchecked)
	{
		//����ѡ
	}
}

void CFun8::SlotCheckboxStateChanged4(int state) //��������
{
	if (state == Qt::Checked)
	{
		//��ѡ
	}
	else if (state == Qt::Unchecked)
	{
		//����ѡ
	}
}

void CFun8::SlotCheckboxStateChanged5(int state) //�����˶���
{
	if (state == Qt::Checked)
	{
		//��ѡ
	}
	else if (state == Qt::Unchecked)
	{
		//����ѡ
	}
}

