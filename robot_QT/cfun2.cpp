#include "cfun2.h"
#include "robothmi.h"
#include "ztest.h"

//任务管理
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

void CFun2::SlotAct1() //全面巡检
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("全面巡检")))
	{
		w = new ZTest();
		w->SetLabelText("任务管理—全面巡检");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("全面巡检"), QString::fromLocal8Bit("任务管理—全面巡检"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("任务管理—全面巡检"));
}

void CFun2::SlotAct2() //例行巡检
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("例行巡检")))
	{
		w = new ZTest();
		w->SetLabelText("任务管理—例行巡检");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("例行巡检"), QString::fromLocal8Bit("任务管理—例行巡检"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("任务管理—例行巡检"));
}

void CFun2::SlotAct3() //红外测温
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("红外测温")))
	{
		w = new ZTest();
		w->SetLabelText("任务管理—红外测温");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("红外测温"), QString::fromLocal8Bit("任务管理—红外测温"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("任务管理—红外测温"));
}

void CFun2::SlotAct4() //油位、油温表抄表
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("油位、油温表抄表")))
	{
		w = new ZTest();
		w->SetLabelText("任务管理—油位、油温表抄表");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("油位、油温表抄表"), QString::fromLocal8Bit("任务管理—油位、油温表抄表"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("任务管理—油位、油温表抄表"));
}

void CFun2::SlotAct5() //避雷器表计读取
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("避雷器表计读取")))
	{
		w = new ZTest();
		w->SetLabelText("任务管理—避雷器表计读取");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("避雷器表计读取"), QString::fromLocal8Bit("任务管理—避雷器表计读取"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("任务管理—避雷器表计读取"));
}

void CFun2::SlotAct6() //SF6压力抄录
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("SF6压力抄录")))
	{
		w = new ZTest();
		w->SetLabelText("任务管理—SF6压力抄录");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("SF6压力抄录"), QString::fromLocal8Bit("任务管理—SF6压力抄录"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("任务管理—SF6压力抄录"));
}

void CFun2::SlotAct7() //液压表抄录
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("液压表抄录")))
	{
		w = new ZTest();
		w->SetLabelText("任务管理—液压表抄录");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("液压表抄录"), QString::fromLocal8Bit("任务管理—液压表抄录"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("任务管理—液压表抄录"));
}

void CFun2::SlotAct8() //位置状态识别
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("位置状态识别")))
	{
		w = new ZTest();
		w->SetLabelText("任务管理—位置状态识别");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("位置状态识别"), QString::fromLocal8Bit("任务管理—位置状态识别"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("任务管理—位置状态识别"));
}

void CFun2::SlotAct9() //恶劣天气特巡
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("恶劣天气特巡")))
	{
		w = new ZTest();
		w->SetLabelText("任务管理—恶劣天气特巡");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("恶劣天气特巡"), QString::fromLocal8Bit("任务管理—恶劣天气特巡"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("任务管理—恶劣天气特巡"));
}

void CFun2::SlotAct10() //缺陷跟踪
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("缺陷跟踪")))
	{
		w = new ZTest();
		w->SetLabelText("任务管理—缺陷跟踪");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("缺陷跟踪"), QString::fromLocal8Bit("任务管理—缺陷跟踪"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("任务管理—缺陷跟踪"));
}

void CFun2::SlotAct11() //远方状态确认
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("远方状态确认")))
	{
		w = new ZTest();
		w->SetLabelText("任务管理—远方状态确认");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("远方状态确认"), QString::fromLocal8Bit("任务管理—远方状态确认"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("任务管理—远方状态确认"));
}

void CFun2::SlotAct12() //远方异常告警确认
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("远方异常告警确认")))
	{
		w = new ZTest();
		w->SetLabelText("任务管理—远方异常告警确认");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("远方异常告警确认"), QString::fromLocal8Bit("任务管理—远方异常告警确认"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("任务管理—远方异常告警确认"));
}

void CFun2::SlotAct13() //安防联动
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("安防联动")))
	{
		w = new ZTest();
		w->SetLabelText("任务管理—安防联动");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("安防联动"), QString::fromLocal8Bit("任务管理—安防联动"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("任务管理—安防联动"));
}

void CFun2::SlotAct14() //协助应急事故处理
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("协助应急事故处理")))
	{
		w = new ZTest();
		w->SetLabelText("任务管理—协助应急事故处理");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("协助应急事故处理"), QString::fromLocal8Bit("任务管理—协助应急事故处理"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("任务管理—协助应急事故处理"));
}

void CFun2::SlotAct15() //自定义任务
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("自定义任务")))
	{
		w = new ZTest();
		w->SetLabelText("任务管理—自定义任务");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("自定义任务"), QString::fromLocal8Bit("任务管理—自定义任务"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("任务管理—自定义任务"));
}

void CFun2::SlotAct16() //地图选点
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("地图选点")))
	{
		w = new ZTest();
		w->SetLabelText("任务管理—地图选点");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("地图选点"), QString::fromLocal8Bit("任务管理—地图选点"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("任务管理—地图选点"));
}

void CFun2::SlotAct17() //任务展示
{
	ZTest *w = NULL;
	if (!m_pHmi->WidgetIsExist(QString::fromLocal8Bit("任务展示")))
	{
		w = new ZTest();
		w->SetLabelText("任务管理—任务展示");
	}

	m_pHmi->SlotAllFunHide();
	m_pHmi->AddFunWidget(QString::fromLocal8Bit("任务展示"), QString::fromLocal8Bit("任务管理—任务展示"), w);
	m_pHmi->SetLabelNavigation(QString::fromLocal8Bit("任务管理—任务展示"));
}
