/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -N -i mpristypes.h -c Mpris1TrackListProxy -p tracklist_proxy org.freedesktop.MediaPlayer.tracklist.xml
 *
 * qdbusxml2cpp is Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef TRACKLIST_PROXY_H_1281721680
#define TRACKLIST_PROXY_H_1281721680

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include "mpristypes.h"

/*
 * Proxy class for interface org.freedesktop.MediaPlayer
 */
class Mpris1TrackListProxy: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freedesktop.MediaPlayer"; }

public:
    Mpris1TrackListProxy(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~Mpris1TrackListProxy();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<int> AddTrack(const QString &in0, bool in1)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(in0) << qVariantFromValue(in1);
        return asyncCallWithArgumentList(QLatin1String("AddTrack"), argumentList);
    }

    inline QDBusPendingReply<> DelTrack(int in0)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(in0);
        return asyncCallWithArgumentList(QLatin1String("DelTrack"), argumentList);
    }

    inline QDBusPendingReply<int> GetCurrentTrack()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetCurrentTrack"), argumentList);
    }

    inline QDBusPendingReply<int> GetLength()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetLength"), argumentList);
    }

    inline QDBusPendingReply<QVariantMap> GetMetadata(int in0)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(in0);
        return asyncCallWithArgumentList(QLatin1String("GetMetadata"), argumentList);
    }

    inline QDBusPendingReply<> SetLoop(bool in0)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(in0);
        return asyncCallWithArgumentList(QLatin1String("SetLoop"), argumentList);
    }

    inline QDBusPendingReply<> SetRandom(bool in0)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(in0);
        return asyncCallWithArgumentList(QLatin1String("SetRandom"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void TrackListChange(int in0);
};

#endif