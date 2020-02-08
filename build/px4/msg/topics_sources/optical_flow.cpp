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

/* Auto-generated by genmsg_cpp from file optical_flow.msg */


#include <inttypes.h>
#include <px4_log.h>
#include <px4_defines.h>
#include <uORB/topics/optical_flow.h>
#include <drivers/drv_hrt.h>
#include <lib/drivers/device/Device.hpp>

constexpr char __orb_optical_flow_fields[] = "uint64_t timestamp;float pixel_flow_x_integral;float pixel_flow_y_integral;float gyro_x_rate_integral;float gyro_y_rate_integral;float gyro_z_rate_integral;float ground_distance_m;uint32_t integration_timespan;uint32_t time_since_last_sonar_update;float max_flow_rate;float min_ground_distance;float max_ground_distance;uint16_t frame_count_since_last_readout;int16_t gyro_temperature;uint8_t sensor_id;uint8_t quality;uint8_t[6] _padding0;";

ORB_DEFINE(optical_flow, struct optical_flow_s, 58, __orb_optical_flow_fields);


void print_message(const optical_flow_s& message)
{

	PX4_INFO_RAW(" optical_flow_s\n");
	if (message.timestamp != 0) {
		PX4_INFO_RAW("\ttimestamp: %" PRIu64 "  (%.6f seconds ago)\n", message.timestamp, hrt_elapsed_time(&message.timestamp) / 1e6);
	} else {
		PX4_INFO_RAW("\n");
	}
	PX4_INFO_RAW("\tpixel_flow_x_integral: %.4f\n", (double)message.pixel_flow_x_integral);
	PX4_INFO_RAW("\tpixel_flow_y_integral: %.4f\n", (double)message.pixel_flow_y_integral);
	PX4_INFO_RAW("\tgyro_x_rate_integral: %.4f\n", (double)message.gyro_x_rate_integral);
	PX4_INFO_RAW("\tgyro_y_rate_integral: %.4f\n", (double)message.gyro_y_rate_integral);
	PX4_INFO_RAW("\tgyro_z_rate_integral: %.4f\n", (double)message.gyro_z_rate_integral);
	PX4_INFO_RAW("\tground_distance_m: %.4f\n", (double)message.ground_distance_m);
	PX4_INFO_RAW("\tintegration_timespan: %" PRIu32 "\n", message.integration_timespan);
	PX4_INFO_RAW("\ttime_since_last_sonar_update: %" PRIu32 "\n", message.time_since_last_sonar_update);
	PX4_INFO_RAW("\tmax_flow_rate: %.4f\n", (double)message.max_flow_rate);
	PX4_INFO_RAW("\tmin_ground_distance: %.4f\n", (double)message.min_ground_distance);
	PX4_INFO_RAW("\tmax_ground_distance: %.4f\n", (double)message.max_ground_distance);
	PX4_INFO_RAW("\tframe_count_since_last_readout: %u\n", message.frame_count_since_last_readout);
	PX4_INFO_RAW("\tgyro_temperature: %d\n", message.gyro_temperature);
	PX4_INFO_RAW("\tsensor_id: %u\n", message.sensor_id);
	PX4_INFO_RAW("\tquality: %u\n", message.quality);
	
}
