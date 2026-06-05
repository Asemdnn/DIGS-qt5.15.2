/*=====================================================================
 * 
 *   MavlinkSettings.h
 *   Stub header for Mavlink settings page
 * 
 *   This is a stub - the original QGC source may not have included this header
 * 
 *====================================================================*/

#ifndef MAVLINKSETTINGS_H
#define MAVLINKSETTINGS_H

#include <QObject>

class MavlinkSettings : public QObject
{
    Q_OBJECT

public:
    explicit MavlinkSettings(QObject *parent = nullptr);
    ~MavlinkSettings();

signals:

public slots:
};

#endif // MAVLINKSETTINGS_H