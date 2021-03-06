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

/* Auto-generated by genmsg_cpp from file /home/guanbin/PX4-Autopilot/msg/telemetry_status.msg */


#include <inttypes.h>
#include <px4_platform_common/log.h>
#include <px4_platform_common/defines.h>
#include <uORB/topics/telemetry_status.h>
#include <uORB/topics/uORBTopics.hpp>
#include <drivers/drv_hrt.h>
#include <lib/drivers/device/Device.hpp>
#include <lib/matrix/matrix/math.hpp>
#include <lib/mathlib/mathlib.h>

constexpr char __orb_telemetry_status_fields[] = "uint64_t timestamp;float data_rate;float rate_multiplier;float tx_rate_avg;float tx_error_rate_avg;uint32_t tx_message_count;uint32_t tx_buffer_overruns;float rx_rate_avg;uint32_t rx_message_count;uint32_t rx_message_lost_count;uint32_t rx_buffer_overruns;uint32_t rx_parse_errors;uint32_t rx_packet_drop_count;float rx_message_lost_rate;uint8_t type;uint8_t mode;bool flow_control;bool forwarding;bool mavlink_v2;bool ftp;uint8_t streams;bool heartbeat_type_antenna_tracker;bool heartbeat_type_gcs;bool heartbeat_type_onboard_controller;bool heartbeat_type_gimbal;bool heartbeat_type_adsb;bool heartbeat_type_camera;bool heartbeat_component_telemetry_radio;bool heartbeat_component_log;bool heartbeat_component_osd;bool heartbeat_component_obstacle_avoidance;bool heartbeat_component_vio;bool heartbeat_component_pairing_manager;bool heartbeat_component_udp_bridge;bool heartbeat_component_uart_bridge;bool avoidance_system_healthy;uint8_t[6] _padding0;";

ORB_DEFINE(telemetry_status, struct telemetry_status_s, 82, __orb_telemetry_status_fields, static_cast<uint8_t>(ORB_ID::telemetry_status));


void print_message(const telemetry_status_s &message)
{

	(void)message;
	PX4_INFO_RAW("Not implemented on flash constrained hardware\n");

}
