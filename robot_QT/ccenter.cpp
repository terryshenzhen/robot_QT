#include "ccenter.h"
#include "robothmi.h"

CCenter::CCenter(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	m_pHmi = (RobotHmi*)parent;

	Init();
	InitUi();
	InitSlot();
}

CCenter::~CCenter()
{

}

void CCenter::Init()
{
	SetPixmap((QPixmap(":/images/center_bg")));
}

void CCenter::InitUi()
{

}

void CCenter::InitSlot()
{
	connect(ui.tabWidget, SIGNAL(currentChanged(int)), this, SLOT(SlotCurrentChanged(int)));
	connect(ui.tabWidget, SIGNAL(tabCloseRequested(int)), this, SLOT(SlotTabCloseRequested(int)));
}

void CCenter::SetPixmap(const QPixmap &pix)
{
	m_localPix = pix;
	update();
}

void CCenter::paintEvent(QPaintEvent *e)
{
	QPainter painter(this);
	painter.drawPixmap(0, 0, rect().width(), rect().height(), m_localPix, 0, 0, m_localPix.width(), m_localPix.height());
}

void CCenter::mousePressEvent(QMouseEvent *e)
{
	m_pHmi->SlotAllFunHide();
}

bool CCenter::WidgetIsExist(QString name)
{
	for (int i = 0; i < m_lstTabWidgetIndex.count(); i++)
	{
		if (m_lstTabWidgetIndex.at(i).name == name)
			return true;
	}

	return false;
}

void CCenter::AddFunWidget(QString name, QString desc, QWidget *wgt)
{
	for (int i = 0; i < m_lstTabWidgetIndex.count(); i++)
	{
		if (m_lstTabWidgetIndex.at(i).name == name)
		{
			ui.tabWidget->setCurrentWidget(m_lstTabWidgetIndex.at(i).wgt);
			ui.tabWidget->setTabText(ui.tabWidget->currentIndex(), m_lstTabWidgetIndex.at(i).name);
			return;
		}
	}

	int index = ui.tabWidget->addTab(wgt, QIcon(":/images/application"), name);
	ui.tabWidget->setCurrentIndex(index);

	stuTab tab;
	tab.name = name;
	tab.desc = desc;
	tab.wgt = wgt;
	m_lstTabWidgetIndex.append(tab);
}

void CCenter::SlotCurrentChanged(int index)
{
	m_pHmi->SlotAllFunHide();
	ui.tabWidget->setCurrentIndex(index);

	for (int i = 0; i < m_lstTabWidgetIndex.count(); i++)
	{
		if (m_lstTabWidgetIndex.at(i).name == ui.tabWidget->tabText(index))
		{
			m_pHmi->SetLabelNavigation(m_lstTabWidgetIndex.at(i).desc);
			break;
		}
	}
}

void CCenter::SlotTabCloseRequested(int index)
{
	//if (ui.tabWidget->tabText(index) == QString::fromLocal8Bit("变电站智能机器人巡检"))
	//	return;

	for (int i = 0; i < m_lstTabWidgetIndex.count(); i++)
	{
		if (m_lstTabWidgetIndex.at(i).name == ui.tabWidget->tabText(index))
		{
			QWidget *wgt = m_lstTabWidgetIndex.at(i).wgt;
			for (int j = 0; j < m_lstTabWidgetIndex.count();)
			{
				if (m_lstTabWidgetIndex.at(j).wgt == wgt)
					m_lstTabWidgetIndex.removeAt(j);
				else
					j++;
			}
			break;
		}
	}

	ui.tabWidget->removeTab(index);

	//delete ui.tabWidget->widget(index);
	if (ui.tabWidget->count() == 0)
		m_pHmi->SetLabelNavigation("");
	//else
	//	m_pHmi->SetLabelNavigation(ui.tabWidget->tabText(ui.tabWidget->currentIndex()));
}
