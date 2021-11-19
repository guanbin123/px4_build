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

/* Auto-generated by genmsg_cpp from file /home/guanbin/PX4-Autopilot/msg/gimbal_device_attitude_status.msg */


#include <inttypes.h>
#include <px4_platform_common/log.h>
#include <px4_platform_common/defines.h>
#include <uORB/topics/gimbal_device_attitude_status.h>
#include <uORB/topics/uORBTopics.hpp>
#include <drivers/drv_hrt.h>
#include <lib/drivers/device/Device.hpp>
#include <lib/matrix/matrix/math.hpp>
#include <lib/mathlib/mathlib.h>

constexpr char __orb_gimbal_device_attitude_status_fields[] = "uint64_t timestamp;float[4] q;float angular_velocity_x;float angular_velocity_y;float angular_velocity_z;uint32_t failure_flags;uint16_t device_flags;uint8_t target_system;uint8_t target_component;uint8_t[4] _padding0;";

ORB_DEFINE(gimbal_device_attitude_status, struct gimbal_device_attitude_status_s, 44, __orb_gimbal_device_attitude_status_fields, static_cast<uint8_t>(ORB_ID::gimbal_device_attitude_status));


void print_message(const gimbal_device_attitude_status_s &message)
{

	PX4_INFO_RAW(" gimbal_device_attitude_status_s\n");

	const hrt_abstime now = hrt_absolute_time();

	if (message.timestamp != 0) {
		PX4_INFO_RAW("\ttimestamp: %" PRIu64 "  (%.6f seconds ago)\n", message.timestamp, (now - message.timestamp) / 1e6);
	} else {
		PX4_INFO_RAW("\n");
	}
	{
		matrix::Eulerf euler{matrix::Quatf{message.q}};
		PX4_INFO_RAW("\tq: [%.4f, %.4f, %.4f, %.4f]  (Roll: %.1f deg, Pitch: %.1f deg, Yaw: %.1f deg)\n", (double)message.q[0], (double)message.q[1], (double)message.q[2], (double)message.q[3], (double)math::degrees(euler(0)), (double)math::degrees(euler(1)), (double)math::degrees(euler(2)));
	
	}
	PX4_INFO_RAW("\tangular_velocity_x: %.4f\n", (double)message.angular_velocity_x);
	PX4_INFO_RAW("\tangular_velocity_y: %.4f\n", (double)message.angular_velocity_y);
	PX4_INFO_RAW("\tangular_velocity_z: %.4f\n", (double)message.angular_velocity_z);
	PX4_INFO_RAW("\tfailure_flags: %" PRIu32 " (0b", message.failure_flags);
	for (int i = (sizeof(message.failure_flags) * 8) - 1; i >= 0; i--) { PX4_INFO_RAW("%lu%s", (unsigned long) message.failure_flags >> i & 1, ((unsigned)i < (sizeof(message.failure_flags) * 8) - 1 && i % 4 == 0 && i > 0) ? "'" : ""); }
	PX4_INFO_RAW(")\n");
	PX4_INFO_RAW("\tdevice_flags: %u (0b", message.device_flags);
	for (int i = (sizeof(message.device_flags) * 8) - 1; i >= 0; i--) { PX4_INFO_RAW("%lu%s", (unsigned long) message.device_flags >> i & 1, ((unsigned)i < (sizeof(message.device_flags) * 8) - 1 && i % 4 == 0 && i > 0) ? "'" : ""); }
	PX4_INFO_RAW(")\n");
	PX4_INFO_RAW("\ttarget_system: %u\n", message.target_system);
	PX4_INFO_RAW("\ttarget_component: %u\n", message.target_component);
	
}
