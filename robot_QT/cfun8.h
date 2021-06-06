#ifndef CFUN8_H
#define CFUN8_H

#include <QWidget>
#include "ui_cfun8.h"

//机器人测试
class RobotHmi;
class CFun8 : public QWidget
{
	Q_OBJECT

public:
	CFun8(QWidget *parent = 0);
	~CFun8();

private:
	Ui::CFun8 ui;

	RobotHmi *m_pHmi;

private:
	void Init();
	void InitUi();
	void InitSlot();

private slots:
	void SlotAct1(); //测试云台
	void SlotAct2(); //测试导航
	void SlotAct3(); //红外配置页面
	void SlotAct4(); //云台误差校正
	void SlotAct5(); //云台复位
	void SlotAct6(); //设置使用该站地图
	void SlotAct7(); //重新生成半天任务计划
	void SlotAct8(); //复归所有告警
	void SlotAct9(); //重启驱动器
	void SlotAct10(); //退出遥控模式
	void SlotCheckboxStateChanged1(int state); //使能雷达
	void SlotCheckboxStateChanged2(int state); //设置精度
	void SlotCheckboxStateChanged3(int state); //使能防跌落
	void SlotCheckboxStateChanged4(int state); //启动风扇
	void SlotCheckboxStateChanged5(int state); //机器人动作

};

#endif // CFUN8_H
