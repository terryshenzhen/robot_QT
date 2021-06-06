#include "ctopright.h"
#include "robothmi.h"

CTopRight::CTopRight(QWidget *parent)
	: QWidget(parent)
{
	m_pHmi = (RobotHmi*)parent;

	Init();
	InitUi();
	InitSlot();
}

CTopRight::~CTopRight()
{

}

void CTopRight::Init()
{
	SetPixmap((QPixmap(":/images/top_right")));

	m_btnArea = new QPushButton(this);
	m_btnArea->setFixedSize(82,20);
	m_btnArea->setText(QString::fromLocal8Bit("Õã½­µçÁ¦"));
	m_btnArea->setStyleSheet("QPushButton{color:#FFFFFF;}"
		"QPushButton{border-image:url(:/images/top_area);}"
		"QPushButton::hover{border-image:url(:/images/top_area);}"
		"QPushButton::pressed{border-image:url(:/images/top_area);}");

	m_vBoxLyout = new QVBoxLayout;
	m_vBoxLyout->addStretch();
	m_vBoxLyout->addWidget(m_btnArea,0,Qt::AlignVCenter);

	m_hBoxLyout = new QHBoxLayout;
	m_hBoxLyout->addStretch();
	m_hBoxLyout->addLayout(m_vBoxLyout);

	setLayout(m_hBoxLyout);
}

void CTopRight::InitUi()
{
	this->setFixedWidth(220);
	this->setFixedHeight(80);
}

void CTopRight::InitSlot()
{

}

void CTopRight::SetPixmap(const QPixmap &pix)
{
	m_localPix = pix;
	update();
}

void CTopRight::paintEvent(QPaintEvent *e)
{
	QPainter painter(this);
	painter.drawPixmap(0, 0, rect().width(), rect().height(), m_localPix, 0, 0, m_localPix.width(), m_localPix.height());
}

void CTopRight::mousePressEvent(QMouseEvent *e)
{
	m_pHmi->SlotAllFunHide();
}
