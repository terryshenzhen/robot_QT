#ifndef CFUN2_H
#define CFUN2_H

#include <QWidget>
#include "ui_cfun2.h"

//任务管理
class RobotHmi;
class CFun2 : public QWidget
{
	Q_OBJECT

public:
	CFun2(QWidget *parent = 0);
	~CFun2();

private:
	Ui::CFun2 ui;

	RobotHmi *m_pHmi;

private:
	void Init();
	void InitUi();
	void InitSlot();

private slots:
	void SlotAct1(); //全面巡检
	void SlotAct2(); //例行巡检
	void SlotAct3(); //红外测温
	void SlotAct4(); //油位、油温表抄表
	void SlotAct5(); //避雷器表计读取
	void SlotAct6(); //SF6压力抄录
	void SlotAct7(); //液压表抄录
	void SlotAct8(); //位置状态识别
	void SlotAct9(); //恶劣天气特巡
	void SlotAct10(); //缺陷跟踪
	void SlotAct11(); //远方状态确认
	void SlotAct12(); //远方异常告警确认
	void SlotAct13(); //安防联动
	void SlotAct14(); //协助应急事故处理
	void SlotAct15(); //自定义任务
	void SlotAct16(); //地图选点
	void SlotAct17(); //任务展示

};

#endif // CFUN2_H
