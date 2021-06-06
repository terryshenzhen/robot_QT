#ifndef CFUN5_H
#define CFUN5_H

#include <QWidget>
#include "ui_cfun5.h"

//巡检结果分析
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
	void SlotAct1(); //对比分析
	void SlotAct2(); //生成报表
};

#endif // CFUN5_H
