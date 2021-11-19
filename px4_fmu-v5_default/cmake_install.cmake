# Install script for directory: /home/guanbin/PX4-Autopilot

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "MinSizeRel")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "TRUE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/platforms/nuttx/src/px4/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/drivers/adc/ads1115/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/drivers/adc/board_adc/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/drivers/barometer/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/drivers/batt_smbus/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/drivers/camera_capture/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/drivers/camera_trigger/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/drivers/differential_pressure/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/drivers/distance_sensor/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/drivers/dshot/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/drivers/gps/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/drivers/heater/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/drivers/imu/analog_devices/adis16448/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/drivers/imu/bosch/bmi055/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/drivers/imu/invensense/icm20602/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/drivers/imu/invensense/icm20689/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/drivers/imu/invensense/icm20948/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/drivers/irlock/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/drivers/lights/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/drivers/lights/rgbled_pwm/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/drivers/magnetometer/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/drivers/optical_flow/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/drivers/osd/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/drivers/pca9685/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/drivers/pca9685_pwm_out/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/drivers/power_monitor/ina226/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/drivers/pwm_input/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/drivers/pwm_out_sim/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/drivers/pwm_out/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/drivers/px4io/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/drivers/rc_input/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/drivers/roboclaw/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/drivers/smart_battery/batmon/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/drivers/rpm/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/drivers/safety_button/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/drivers/telemetry/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/drivers/tone_alarm/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/drivers/uavcan/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/modules/airspeed_selector/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/modules/attitude_estimator_q/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/modules/battery_status/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/modules/camera_feedback/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/modules/commander/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/modules/dataman/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/modules/ekf2/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/modules/esc_battery/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/modules/events/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/modules/flight_mode_manager/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/modules/hust_att_controller/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/modules/fw_pos_control_l1/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/modules/gyro_calibration/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/modules/gyro_fft/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/modules/land_detector/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/modules/landing_target_estimator/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/modules/load_mon/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/modules/local_position_estimator/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/modules/logger/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/modules/mavlink/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/modules/mc_att_control/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/modules/mc_hover_thrust_estimator/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/modules/mc_pos_control/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/modules/mc_rate_control/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/modules/navigator/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/modules/rc_update/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/modules/rover_pos_control/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/modules/sensors/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/modules/sih/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/modules/temperature_compensation/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/modules/uuv_att_control/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/modules/uuv_pos_control/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/modules/vmount/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/modules/vtol_att_control/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/systemcmds/bl_update/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/systemcmds/dmesg/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/systemcmds/dumpfile/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/systemcmds/esc_calib/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/systemcmds/gpio/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/systemcmds/hardfault_log/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/systemcmds/i2cdetect/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/systemcmds/led_control/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/systemcmds/mft/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/systemcmds/mixer/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/systemcmds/motor_ramp/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/systemcmds/motor_test/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/systemcmds/mtd/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/systemcmds/nshterm/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/systemcmds/param/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/systemcmds/perf/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/systemcmds/pwm/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/systemcmds/reboot/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/systemcmds/reflect/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/systemcmds/sd_bench/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/systemcmds/serial_test/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/systemcmds/system_time/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/systemcmds/top/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/systemcmds/topic_listener/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/systemcmds/tune_control/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/systemcmds/uorb/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/systemcmds/usb_connected/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/systemcmds/ver/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/systemcmds/work_queue/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/src/examples/fake_gps/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/boards/px4/fmu-v5/src/cmake_install.cmake")
  include("/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/platforms/nuttx/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/guanbin/PX4-Autopilot/build/px4_fmu-v5_default/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
