#ifndef CTOPLEFT_H
#define CTOPLEFT_H

#include "common.h"

class RobotHmi;
class CTopLeft : public QWidget
{
	Q_OBJECT

public:
	CTopLeft(QWidget *parent);
	~CTopLeft();

	void SetPixmap(const QPixmap &);
	void SetLoginInfo(char* text) { m_labelLogin->setText(QString::fromLocal8Bit(text)); }
	QPoint GetNavigationPos() { return m_btnNavigation->pos();  }
	void SetLabelNavigation(QString name) { m_labelNavigation->setText(name); }

protected:
	void paintEvent(QPaintEvent *e);
	virtual void mousePressEvent(QMouseEvent *e);

private:
	RobotHmi *m_pHmi;
	QPixmap m_localPix;
	QLabel *m_labelLogin;
	QLabel *m_labelNavigation;
	QPushButton *m_btnHome;
	QPushButton *m_btnHelp;
	QPushButton *m_btnQuit;
	QPushButton *m_btnNavigation;
	QHBoxLayout *m_hBoxLyout1;
	QHBoxLayout *m_hBoxLyout2;
	QHBoxLayout *m_hBoxLyout3;
	QVBoxLayout *m_vBoxLyout;

private:
	void Init();
	void InitUi();
	void InitSlot();

private slots:
	void SlotHome();
	void SlotHelp();
	void SlotQuit();
	void SlotNavigation();

signals:
	void SigHome();
	void SigHelp();
	void SigQuit();
	void SigNavigation();
	
};

#endif // CTOPLEFT_H
