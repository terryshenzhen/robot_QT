#ifndef CFUN6_H
#define CFUN6_H

#include <QWidget>
#include "ui_cfun6.h"

//用户设置
class RobotHmi;
class CFun6 : public QWidget
{
	Q_OBJECT

public:
	CFun6(QWidget *parent = 0);
	~CFun6();

private:
	Ui::CFun6 ui;

	RobotHmi *m_pHmi;

private:
	void Init();
	void InitUi();
	void InitSlot();

private slots:
	void SlotAct1(); //告警阀值设置
	void SlotAct2(); //告警信息订阅设置
	void SlotAct3(); //权限管理
	void SlotAct4(); //典型巡检点位库维护
	void SlotAct5(); //巡检点位设置
	void SlotAct6(); //检修区域设置

};

#endif // CFUN6_H
