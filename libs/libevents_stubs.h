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

// Stub event IDs - normally generated from events JSON file
enum class event_id_t : uint32_t {
    test1 = 0x1001,
    test2 = 0x1002,
    test3 = 0x1003,
    test4 = 0x1004,
    test5 = 0x1005,
    arming_check_summary = 0x1101,
    health_summary = 0x1102,
};

// Stub decode functions for arming_check_summary event
inline void decode_arming_check_summary(const EventType& event, uint8_t& error, uint8_t& warning, uint8_t& canArm) {
    // Decode from event arguments - simplified stub
    error = event.arguments[0];
    warning = event.arguments[1];
    canArm = event.arguments[2];
}

// Stub decode functions for health_summary event
inline void decode_health_summary(const EventType& event, uint8_t& isPresent, uint8_t& error, uint8_t& warning) {
    // Decode from event arguments - simplified stub
    isPresent = event.arguments[0];
    error = event.arguments[1];
    warning = event.arguments[2];
}

} // namespace common
} // namespace events