#ifndef CFUN2_H
#define CFUN2_H

#include <QWidget>
#include "ui_cfun2.h"

//�������
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
	void SlotAct1(); //ȫ��Ѳ��
	void SlotAct2(); //����Ѳ��
	void SlotAct3(); //�������
	void SlotAct4(); //��λ�����±���
	void SlotAct5(); //��������ƶ�ȡ
	void SlotAct6(); //SF6ѹ����¼
	void SlotAct7(); //Һѹ��¼
	void SlotAct8(); //λ��״̬ʶ��
	void SlotAct9(); //����������Ѳ
	void SlotAct10(); //ȱ�ݸ���
	void SlotAct11(); //Զ��״̬ȷ��
	void SlotAct12(); //Զ���쳣�澯ȷ��
	void SlotAct13(); //��������
	void SlotAct14(); //Э��Ӧ���¹ʴ���
	void SlotAct15(); //�Զ�������
	void SlotAct16(); //��ͼѡ��
	void SlotAct17(); //����չʾ

};

#endif // CFUN2_H
