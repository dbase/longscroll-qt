#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <longscroll-qt/contentiteminfo.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(int demoNr = 0, QWidget *parent = 0);
	~MainWindow();

	void setItemInfos(QList<ContentItemInfo> const & infos);

private:
	Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H