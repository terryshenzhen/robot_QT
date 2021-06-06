#ifndef ROBOTHMI_H
#define ROBOTHMI_H

#include <QWidget>
#include "ui_robothmi.h"
#include "common.h"
#include "ctopleft.h"
#include "ctopright.h"
#include "ccenter.h"
#include "cnav1st.h"
#include "cfun1.h"
#include "cfun2.h"
#include "cfun3.h"
#include "cfun4.h"
#include "cfun5.h"
#include "cfun6.h"
#include "cfun7.h"
#include "cfun8.h"
#include "ztest.h"

class RobotHmi : public QWidget
{
	Q_OBJECT

public:
	RobotHmi(QWidget *parent = 0);
	~RobotHmi();

	void SetLoginInfo(char *text) { m_pTopLeft->SetLoginInfo(text); }
	void AddFunWidget(QString name, QString desc, QWidget *wgt) { m_pCenter->AddFunWidget(name, desc, wgt); }
	bool WidgetIsExist(QString name) { return m_pCenter->WidgetIsExist(name); }
	void SetLabelNavigation(QString name) { m_pTopLeft->SetLabelNavigation(name); update(); }

protected:
	virtual void resizeEvent(QResizeEvent *e);
	virtual void moveEvent(QMoveEvent *e);

private:
	Ui::RobotHmiClass ui;

	CFun1 *m_pFun1;
	CFun2 *m_pFun2;
	CFun3 *m_pFun3;
	CFun4 *m_pFun4;
	CFun5 *m_pFun5;
	CFun6 *m_pFun6;
	CFun7 *m_pFun7;
	CFun8 *m_pFun8;
	CNav1st *m_pNav1st;
	CCenter *m_pCenter;
	CTopLeft *m_pTopLeft;
	CTopRight *m_pTopRight;
	QHBoxLayout *m_hBoxLyout;
	QVBoxLayout *m_vBoxLyout;

private:
	void Init();
	void InitUi();
	void InitSlot();

public slots:
	void SlotHome();
	void SlotHelp();
	void SlotQuit();
	void SlotNavigation();
	void SlotFun1();
	void SlotFun2();
	void SlotFun3();
	void SlotFun4();
	void SlotFun5();
	void SlotFun6();
	void SlotFun7();
	void SlotFun8();
	void SlotFunHide();
	void SlotAllFunHide();

};

#endif // ROBOTHMI_H
