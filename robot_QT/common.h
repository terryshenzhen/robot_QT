#ifndef COMMON_H
#define COMMON_H

#include <QAbstractButton>
#include <QApplication>
#include <QCoreApplication>
#include <QCryptographicHash>
#include <QCursor>
#include <QDate>
#include <QDateTime>
#include <QDesktopServices>
#include <QDesktopWidget>
#include <QDir>
#include <QFile>
#include <QFileDialog>
#include <QFileIconProvider>
#include <QFont>
#include <QFontMetrics>
#include <QHBoxLayout>
#include <QLabel>
#include <QListWidget>
#include <QMessageBox>
#include <QObject>
#include <QPainter>
#include <QPaintEvent>
#include <QPainterPath>
#include <QPen>
#include <QPixmap>
#include <QProcess>
#include <QPushButton>
#include <QSettings>
#include <QSound>
#include <QStyleFactory>
#include <QStyleOption>
#include <QTextCodec>
#include <QTime>
#include <QTimer>
#include <QtGui>
#include <QUrl>
#include <QWidget>
#include <qmath.h>

#define	VERSION		"1.0.0"

class Common
{
	Common();
	~Common();

public:
    static QString GetCurrentAppPath()
	{
		return QCoreApplication::applicationDirPath()+"/";
	}

    static QString GetCurrentAppName()
	{
		return QCoreApplication::applicationName();
	}

    static bool FolderExists(QString strFolder)
	{
		QDir tempFolder(strFolder);
		if(tempFolder.exists())
			return true;
		return false;
	}

    static bool CreateFolder(QString strFolder)
	{
		QDir dir;
		return dir.mkdir(strFolder);
	}

    static bool FileExists(QString strFile)
	{
		QFileInfo fi(strFile);
		if (fi.exists())
			return true;
		return false;
	}

	static void ClearLayout(QLayout *layout)
	{
		QLayoutItem *item = NULL;
		while((item = layout->takeAt(0)) != 0)
		{
			if(item->widget())
				delete item->widget();

			QLayout *childLayout = item->layout();
			if(childLayout)
				ClearLayout(childLayout);

			delete item;
		}
	}
};

#endif // COMMON_H
