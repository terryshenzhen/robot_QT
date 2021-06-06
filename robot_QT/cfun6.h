#ifndef CFUN6_H
#define CFUN6_H

#include <QWidget>
#include "ui_cfun6.h"

//�û�����
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
	void SlotAct1(); //�澯��ֵ����
	void SlotAct2(); //�澯��Ϣ��������
	void SlotAct3(); //Ȩ�޹���
	void SlotAct4(); //����Ѳ���λ��ά��
	void SlotAct5(); //Ѳ���λ����
	void SlotAct6(); //������������

};

#endif // CFUN6_H
