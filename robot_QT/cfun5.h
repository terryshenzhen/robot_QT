#ifndef CFUN5_H
#define CFUN5_H

#include <QWidget>
#include "ui_cfun5.h"

//Ѳ��������
class RobotHmi;
class CFun5 : public QWidget
{
	Q_OBJECT

public:
	CFun5(QWidget *parent = 0);
	~CFun5();

private:
	Ui::CFun5 ui;

	RobotHmi *m_pHmi;

private:
	void Init();
	void InitUi();
	void InitSlot();

private slots:
	void SlotAct1(); //�Աȷ���
	void SlotAct2(); //���ɱ���
};

#endif // CFUN5_H
