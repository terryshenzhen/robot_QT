#ifndef CFUN4_H
#define CFUN4_H

#include <QWidget>
#include "ui_cfun4.h"

//Ѳ����ȷ��
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
	void SlotAct1(); //�豸�澯��Ϣȷ��
	void SlotAct2(); //������չʾ
	void SlotAct3(); //���չʾ
	void SlotAct4(); //Ѳ�������
	void SlotAct5(); //Ѳ�챨������

};

#endif // CFUN4_H
