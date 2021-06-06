#include "ctopleft.h"
#include "robothmi.h"

CTopLeft::CTopLeft(QWidget *parent)
	: QWidget(parent)
{
	m_pHmi = (RobotHmi*)parent;

	Init();
	InitUi();
	InitSlot();
}

CTopLeft::~CTopLeft()
{

}

void CTopLeft::Init()
{
	setFixedHeight(80);
	SetPixmap((QPixmap(":/images/top_bg")));

	m_labelLogin = new QLabel(this);
	m_labelNavigation = new QLabel(this);
	m_labelNavigation->setStyleSheet("font:22px; color: #FFFFFF");

	m_btnHome = new QPushButton(this);
	m_btnHome->setFixedSize(60, 24);
	m_btnHome->setCursor(QCursor(Qt::PointingHandCursor));
	m_btnHome->setStyleSheet(
		"QPushButton{border-image:url(:/images/home_nor);}"
		"QPushButton::hover{border-image:url(:/images/home_hov);}"
		"QPushButton::pressed{border-image:url(:/images/home_cli);}");

	m_btnHelp = new QPushButton(this);
	m_btnHelp->setFixedSize(60, 24);
	m_btnHelp->setCursor(QCursor(Qt::PointingHandCursor));
	m_btnHelp->setStyleSheet(
		"QPushButton{border-image:url(:/images/help_nor);}"
		"QPushButton::hover{border-image:url(:/images/help_hov);}"
		"QPushButton::pressed{border-image:url(:/images/help_cli);}");

	m_btnQuit = new QPushButton(this);
	m_btnQuit->setFixedSize(60, 24);
	m_btnQuit->setCursor(QCursor(Qt::PointingHandCursor));
	m_btnQuit->setStyleSheet(
		"QPushButton{border-image:url(:/images/quit_nor);}"
		"QPushButton::hover{border-image:url(:/images/quit_hov);}"
		"QPushButton::pressed{border-image:url(:/images/quit_cli);}");

	m_btnNavigation = new QPushButton(this);
	m_btnNavigation->setFixedSize(250, 30);
	m_btnNavigation->setCursor(QCursor(Qt::PointingHandCursor));
	m_btnNavigation->setStyleSheet(
		"QPushButton{border-image:url(:/images/nav_hov);}"
		"QPushButton::hover{border-image:url(:/images/nav_hov);}"
		"QPushButton::pressed{border-image:url(:/images/nav_hov);}");

	SetLoginInfo("Î´µÇÂ¼");
}

void CTopLeft::InitUi()
{
	m_hBoxLyout1 = new QHBoxLayout;
	m_hBoxLyout1->addWidget(m_btnHome);
	m_hBoxLyout1->addWidget(m_btnHelp);
	m_hBoxLyout1->addWidget(m_btnQuit);
	m_hBoxLyout1->setContentsMargins(17, 0, 0, 10);
	m_hBoxLyout1->setSpacing(20);

	m_hBoxLyout2 = new QHBoxLayout;
	m_hBoxLyout2->addLayout(m_hBoxLyout1);
	m_hBoxLyout2->addWidget(m_labelLogin);
	m_hBoxLyout2->addStretch();
	m_hBoxLyout2->setSpacing(50);

	m_hBoxLyout3 = new QHBoxLayout;
	m_hBoxLyout3->addWidget(m_btnNavigation);
	m_hBoxLyout3->addWidget(m_labelNavigation);
	m_hBoxLyout3->addStretch();
	m_hBoxLyout3->setContentsMargins(0, 3, 0, 0);
	m_hBoxLyout3->setSpacing(30);

	m_vBoxLyout = new QVBoxLayout;
	m_vBoxLyout->addLayout(m_hBoxLyout2);
	m_vBoxLyout->addLayout(m_hBoxLyout3);

	setLayout(m_vBoxLyout);
}

void CTopLeft::InitSlot()
{
	connect(m_btnHome, SIGNAL(clicked()), this, SLOT(SlotHome()));
	connect(m_btnHelp, SIGNAL(clicked()), this, SLOT(SlotHelp()));
	connect(m_btnQuit, SIGNAL(clicked()), this, SLOT(SlotQuit()));
	connect(m_btnNavigation, SIGNAL(clicked()), this, SLOT(SlotNavigation()));
}

void CTopLeft::SetPixmap(const QPixmap &pix)
{
	m_localPix = pix;
	update();
}

void CTopLeft::paintEvent(QPaintEvent *e)
{
	QPainter painter(this);
	painter.drawPixmap(0, 0, rect().width(), rect().height(), m_localPix, 0, 0, m_localPix.width(), m_localPix.height());
}

void CTopLeft::mousePressEvent(QMouseEvent *e)
{
	m_pHmi->SlotAllFunHide();
}

void CTopLeft::SlotHome()
{
	SigHome();
}

void CTopLeft::SlotHelp()
{
	SigHelp();
}

void CTopLeft::SlotQuit()
{
	SigQuit();
}

void CTopLeft::SlotNavigation()
{
	SigNavigation();
}
