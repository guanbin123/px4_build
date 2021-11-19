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

static constexpr size_t ORB_TOPICS_COUNT{189};
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
	debug_array = 27,
	debug_key_value = 28,
	debug_value = 29,
	debug_vect = 30,
	differential_pressure = 31,
	distance_sensor = 32,
	ekf2_timestamps = 33,
	ekf_gps_drift = 34,
	esc_report = 35,
	esc_status = 36,
	estimator_attitude = 37,
	estimator_baro_bias = 38,
	estimator_event_flags = 39,
	estimator_global_position = 40,
	estimator_innovation_test_ratios = 41,
	estimator_innovation_variances = 42,
	estimator_innovations = 43,
	estimator_local_position = 44,
	estimator_odometry = 45,
	estimator_optical_flow_vel = 46,
	estimator_selector_status = 47,
	estimator_sensor_bias = 48,
	estimator_states = 49,
	estimator_status = 50,
	estimator_status_flags = 51,
	estimator_visual_odometry_aligned = 52,
	estimator_wind = 53,
	event = 54,
	follow_target = 55,
	fw_virtual_attitude_setpoint = 56,
	generator_status = 57,
	geofence_result = 58,
	gimbal_device_attitude_status = 59,
	gimbal_device_information = 60,
	gimbal_device_set_attitude = 61,
	gimbal_manager_information = 62,
	gimbal_manager_set_attitude = 63,
	gimbal_manager_set_manual_control = 64,
	gimbal_manager_status = 65,
	gps_dump = 66,
	gps_inject_data = 67,
	heater_status = 68,
	home_position = 69,
	hover_thrust_estimate = 70,
	input_rc = 71,
	internal_combustion_engine_status = 72,
	iridiumsbd_status = 73,
	irlock_report = 74,
	landing_gear = 75,
	landing_target_innovations = 76,
	landing_target_pose = 77,
	led_control = 78,
	log_message = 79,
	logger_status = 80,
	mag_worker_data = 81,
	manual_control_setpoint = 82,
	manual_control_switches = 83,
	mavlink_log = 84,
	mc_virtual_attitude_setpoint = 85,
	mission = 86,
	mission_result = 87,
	mount_orientation = 88,
	multirotor_motor_limits = 89,
	navigator_mission_item = 90,
	obstacle_distance = 91,
	obstacle_distance_fused = 92,
	offboard_control_mode = 93,
	onboard_computer_status = 94,
	optical_flow = 95,
	orbit_status = 96,
	parameter_update = 97,
	ping = 98,
	position_controller_landing_status = 99,
	position_controller_status = 100,
	position_setpoint = 101,
	position_setpoint_triplet = 102,
	power_button_state = 103,
	power_monitor = 104,
	pwm_input = 105,
	px4io_status = 106,
	qshell_req = 107,
	qshell_retval = 108,
	radio_status = 109,
	rate_ctrl_status = 110,
	rc_channels = 111,
	rc_parameter_map = 112,
	rpm = 113,
	rtl_flight_time = 114,
	safety = 115,
	satellite_info = 116,
	sensor_accel = 117,
	sensor_accel_fifo = 118,
	sensor_baro = 119,
	sensor_combined = 120,
	sensor_correction = 121,
	sensor_gps = 122,
	sensor_gyro = 123,
	sensor_gyro_fft = 124,
	sensor_gyro_fifo = 125,
	sensor_mag = 126,
	sensor_preflight_mag = 127,
	sensor_selection = 128,
	sensors_status_imu = 129,
	system_power = 130,
	takeoff_status = 131,
	task_stack_info = 132,
	tecs_status = 133,
	telemetry_status = 134,
	test_motor = 135,
	timesync = 136,
	timesync_status = 137,
	trajectory_bezier = 138,
	trajectory_setpoint = 139,
	trajectory_waypoint = 140,
	transponder_report = 141,
	tune_control = 142,
	uavcan_parameter_request = 143,
	uavcan_parameter_value = 144,
	ulog_stream = 145,
	ulog_stream_ack = 146,
	vehicle_acceleration = 147,
	vehicle_actuator_setpoint = 148,
	vehicle_air_data = 149,
	vehicle_angular_acceleration = 150,
	vehicle_angular_acceleration_setpoint = 151,
	vehicle_angular_velocity = 152,
	vehicle_angular_velocity_groundtruth = 153,
	vehicle_attitude = 154,
	vehicle_attitude_groundtruth = 155,
	vehicle_attitude_setpoint = 156,
	vehicle_command = 157,
	vehicle_command_ack = 158,
	vehicle_constraints = 159,
	vehicle_control_mode = 160,
	vehicle_global_position = 161,
	vehicle_global_position_groundtruth = 162,
	vehicle_gps_position = 163,
	vehicle_imu = 164,
	vehicle_imu_status = 165,
	vehicle_land_detected = 166,
	vehicle_local_position = 167,
	vehicle_local_position_groundtruth = 168,
	vehicle_local_position_setpoint = 169,
	vehicle_magnetometer = 170,
	vehicle_mocap_odometry = 171,
	vehicle_odometry = 172,
	vehicle_rates_setpoint = 173,
	vehicle_roi = 174,
	vehicle_status = 175,
	vehicle_status_flags = 176,
	vehicle_thrust_setpoint = 177,
	vehicle_torque_setpoint = 178,
	vehicle_trajectory_bezier = 179,
	vehicle_trajectory_waypoint = 180,
	vehicle_trajectory_waypoint_desired = 181,
	vehicle_vision_attitude = 182,
	vehicle_visual_odometry = 183,
	vtol_vehicle_status = 184,
	wheel_encoders = 185,
	wind = 186,
	xmf_status = 187,
	yaw_estimator_status = 188,

	INVALID
};

const struct orb_metadata *get_orb_meta(ORB_ID id);
