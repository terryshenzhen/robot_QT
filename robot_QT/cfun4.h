#ifndef CFUN4_H
#define CFUN4_H

#include <QWidget>
#include "ui_cfun4.h"

//巡检结果确认
class RobotHmi;
class CFun4 : public QWidget
{
	Q_OBJECT

public:
	CFun4(QWidget *parent = 0);
	~CFun4();

private:
	Ui::CFun4 ui;

	RobotHmi *m_pHmi;

private:
	void Init();
	void InitUi();
	void InitSlot();

private slots:
	void SlotAct1(); //设备告警信息确认
	void SlotAct2(); //主接线展示
	void SlotAct3(); //间隔展示
	void SlotAct4(); //巡检结果浏览
	void SlotAct5(); //巡检报告生成

};

#endif // CFUN4_H
