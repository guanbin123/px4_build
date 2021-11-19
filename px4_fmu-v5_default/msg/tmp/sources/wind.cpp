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

/* Auto-generated by genmsg_cpp from file /home/guanbin/PX4-Autopilot/msg/wind.msg */


#include <inttypes.h>
#include <px4_platform_common/log.h>
#include <px4_platform_common/defines.h>
#include <uORB/topics/wind.h>
#include <uORB/topics/uORBTopics.hpp>
#include <drivers/drv_hrt.h>
#include <lib/drivers/device/Device.hpp>
#include <lib/matrix/matrix/math.hpp>
#include <lib/mathlib/mathlib.h>

constexpr char __orb_wind_fields[] = "uint64_t timestamp;uint64_t timestamp_sample;float windspeed_north;float windspeed_east;float variance_north;float variance_east;float tas_innov;float tas_innov_var;float beta_innov;float beta_innov_var;";

ORB_DEFINE(wind, struct wind_s, 48, __orb_wind_fields, static_cast<uint8_t>(ORB_ID::wind));
ORB_DEFINE(estimator_wind, struct wind_s, 48, __orb_wind_fields, static_cast<uint8_t>(ORB_ID::estimator_wind));


void print_message(const wind_s &message)
{

	PX4_INFO_RAW(" wind_s\n");

	const hrt_abstime now = hrt_absolute_time();

	if (message.timestamp != 0) {
		PX4_INFO_RAW("\ttimestamp: %" PRIu64 "  (%.6f seconds ago)\n", message.timestamp, (now - message.timestamp) / 1e6);
	} else {
		PX4_INFO_RAW("\n");
	}
	
	PX4_INFO_RAW("\ttimestamp_sample: %" PRIu64 "  (%" PRIu64 " us before timestamp)\n", message.timestamp_sample, message.timestamp - message.timestamp_sample);
	
	PX4_INFO_RAW("\twindspeed_north: %.4f\n", (double)message.windspeed_north);
	PX4_INFO_RAW("\twindspeed_east: %.4f\n", (double)message.windspeed_east);
	PX4_INFO_RAW("\tvariance_north: %.4f\n", (double)message.variance_north);
	PX4_INFO_RAW("\tvariance_east: %.4f\n", (double)message.variance_east);
	PX4_INFO_RAW("\ttas_innov: %.4f\n", (double)message.tas_innov);
	PX4_INFO_RAW("\ttas_innov_var: %.4f\n", (double)message.tas_innov_var);
	PX4_INFO_RAW("\tbeta_innov: %.4f\n", (double)message.beta_innov);
	PX4_INFO_RAW("\tbeta_innov_var: %.4f\n", (double)message.beta_innov_var);

}
