#ifndef CFUN8_H
#define CFUN8_H

#include <QWidget>
#include "ui_cfun8.h"

//�����˲���
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
	void SlotAct1(); //������̨
	void SlotAct2(); //���Ե���
	void SlotAct3(); //��������ҳ��
	void SlotAct4(); //��̨���У��
	void SlotAct5(); //��̨��λ
	void SlotAct6(); //����ʹ�ø�վ��ͼ
	void SlotAct7(); //�������ɰ�������ƻ�
	void SlotAct8(); //�������и澯
	void SlotAct9(); //����������
	void SlotAct10(); //�˳�ң��ģʽ
	void SlotCheckboxStateChanged1(int state); //ʹ���״�
	void SlotCheckboxStateChanged2(int state); //���þ���
	void SlotCheckboxStateChanged3(int state); //ʹ�ܷ�����
	void SlotCheckboxStateChanged4(int state); //��������
	void SlotCheckboxStateChanged5(int state); //�����˶���

};

#endif // CFUN8_H
