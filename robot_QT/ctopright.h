#ifndef CTOPRIGHT_H
#define CTOPRIGHT_H

#include <QWidget>
#include "common.h"

class RobotHmi;
class CTopRight : public QWidget
{
	Q_OBJECT

public:
	CTopRight(QWidget *parent);
	~CTopRight();

	void SetPixmap(const QPixmap &);

protected:
	void paintEvent(QPaintEvent *e);
	virtual void mousePressEvent(QMouseEvent *e);

private:
	RobotHmi *m_pHmi;
	QPixmap m_localPix;
	QPushButton *m_btnArea;
	QHBoxLayout *m_hBoxLyout;
	QVBoxLayout *m_vBoxLyout;

private:
	void Init();
	void InitUi();
	void InitSlot();
	
};

#endif // CTOPRIGHT_H
