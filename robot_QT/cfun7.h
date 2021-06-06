#ifndef CFUN7_H
#define CFUN7_H

#include <QWidget>
#include "ui_cfun7.h"

//������ϵͳ����ά��
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
	void SlotAct1(); //Ѳ���ͼά��
	void SlotAct2(); //�������
	void SlotAct3(); //����������
	void SlotAct4(); //�����˸澯��ѯ
	void SlotAct5(); //ʶ���쳣��λ��ѯ

};

#endif // CFUN7_H
