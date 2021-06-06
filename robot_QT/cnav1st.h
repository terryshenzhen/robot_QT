#ifndef CNAV1ST_H
#define CNAV1ST_H

#include "ui_cnav1st.h"
#include "common.h"

class CNav1st : public QWidget
{
	Q_OBJECT

public:
	CNav1st(QWidget *parent = 0);
	~CNav1st();

	QPoint GetFun1Pos() { return mapToGlobal(ui.btnFun1->pos()); }
	QPoint GetFun2Pos() { return mapToGlobal(ui.btnFun2->pos()); }
	QPoint GetFun3Pos() { return mapToGlobal(ui.btnFun3->pos()); }
	QPoint GetFun4Pos() { return mapToGlobal(ui.btnFun4->pos()); }
	QPoint GetFun5Pos() { return mapToGlobal(ui.btnFun5->pos()); }
	QPoint GetFun6Pos() { return mapToGlobal(ui.btnFun6->pos()); }
	QPoint GetFun7Pos() { return mapToGlobal(ui.btnFun7->pos()); }
	QPoint GetFun8Pos() { return mapToGlobal(ui.btnFun8->pos()); }

private:
	Ui::CNav1st ui;

private:
	void Init();
	void InitUi();
	void InitSlot();

private slots:
	void SlotFun1();
	void SlotFun2();
	void SlotFun3();
	void SlotFun4();
	void SlotFun5();
	void SlotFun6();
	void SlotFun7();
	void SlotFun8();

signals:
	void SigFun1();
	void SigFun2();
	void SigFun3();
	void SigFun4();
	void SigFun5();
	void SigFun6();
	void SigFun7();
	void SigFun8();

};

#endif // CNAV1ST_H
