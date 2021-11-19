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

/* Auto-generated by genmsg_cpp from file /home/guanbin/PX4-Autopilot/msg/gimbal_manager_set_manual_control.msg */


#pragma once


#include <uORB/uORB.h>


#ifndef __cplusplus
#define GIMBAL_MANAGER_SET_MANUAL_CONTROL_GIMBAL_MANAGER_FLAGS_RETRACT 1
#define GIMBAL_MANAGER_SET_MANUAL_CONTROL_GIMBAL_MANAGER_FLAGS_NEUTRAL 2
#define GIMBAL_MANAGER_SET_MANUAL_CONTROL_GIMBAL_MANAGER_FLAGS_ROLL_LOCK 4
#define GIMBAL_MANAGER_SET_MANUAL_CONTROL_GIMBAL_MANAGER_FLAGS_PITCH_LOCK 8
#define GIMBAL_MANAGER_SET_MANUAL_CONTROL_GIMBAL_MANAGER_FLAGS_YAW_LOCK 16

#endif


#ifdef __cplusplus
struct __EXPORT gimbal_manager_set_manual_control_s {
#else
struct gimbal_manager_set_manual_control_s {
#endif
	uint64_t timestamp;
	uint32_t flags;
	float pitch;
	float yaw;
	float pitch_rate;
	float yaw_rate;
	uint8_t origin_sysid;
	uint8_t origin_compid;
	uint8_t target_system;
	uint8_t target_component;
	uint8_t gimbal_device_id;
	uint8_t _padding0[7]; // required for logger


#ifdef __cplusplus
	static constexpr uint32_t GIMBAL_MANAGER_FLAGS_RETRACT = 1;
	static constexpr uint32_t GIMBAL_MANAGER_FLAGS_NEUTRAL = 2;
	static constexpr uint32_t GIMBAL_MANAGER_FLAGS_ROLL_LOCK = 4;
	static constexpr uint32_t GIMBAL_MANAGER_FLAGS_PITCH_LOCK = 8;
	static constexpr uint32_t GIMBAL_MANAGER_FLAGS_YAW_LOCK = 16;

#endif
};

/* register this as object request broker structure */
ORB_DECLARE(gimbal_manager_set_manual_control);


#ifdef __cplusplus
void print_message(const gimbal_manager_set_manual_control_s& message);
#endif
