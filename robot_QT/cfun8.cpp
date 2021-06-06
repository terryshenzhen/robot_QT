#include "cfun8.h"
#include "robothmi.h"
#include "ztest.h"

//机器人测试
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

void CFun8::SlotAct1() //测试云台
{

}

void CFun8::SlotAct2() //测试导航
{

}

void CFun8::SlotAct3() //红外配置页面
{

}

void CFun8::SlotAct4() //云台误差校正
{

}

void CFun8::SlotAct5() //云台复位
{

}

void CFun8::SlotAct6() //设置使用该站地图
{

}

void CFun8::SlotAct7() //重新生成半天任务计划
{

}

void CFun8::SlotAct8() //复归所有告警
{

}

void CFun8::SlotAct9() //重启驱动器
{

}

void CFun8::SlotAct10() //退出遥控模式
{

}

void CFun8::SlotCheckboxStateChanged1(int state) //使能雷达
{
	if (state == Qt::Checked)
	{
		//勾选
	}
	else if (state == Qt::Unchecked)
	{
		//不勾选
	}
}

void CFun8::SlotCheckboxStateChanged2(int state) //设置精度
{
	if (state == Qt::Checked)
	{
		//勾选
	}
	else if (state == Qt::Unchecked)
	{
		//不勾选
	}
}

void CFun8::SlotCheckboxStateChanged3(int state) //使能防跌落
{
	if (state == Qt::Checked)
	{
		//勾选
	}
	else if (state == Qt::Unchecked)
	{
		//不勾选
	}
}

void CFun8::SlotCheckboxStateChanged4(int state) //启动风扇
{
	if (state == Qt::Checked)
	{
		//勾选
	}
	else if (state == Qt::Unchecked)
	{
		//不勾选
	}
}

void CFun8::SlotCheckboxStateChanged5(int state) //机器人动作
{
	if (state == Qt::Checked)
	{
		//勾选
	}
	else if (state == Qt::Unchecked)
	{
		//不勾选
	}
}

