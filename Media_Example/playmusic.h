#ifndef PLAYMUSIC_H
#define PLAYMUSIC_H

#include <QObject>
#include <QDir>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QUrl>
#include <QTimer>

class playmusic : public QObject
{
    Q_OBJECT
public:
    playmusic();

    void play();

//public slots:
//    void onTimeout();

private:
    QTimer *timer;
};

#endif // PLAYMUSIC_H
