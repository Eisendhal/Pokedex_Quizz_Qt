#ifndef KEYENTERRECEIVER_H
#define KEYENTERRECEIVER_H
#include <QObject>
#include <QEvent>


class keyEnterReceiver : public QObject
{
    Q_OBJECT

public:
    keyEnterReceiver();

protected:
    bool eventFilter(QObject* obj, QEvent* event);

signals:
    void keyPressed();
};

#endif // KEYENTERRECEIVER_H
