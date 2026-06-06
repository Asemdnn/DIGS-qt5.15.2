#pragma once

// MAVLink type compatibility for newer mavlink library versions
// The mavlink v2 library renamed some VTOL types

#ifndef MAV_TYPE_VTOL_DUOROTOR
#define MAV_TYPE_VTOL_DUOROTOR MAV_TYPE_VTOL_TAILSITTER_DUOROTOR
#endif

#ifndef MAV_TYPE_VTOL_QUADROTOR
#define MAV_TYPE_VTOL_QUADROTOR MAV_TYPE_VTOL_TAILSITTER_QUADROTOR
#endif

// The old reserved types were renamed in newer mavlink - these don't exist anymore
// Define them to the actual enum values to avoid compilation errors
#ifndef MAV_TYPE_VTOL_RESERVED2
#define MAV_TYPE_VTOL_RESERVED2 MAV_TYPE_VTOL_TILTROTOR
#endif

#ifndef MAV_TYPE_VTOL_RESERVED3
#define MAV_TYPE_VTOL_RESERVED3 MAV_TYPE_VTOL_FIXEDROTOR
#endif

#ifndef MAV_TYPE_VTOL_RESERVED4
#define MAV_TYPE_VTOL_RESERVED4 MAV_TYPE_VTOL_TAILSITTER
#endif

// Compatibility for new mavlink manual_control parameters
// The new mavlink library added more parameters to manual_control
#ifndef MAVLINK_MSG_MANUAL_CONTROL_FIELD_BUTTONS2_OFFSET
#define MAVLINK_MSG_MANUAL_CONTROL_FIELD_BUTTONS2_OFFSET 11
#endif

#ifndef MAVLINK_MSG_MANUAL_CONTROL_FIELD_ENABLED_EXTENSIONS_OFFSET
#define MAVLINK_MSG_MANUAL_CONTROL_FIELD_ENABLED_EXTENSIONS_OFFSET 13
#endif