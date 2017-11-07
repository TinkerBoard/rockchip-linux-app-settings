#ifndef UPDATERWIDGET_H
#define UPDATERWIDGET_H

#include <QWidget>
#include <QFileInfo>

#include "updater_recovery_start.h"
#include "QProgressIndicator.h"

namespace Ui {
class UpdaterWidget;
}

class UpdaterWidget : public QWidget
{
    Q_OBJECT
public:
    explicit UpdaterWidget(QWidget *parent = 0);
    ~UpdaterWidget();

public slots:
    void on_m_updatePushButton_clicked();
    void retranslateUi();
    void finish();
private:
    Ui::UpdaterWidget *ui;
    QFileInfo *file;
    UpdaterInfo fwinfo;
    QProgressIndicator *pIndicator;
    QTimer *timer;
    bool state;
    void update();
    int fw_md5_check(QString firmwarePath);
};

#endif // UPDATERWIDGET_H
