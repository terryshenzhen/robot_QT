#ifndef CFUN7_H
#define CFUN7_H

#include <QWidget>
#include "ui_cfun7.h"

//机器人系统调试维护
class RobotHmi;
class CFun7 : public QWidget
{
	Q_OBJECT

public:
	CFun7(QWidget *parent = 0);
	~CFun7();

private:
	Ui::CFun7 ui;

	RobotHmi *m_pHmi;

private:
	void Init();
	void InitUi();
	void InitSlot();

private slots:
	void SlotAct1(); //巡检地图维护
	void SlotAct2(); //软件设置
	void SlotAct3(); //机器人设置
	void SlotAct4(); //机器人告警查询
	void SlotAct5(); //识别异常点位查询

};

#endif // CFUN7_H
