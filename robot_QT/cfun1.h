#ifndef CFUN1_H
#define CFUN1_H

#include <QWidget>
#include "ui_cfun1.h"

//�����˹���
class RobotHmi;
class CFun1 : public QWidget
{
	Q_OBJECT

public:
	CFun1(QWidget *parent = 0);
	~CFun1();

private:
	Ui::CFun1 ui;

	RobotHmi *m_pHmi;

private:
	void Init();
	void InitUi();
	void InitSlot();

private slots:
	void SlotAct1(); //�����˹���
};

#endif // CFUN1_H
