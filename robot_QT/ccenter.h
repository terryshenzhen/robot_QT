#ifndef CCENTER_H
#define CCENTER_H

#include "ui_ccenter.h"
#include "common.h"

class RobotHmi;
class CCenter : public QWidget
{
	Q_OBJECT

public:
	struct stuTab
	{
		QString name;
		QString desc;
		QWidget *wgt;
	};

public:
	CCenter(QWidget *parent = 0);
	~CCenter();

	void SetPixmap(const QPixmap &);
	void AddFunWidget(QString name, QString desc, QWidget *wgt);
	bool WidgetIsExist(QString name);

protected:
	void paintEvent(QPaintEvent *e);
	virtual void mousePressEvent(QMouseEvent *e);

private:
	Ui::CCenter ui;

	RobotHmi *m_pHmi;
	QPixmap m_localPix;
	QList<stuTab> m_lstTabWidgetIndex;

private:
	void Init();
	void InitUi();
	void InitSlot();

private slots:
	void SlotCurrentChanged(int index);
	void SlotTabCloseRequested(int index);
};

#endif // CCENTER_H
