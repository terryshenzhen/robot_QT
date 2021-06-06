#ifndef CFUN3_H
#define CFUN3_H

#include <QWidget>
#include "ui_cfun3.h"

//ʵʱ���
class RobotHmi;
class CFun3 : public QWidget
{
	Q_OBJECT

public:
	CFun3(QWidget *parent = 0);
	~CFun3();

private:
	Ui::CFun3 ui;

	RobotHmi *m_pHmi;

private:
	void Init();
	void InitUi();
	void InitSlot();

private slots:
	void SlotAct1(); //Ѳ�Ӽ��
	void SlotAct2(); //������ң��

};

#endif // CFUN3_H
