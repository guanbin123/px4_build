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

/* Auto-generated by genmsg_cpp from file /home/guanbin/PX4-Autopilot/msg/estimator_optical_flow_vel.msg */


#include <inttypes.h>
#include <px4_platform_common/log.h>
#include <px4_platform_common/defines.h>
#include <uORB/topics/estimator_optical_flow_vel.h>
#include <uORB/topics/uORBTopics.hpp>
#include <drivers/drv_hrt.h>
#include <lib/drivers/device/Device.hpp>
#include <lib/matrix/matrix/math.hpp>
#include <lib/mathlib/mathlib.h>

constexpr char __orb_estimator_optical_flow_vel_fields[] = "uint64_t timestamp;uint64_t timestamp_sample;float[2] vel_body;float[2] vel_ne;float[2] flow_uncompensated_integral;float[2] flow_compensated_integral;float[3] gyro_rate_integral;uint8_t[4] _padding0;";

ORB_DEFINE(estimator_optical_flow_vel, struct estimator_optical_flow_vel_s, 60, __orb_estimator_optical_flow_vel_fields, static_cast<uint8_t>(ORB_ID::estimator_optical_flow_vel));


void print_message(const estimator_optical_flow_vel_s &message)
{

	PX4_INFO_RAW(" estimator_optical_flow_vel_s\n");

	const hrt_abstime now = hrt_absolute_time();

	if (message.timestamp != 0) {
		PX4_INFO_RAW("\ttimestamp: %" PRIu64 "  (%.6f seconds ago)\n", message.timestamp, (now - message.timestamp) / 1e6);
	} else {
		PX4_INFO_RAW("\n");
	}
	
	PX4_INFO_RAW("\ttimestamp_sample: %" PRIu64 "  (%" PRIu64 " us before timestamp)\n", message.timestamp_sample, message.timestamp - message.timestamp_sample);
	
	PX4_INFO_RAW("\tvel_body: [%.4f, %.4f]\n", (double)message.vel_body[0], (double)message.vel_body[1]);
	PX4_INFO_RAW("\tvel_ne: [%.4f, %.4f]\n", (double)message.vel_ne[0], (double)message.vel_ne[1]);
	PX4_INFO_RAW("\tflow_uncompensated_integral: [%.4f, %.4f]\n", (double)message.flow_uncompensated_integral[0], (double)message.flow_uncompensated_integral[1]);
	PX4_INFO_RAW("\tflow_compensated_integral: [%.4f, %.4f]\n", (double)message.flow_compensated_integral[0], (double)message.flow_compensated_integral[1]);
	PX4_INFO_RAW("\tgyro_rate_integral: [%.4f, %.4f, %.4f]\n", (double)message.gyro_rate_integral[0], (double)message.gyro_rate_integral[1], (double)message.gyro_rate_integral[2]);
	
}
