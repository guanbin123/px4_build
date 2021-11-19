/****************************************************************************
 *
 *   Copyright (C) 2013-2016 PX4 Development Team. All rights reserved.
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

/* Auto-generated by genmsg_cpp from file /home/guanbin/PX4-Autopilot/msg/vehicle_status_flags.msg */


#pragma once


#include <uORB/uORB.h>


#ifndef __cplusplus

#endif


#ifdef __cplusplus
struct __EXPORT vehicle_status_flags_s {
#else
struct vehicle_status_flags_s {
#endif
	uint64_t timestamp;
	bool condition_calibration_enabled;
	bool condition_system_sensors_initialized;
	bool condition_system_hotplug_timeout;
	bool condition_system_returned_to_home;
	bool condition_auto_mission_available;
	bool condition_angular_velocity_valid;
	bool condition_attitude_valid;
	bool condition_local_altitude_valid;
	bool condition_local_position_valid;
	bool condition_local_velocity_valid;
	bool condition_global_position_valid;
	bool condition_home_position_valid;
	bool condition_power_input_valid;
	bool condition_battery_healthy;
	bool condition_escs_error;
	bool condition_escs_failure;
	bool circuit_breaker_engaged_power_check;
	bool circuit_breaker_engaged_airspd_check;
	bool circuit_breaker_engaged_enginefailure_check;
	bool circuit_breaker_flight_termination_disabled;
	bool circuit_breaker_engaged_usb_check;
	bool circuit_breaker_engaged_posfailure_check;
	bool circuit_breaker_vtol_fw_arming_check;
	bool offboard_control_signal_found_once;
	bool offboard_control_signal_lost;
	bool rc_signal_found_once;
	bool rc_input_blocked;
	bool rc_calibration_valid;
	bool vtol_transition_failure;
	bool usb_connected;
	bool sd_card_detected_once;
	bool avoidance_system_required;
	bool avoidance_system_valid;
	uint8_t _padding0[7]; // required for logger


#ifdef __cplusplus

#endif
};

/* register this as object request broker structure */
ORB_DECLARE(vehicle_status_flags);


#ifdef __cplusplus
void print_message(const vehicle_status_flags_s& message);
#endif
