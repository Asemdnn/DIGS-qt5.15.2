// Stub types for libevents - these enums are used by QGC but not defined in libevents
// They should be defined in events_generated.h but are missing from current version

#pragma once

#include <cstdint>
#include <cstring>

namespace events {
namespace common {
namespace enums {

// Stub for health_component_t - used for health reporting
enum class health_component_t : uint8_t {
    all = 0,
    gyro = 1,
    accel = 2,
    mag = 3,
    baro = 4,
    gps = 5,
    rangefinder = 6,
    lidar = 7,
    sonar = 8,
    cryptolib = 9,
    ahrs = 10,
    camera = 11,
    gimbal = 12,
    land = 13,
    motors = 14,
    battery = 15,
    pcake = 16,

    _max = 17
};

// Stub for navigation_mode_category_t - used for navigation mode checking
enum class navigation_mode_category_t : uint8_t {
    undefined = 0,
    manual = 1,
    assisted = 2,
    autonomous = 3,
    test = 4,

    _max = 5
};

} // namespace enums

// Stub decode functions for arming_check_summary event
// Note: These are normally generated from event definitions
// Using upstream's health_component_t and navigation_mode_category_t for type compatibility
inline void decode_arming_check_summary(const EventType& event, 
    events::common::enums::health_component_t& error, 
    events::common::enums::health_component_t& warning, 
    events::common::enums::navigation_mode_category_t& canArm) {
    // Decode from event arguments - simplified stub
    error = (events::common::enums::health_component_t)event.arguments[0];
    warning = (events::common::enums::health_component_t)event.arguments[1];
    canArm = (events::common::enums::navigation_mode_category_t)event.arguments[2];
}

// Stub decode functions for health_summary event
inline void decode_health_summary(const EventType& event, 
    events::common::enums::health_component_t& isPresent, 
    events::common::enums::health_component_t& error, 
    events::common::enums::health_component_t& warning) {
    // Decode from event arguments - simplified stub
    isPresent = (events::common::enums::health_component_t)event.arguments[0];
    error = (events::common::enums::health_component_t)event.arguments[1];
    warning = (events::common::enums::health_component_t)event.arguments[2];
}

} // namespace common
} // namespace events