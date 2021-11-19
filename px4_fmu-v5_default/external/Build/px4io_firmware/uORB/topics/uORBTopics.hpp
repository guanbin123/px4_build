/****************************************************************************
 *
 *   Copyright (C) 2020 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/


#pragma once

#include <stddef.h>

#include <uORB/uORB.h>

static constexpr size_t ORB_TOPICS_COUNT{185};
static constexpr size_t orb_topics_count() { return ORB_TOPICS_COUNT; }

/*
 * Returns array of topics metadata
 */
extern const struct orb_metadata *const *orb_get_topics() __EXPORT;

enum class ORB_ID : uint8_t {
	actuator_armed = 0,
	actuator_controls = 1,
	actuator_controls_0 = 2,
	actuator_controls_1 = 3,
	actuator_controls_2 = 4,
	actuator_controls_3 = 5,
	actuator_controls_4 = 6,
	actuator_controls_5 = 7,
	actuator_controls_virtual_fw = 8,
	actuator_controls_virtual_mc = 9,
	actuator_outputs = 10,
	adc_report = 11,
	adrc = 12,
	airspeed = 13,
	airspeed_validated = 14,
	airspeed_wind = 15,
	battery_status = 16,
	camera_capture = 17,
	camera_status = 18,
	camera_trigger = 19,
	camera_trigger_secondary = 20,
	cellular_status = 21,
	collision_constraints = 22,
	collision_report = 23,
	commander_state = 24,
	control_allocator_status = 25,
	cpuload = 26,
	differential_pressure = 27,
	distance_sensor = 28,
	ekf2_timestamps = 29,
	ekf_gps_drift = 30,
	esc_report = 31,
	esc_status = 32,
	estimator_attitude = 33,
	estimator_baro_bias = 34,
	estimator_event_flags = 35,
	estimator_global_position = 36,
	estimator_innovation_test_ratios = 37,
	estimator_innovation_variances = 38,
	estimator_innovations = 39,
	estimator_local_position = 40,
	estimator_odometry = 41,
	estimator_optical_flow_vel = 42,
	estimator_selector_status = 43,
	estimator_sensor_bias = 44,
	estimator_states = 45,
	estimator_status = 46,
	estimator_status_flags = 47,
	estimator_visual_odometry_aligned = 48,
	estimator_wind = 49,
	event = 50,
	follow_target = 51,
	fw_virtual_attitude_setpoint = 52,
	generator_status = 53,
	geofence_result = 54,
	gimbal_device_attitude_status = 55,
	gimbal_device_information = 56,
	gimbal_device_set_attitude = 57,
	gimbal_manager_information = 58,
	gimbal_manager_set_attitude = 59,
	gimbal_manager_set_manual_control = 60,
	gimbal_manager_status = 61,
	gps_dump = 62,
	gps_inject_data = 63,
	heater_status = 64,
	home_position = 65,
	hover_thrust_estimate = 66,
	input_rc = 67,
	internal_combustion_engine_status = 68,
	iridiumsbd_status = 69,
	irlock_report = 70,
	landing_gear = 71,
	landing_target_innovations = 72,
	landing_target_pose = 73,
	led_control = 74,
	log_message = 75,
	logger_status = 76,
	mag_worker_data = 77,
	manual_control_setpoint = 78,
	manual_control_switches = 79,
	mavlink_log = 80,
	mc_virtual_attitude_setpoint = 81,
	mission = 82,
	mission_result = 83,
	mount_orientation = 84,
	multirotor_motor_limits = 85,
	navigator_mission_item = 86,
	obstacle_distance = 87,
	obstacle_distance_fused = 88,
	offboard_control_mode = 89,
	onboard_computer_status = 90,
	optical_flow = 91,
	orbit_status = 92,
	parameter_update = 93,
	ping = 94,
	position_controller_landing_status = 95,
	position_controller_status = 96,
	position_setpoint = 97,
	position_setpoint_triplet = 98,
	power_button_state = 99,
	power_monitor = 100,
	pwm_input = 101,
	px4io_status = 102,
	qshell_req = 103,
	qshell_retval = 104,
	radio_status = 105,
	rate_ctrl_status = 106,
	rc_channels = 107,
	rc_parameter_map = 108,
	rpm = 109,
	rtl_flight_time = 110,
	safety = 111,
	satellite_info = 112,
	sensor_accel = 113,
	sensor_accel_fifo = 114,
	sensor_baro = 115,
	sensor_combined = 116,
	sensor_correction = 117,
	sensor_gps = 118,
	sensor_gyro = 119,
	sensor_gyro_fft = 120,
	sensor_gyro_fifo = 121,
	sensor_mag = 122,
	sensor_preflight_mag = 123,
	sensor_selection = 124,
	sensors_status_imu = 125,
	system_power = 126,
	takeoff_status = 127,
	task_stack_info = 128,
	tecs_status = 129,
	telemetry_status = 130,
	test_motor = 131,
	timesync = 132,
	timesync_status = 133,
	trajectory_bezier = 134,
	trajectory_setpoint = 135,
	trajectory_waypoint = 136,
	transponder_report = 137,
	tune_control = 138,
	uavcan_parameter_request = 139,
	uavcan_parameter_value = 140,
	ulog_stream = 141,
	ulog_stream_ack = 142,
	vehicle_acceleration = 143,
	vehicle_actuator_setpoint = 144,
	vehicle_air_data = 145,
	vehicle_angular_acceleration = 146,
	vehicle_angular_acceleration_setpoint = 147,
	vehicle_angular_velocity = 148,
	vehicle_angular_velocity_groundtruth = 149,
	vehicle_attitude = 150,
	vehicle_attitude_groundtruth = 151,
	vehicle_attitude_setpoint = 152,
	vehicle_command = 153,
	vehicle_command_ack = 154,
	vehicle_constraints = 155,
	vehicle_control_mode = 156,
	vehicle_global_position = 157,
	vehicle_global_position_groundtruth = 158,
	vehicle_gps_position = 159,
	vehicle_imu = 160,
	vehicle_imu_status = 161,
	vehicle_land_detected = 162,
	vehicle_local_position = 163,
	vehicle_local_position_groundtruth = 164,
	vehicle_local_position_setpoint = 165,
	vehicle_magnetometer = 166,
	vehicle_mocap_odometry = 167,
	vehicle_odometry = 168,
	vehicle_rates_setpoint = 169,
	vehicle_roi = 170,
	vehicle_status = 171,
	vehicle_status_flags = 172,
	vehicle_thrust_setpoint = 173,
	vehicle_torque_setpoint = 174,
	vehicle_trajectory_bezier = 175,
	vehicle_trajectory_waypoint = 176,
	vehicle_trajectory_waypoint_desired = 177,
	vehicle_vision_attitude = 178,
	vehicle_visual_odometry = 179,
	vtol_vehicle_status = 180,
	wheel_encoders = 181,
	wind = 182,
	xmf_status = 183,
	yaw_estimator_status = 184,

	INVALID
};

const struct orb_metadata *get_orb_meta(ORB_ID id);
