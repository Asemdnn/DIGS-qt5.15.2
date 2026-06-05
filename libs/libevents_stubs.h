// Stub types for libevents - these enums are used by QGC but not defined in libevents
// They should be defined in events_generated.h but are missing from current version

#pragma once

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
    auto = 3,
    test = 4,

    _max = 5
};

} // namespace enums
} // namespace common
} // namespace events