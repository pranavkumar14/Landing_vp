

/****************************************************************************
 *
 *   Copyright (c) 2015 PX4 Development Team. All rights reserved.
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

/**
 * @file topic_listener.cpp
 *
 * Autogenerated by Tools/generate_listener.py
 *
 * Tool for listening to topics when running flight stack on linux.
 */

#include <drivers/drv_hrt.h>
#include <px4_app.h>
#include <px4_config.h>
#include <px4_log.h>
#include <uORB/uORB.h>
#include <string.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#include <topic_listener.hpp>
#include <topic_listener_generated.hpp>


#include <uORB/topics/sensor_baro.h>
#include <uORB/topics/ekf_gps_drift.h>
#include <uORB/topics/mission.h>
#include <uORB/topics/follow_target.h>
#include <uORB/topics/actuator_controls.h>
#include <uORB/topics/rate_ctrl_status.h>
#include <uORB/topics/power_button_state.h>
#include <uORB/topics/vehicle_trajectory_waypoint.h>
#include <uORB/topics/mount_orientation.h>
#include <uORB/topics/subsystem_info.h>
#include <uORB/topics/timesync_status.h>
#include <uORB/topics/uavcan_parameter_value.h>
#include <uORB/topics/log_message.h>
#include <uORB/topics/actuator_outputs.h>
#include <uORB/topics/esc_report.h>
#include <uORB/topics/test_motor.h>
#include <uORB/topics/esc_status.h>
#include <uORB/topics/airspeed_validated.h>
#include <uORB/topics/differential_pressure.h>
#include <uORB/topics/orbit_status.h>
#include <uORB/topics/vehicle_attitude.h>
#include <uORB/topics/cpuload.h>
#include <uORB/topics/rc_channels.h>
#include <uORB/topics/sensor_bias.h>
#include <uORB/topics/vehicle_status_flags.h>
#include <uORB/topics/vehicle_command.h>
#include <uORB/topics/camera_capture.h>
#include <uORB/topics/obstacle_distance.h>
#include <uORB/topics/debug_key_value.h>
#include <uORB/topics/airspeed.h>
#include <uORB/topics/safety.h>
#include <uORB/topics/sensor_gyro_control.h>
#include <uORB/topics/camera_trigger.h>
#include <uORB/topics/landing_target_pose.h>
#include <uORB/topics/vehicle_attitude_setpoint.h>
#include <uORB/topics/telemetry_status.h>
#include <uORB/topics/transponder_report.h>
#include <uORB/topics/multirotor_motor_limits.h>
#include <uORB/topics/vehicle_constraints.h>
#include <uORB/topics/sensor_accel.h>
#include <uORB/topics/debug_value.h>
#include <uORB/topics/vehicle_global_position.h>
#include <uORB/topics/servorail_status.h>
#include <uORB/topics/vehicle_angular_velocity.h>
#include <uORB/topics/actuator_armed.h>
#include <uORB/topics/vehicle_command_ack.h>
#include <uORB/topics/wheel_encoders.h>
#include <uORB/topics/position_setpoint_triplet.h>
#include <uORB/topics/estimator_status.h>
#include <uORB/topics/vehicle_control_mode.h>
#include <uORB/topics/debug_vect.h>
#include <uORB/topics/task_stack_info.h>
#include <uORB/topics/vehicle_status.h>
#include <uORB/topics/system_power.h>
#include <uORB/topics/vehicle_odometry.h>
#include <uORB/topics/sensor_combined.h>
#include <uORB/topics/vehicle_rates_setpoint.h>
#include <uORB/topics/wind_estimate.h>
#include <uORB/topics/adc_report.h>
#include <uORB/topics/sensor_correction.h>
#include <uORB/topics/optical_flow.h>
#include <uORB/topics/pwm_input.h>
#include <uORB/topics/position_setpoint.h>
#include <uORB/topics/irlock_report.h>
#include <uORB/topics/collision_report.h>
#include <uORB/topics/led_control.h>
#include <uORB/topics/tecs_status.h>
#include <uORB/topics/debug_array.h>
#include <uORB/topics/ekf2_innovations.h>
#include <uORB/topics/uavcan_parameter_request.h>
#include <uORB/topics/vehicle_gps_position.h>
#include <uORB/topics/rc_parameter_map.h>
#include <uORB/topics/parameter_update.h>
#include <uORB/topics/radio_status.h>
#include <uORB/topics/geofence_result.h>
#include <uORB/topics/vehicle_air_data.h>
#include <uORB/topics/sensor_selection.h>
#include <uORB/topics/ekf_gps_position.h>
#include <uORB/topics/battery_status.h>
#include <uORB/topics/vehicle_magnetometer.h>
#include <uORB/topics/vehicle_land_detected.h>
#include <uORB/topics/ekf2_timestamps.h>
#include <uORB/topics/mission_result.h>
#include <uORB/topics/satellite_info.h>
#include <uORB/topics/vtol_vehicle_status.h>
#include <uORB/topics/vehicle_local_position.h>
#include <uORB/topics/manual_control_setpoint.h>
#include <uORB/topics/landing_gear.h>
#include <uORB/topics/vehicle_local_position_setpoint.h>
#include <uORB/topics/home_position.h>
#include <uORB/topics/sensor_preflight.h>
#include <uORB/topics/iridiumsbd_status.h>
#include <uORB/topics/ping.h>
#include <uORB/topics/tune_control.h>
#include <uORB/topics/sensor_gyro.h>
#include <uORB/topics/commander_state.h>
#include <uORB/topics/trajectory_waypoint.h>
#include <uORB/topics/collision_constraints.h>
#include <uORB/topics/vehicle_acceleration.h>
#include <uORB/topics/landing_target_innovations.h>
#include <uORB/topics/position_controller_landing_status.h>
#include <uORB/topics/distance_sensor.h>
#include <uORB/topics/position_controller_status.h>
#include <uORB/topics/offboard_control_mode.h>
#include <uORB/topics/mavlink_log.h>
#include <uORB/topics/actuator_direct.h>
#include <uORB/topics/power_monitor.h>
#include <uORB/topics/input_rc.h>
#include <uORB/topics/vehicle_roi.h>
#include <uORB/topics/sensor_mag.h>
#include <uORB/topics/qshell_retval.h>


void listener_generated(char * topic_name, int topic_instance, int topic_rate, int num_msgs) {


	unsigned topic_interval = 0;
	if (topic_rate != 0) {
		topic_interval = 1000 / topic_rate;
	}

	if (strcmp(topic_name,"tecs_status") == 0) {
		listener(listener_print_topic<tecs_status_s>, ORB_ID(tecs_status), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"vehicle_attitude") == 0) {
		listener(listener_print_topic<vehicle_attitude_s>, ORB_ID(vehicle_attitude), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"vehicle_attitude_groundtruth") == 0) {
		listener(listener_print_topic<vehicle_attitude_s>, ORB_ID(vehicle_attitude_groundtruth), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"vehicle_vision_attitude") == 0) {
		listener(listener_print_topic<vehicle_attitude_s>, ORB_ID(vehicle_vision_attitude), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"input_rc") == 0) {
		listener(listener_print_topic<input_rc_s>, ORB_ID(input_rc), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"wind_estimate") == 0) {
		listener(listener_print_topic<wind_estimate_s>, ORB_ID(wind_estimate), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"vehicle_angular_velocity") == 0) {
		listener(listener_print_topic<vehicle_angular_velocity_s>, ORB_ID(vehicle_angular_velocity), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"vehicle_angular_velocity_groundtruth") == 0) {
		listener(listener_print_topic<vehicle_angular_velocity_s>, ORB_ID(vehicle_angular_velocity_groundtruth), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"parameter_update") == 0) {
		listener(listener_print_topic<parameter_update_s>, ORB_ID(parameter_update), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"ekf2_innovations") == 0) {
		listener(listener_print_topic<ekf2_innovations_s>, ORB_ID(ekf2_innovations), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"airspeed_validated") == 0) {
		listener(listener_print_topic<airspeed_validated_s>, ORB_ID(airspeed_validated), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"vehicle_magnetometer") == 0) {
		listener(listener_print_topic<vehicle_magnetometer_s>, ORB_ID(vehicle_magnetometer), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"vehicle_acceleration") == 0) {
		listener(listener_print_topic<vehicle_acceleration_s>, ORB_ID(vehicle_acceleration), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"actuator_direct") == 0) {
		listener(listener_print_topic<actuator_direct_s>, ORB_ID(actuator_direct), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"actuator_controls") == 0) {
		listener(listener_print_topic<actuator_controls_s>, ORB_ID(actuator_controls), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"actuator_controls_0") == 0) {
		listener(listener_print_topic<actuator_controls_s>, ORB_ID(actuator_controls_0), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"actuator_controls_1") == 0) {
		listener(listener_print_topic<actuator_controls_s>, ORB_ID(actuator_controls_1), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"actuator_controls_2") == 0) {
		listener(listener_print_topic<actuator_controls_s>, ORB_ID(actuator_controls_2), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"actuator_controls_3") == 0) {
		listener(listener_print_topic<actuator_controls_s>, ORB_ID(actuator_controls_3), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"actuator_controls_virtual_fw") == 0) {
		listener(listener_print_topic<actuator_controls_s>, ORB_ID(actuator_controls_virtual_fw), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"actuator_controls_virtual_mc") == 0) {
		listener(listener_print_topic<actuator_controls_s>, ORB_ID(actuator_controls_virtual_mc), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"ping") == 0) {
		listener(listener_print_topic<ping_s>, ORB_ID(ping), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"position_controller_status") == 0) {
		listener(listener_print_topic<position_controller_status_s>, ORB_ID(position_controller_status), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"vehicle_control_mode") == 0) {
		listener(listener_print_topic<vehicle_control_mode_s>, ORB_ID(vehicle_control_mode), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"offboard_control_mode") == 0) {
		listener(listener_print_topic<offboard_control_mode_s>, ORB_ID(offboard_control_mode), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"vehicle_attitude_setpoint") == 0) {
		listener(listener_print_topic<vehicle_attitude_setpoint_s>, ORB_ID(vehicle_attitude_setpoint), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"mc_virtual_attitude_setpoint") == 0) {
		listener(listener_print_topic<vehicle_attitude_setpoint_s>, ORB_ID(mc_virtual_attitude_setpoint), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"fw_virtual_attitude_setpoint") == 0) {
		listener(listener_print_topic<vehicle_attitude_setpoint_s>, ORB_ID(fw_virtual_attitude_setpoint), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"landing_gear") == 0) {
		listener(listener_print_topic<landing_gear_s>, ORB_ID(landing_gear), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"landing_target_pose") == 0) {
		listener(listener_print_topic<landing_target_pose_s>, ORB_ID(landing_target_pose), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"task_stack_info") == 0) {
		listener(listener_print_topic<task_stack_info_s>, ORB_ID(task_stack_info), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"cpuload") == 0) {
		listener(listener_print_topic<cpuload_s>, ORB_ID(cpuload), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"led_control") == 0) {
		listener(listener_print_topic<led_control_s>, ORB_ID(led_control), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"sensor_correction") == 0) {
		listener(listener_print_topic<sensor_correction_s>, ORB_ID(sensor_correction), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"collision_constraints") == 0) {
		listener(listener_print_topic<collision_constraints_s>, ORB_ID(collision_constraints), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"optical_flow") == 0) {
		listener(listener_print_topic<optical_flow_s>, ORB_ID(optical_flow), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"sensor_bias") == 0) {
		listener(listener_print_topic<sensor_bias_s>, ORB_ID(sensor_bias), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"vehicle_status_flags") == 0) {
		listener(listener_print_topic<vehicle_status_flags_s>, ORB_ID(vehicle_status_flags), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"ekf_gps_drift") == 0) {
		listener(listener_print_topic<ekf_gps_drift_s>, ORB_ID(ekf_gps_drift), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"sensor_preflight") == 0) {
		listener(listener_print_topic<sensor_preflight_s>, ORB_ID(sensor_preflight), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"trajectory_waypoint") == 0) {
		listener(listener_print_topic<trajectory_waypoint_s>, ORB_ID(trajectory_waypoint), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"telemetry_status") == 0) {
		listener(listener_print_topic<telemetry_status_s>, ORB_ID(telemetry_status), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"differential_pressure") == 0) {
		listener(listener_print_topic<differential_pressure_s>, ORB_ID(differential_pressure), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"test_motor") == 0) {
		listener(listener_print_topic<test_motor_s>, ORB_ID(test_motor), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"actuator_armed") == 0) {
		listener(listener_print_topic<actuator_armed_s>, ORB_ID(actuator_armed), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"vehicle_land_detected") == 0) {
		listener(listener_print_topic<vehicle_land_detected_s>, ORB_ID(vehicle_land_detected), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"vehicle_global_position") == 0) {
		listener(listener_print_topic<vehicle_global_position_s>, ORB_ID(vehicle_global_position), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"vehicle_global_position_groundtruth") == 0) {
		listener(listener_print_topic<vehicle_global_position_s>, ORB_ID(vehicle_global_position_groundtruth), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"multirotor_motor_limits") == 0) {
		listener(listener_print_topic<multirotor_motor_limits_s>, ORB_ID(multirotor_motor_limits), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"distance_sensor") == 0) {
		listener(listener_print_topic<distance_sensor_s>, ORB_ID(distance_sensor), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"subsystem_info") == 0) {
		listener(listener_print_topic<subsystem_info_s>, ORB_ID(subsystem_info), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"sensor_selection") == 0) {
		listener(listener_print_topic<sensor_selection_s>, ORB_ID(sensor_selection), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"esc_status") == 0) {
		listener(listener_print_topic<esc_status_s>, ORB_ID(esc_status), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"iridiumsbd_status") == 0) {
		listener(listener_print_topic<iridiumsbd_status_s>, ORB_ID(iridiumsbd_status), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"log_message") == 0) {
		listener(listener_print_topic<log_message_s>, ORB_ID(log_message), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"landing_target_innovations") == 0) {
		listener(listener_print_topic<landing_target_innovations_s>, ORB_ID(landing_target_innovations), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"pwm_input") == 0) {
		listener(listener_print_topic<pwm_input_s>, ORB_ID(pwm_input), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"vehicle_trajectory_waypoint") == 0) {
		listener(listener_print_topic<vehicle_trajectory_waypoint_s>, ORB_ID(vehicle_trajectory_waypoint), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"vehicle_trajectory_waypoint_desired") == 0) {
		listener(listener_print_topic<vehicle_trajectory_waypoint_s>, ORB_ID(vehicle_trajectory_waypoint_desired), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"orbit_status") == 0) {
		listener(listener_print_topic<orbit_status_s>, ORB_ID(orbit_status), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"sensor_gyro") == 0) {
		listener(listener_print_topic<sensor_gyro_s>, ORB_ID(sensor_gyro), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"vehicle_roi") == 0) {
		listener(listener_print_topic<vehicle_roi_s>, ORB_ID(vehicle_roi), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"vehicle_gps_position") == 0) {
		listener(listener_print_topic<vehicle_gps_position_s>, ORB_ID(vehicle_gps_position), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"vehicle_local_position_setpoint") == 0) {
		listener(listener_print_topic<vehicle_local_position_setpoint_s>, ORB_ID(vehicle_local_position_setpoint), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"trajectory_setpoint") == 0) {
		listener(listener_print_topic<vehicle_local_position_setpoint_s>, ORB_ID(trajectory_setpoint), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"safety") == 0) {
		listener(listener_print_topic<safety_s>, ORB_ID(safety), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"sensor_gyro_control") == 0) {
		listener(listener_print_topic<sensor_gyro_control_s>, ORB_ID(sensor_gyro_control), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"vehicle_air_data") == 0) {
		listener(listener_print_topic<vehicle_air_data_s>, ORB_ID(vehicle_air_data), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"position_setpoint") == 0) {
		listener(listener_print_topic<position_setpoint_s>, ORB_ID(position_setpoint), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"follow_target") == 0) {
		listener(listener_print_topic<follow_target_s>, ORB_ID(follow_target), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"satellite_info") == 0) {
		listener(listener_print_topic<satellite_info_s>, ORB_ID(satellite_info), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"uavcan_parameter_request") == 0) {
		listener(listener_print_topic<uavcan_parameter_request_s>, ORB_ID(uavcan_parameter_request), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"power_button_state") == 0) {
		listener(listener_print_topic<power_button_state_s>, ORB_ID(power_button_state), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"rc_parameter_map") == 0) {
		listener(listener_print_topic<rc_parameter_map_s>, ORB_ID(rc_parameter_map), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"debug_vect") == 0) {
		listener(listener_print_topic<debug_vect_s>, ORB_ID(debug_vect), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"sensor_baro") == 0) {
		listener(listener_print_topic<sensor_baro_s>, ORB_ID(sensor_baro), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"wheel_encoders") == 0) {
		listener(listener_print_topic<wheel_encoders_s>, ORB_ID(wheel_encoders), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"debug_value") == 0) {
		listener(listener_print_topic<debug_value_s>, ORB_ID(debug_value), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"sensor_accel") == 0) {
		listener(listener_print_topic<sensor_accel_s>, ORB_ID(sensor_accel), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"sensor_mag") == 0) {
		listener(listener_print_topic<sensor_mag_s>, ORB_ID(sensor_mag), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"transponder_report") == 0) {
		listener(listener_print_topic<transponder_report_s>, ORB_ID(transponder_report), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"actuator_outputs") == 0) {
		listener(listener_print_topic<actuator_outputs_s>, ORB_ID(actuator_outputs), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"mavlink_log") == 0) {
		listener(listener_print_topic<mavlink_log_s>, ORB_ID(mavlink_log), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"mount_orientation") == 0) {
		listener(listener_print_topic<mount_orientation_s>, ORB_ID(mount_orientation), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"rate_ctrl_status") == 0) {
		listener(listener_print_topic<rate_ctrl_status_s>, ORB_ID(rate_ctrl_status), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"collision_report") == 0) {
		listener(listener_print_topic<collision_report_s>, ORB_ID(collision_report), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"vehicle_command") == 0) {
		listener(listener_print_topic<vehicle_command_s>, ORB_ID(vehicle_command), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"radio_status") == 0) {
		listener(listener_print_topic<radio_status_s>, ORB_ID(radio_status), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"sensor_combined") == 0) {
		listener(listener_print_topic<sensor_combined_s>, ORB_ID(sensor_combined), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"estimator_status") == 0) {
		listener(listener_print_topic<estimator_status_s>, ORB_ID(estimator_status), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"vehicle_odometry") == 0) {
		listener(listener_print_topic<vehicle_odometry_s>, ORB_ID(vehicle_odometry), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"vehicle_mocap_odometry") == 0) {
		listener(listener_print_topic<vehicle_odometry_s>, ORB_ID(vehicle_mocap_odometry), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"vehicle_visual_odometry") == 0) {
		listener(listener_print_topic<vehicle_odometry_s>, ORB_ID(vehicle_visual_odometry), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"vehicle_visual_odometry_aligned") == 0) {
		listener(listener_print_topic<vehicle_odometry_s>, ORB_ID(vehicle_visual_odometry_aligned), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"qshell_retval") == 0) {
		listener(listener_print_topic<qshell_retval_s>, ORB_ID(qshell_retval), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"tune_control") == 0) {
		listener(listener_print_topic<tune_control_s>, ORB_ID(tune_control), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"camera_trigger") == 0) {
		listener(listener_print_topic<camera_trigger_s>, ORB_ID(camera_trigger), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"camera_trigger_secondary") == 0) {
		listener(listener_print_topic<camera_trigger_s>, ORB_ID(camera_trigger_secondary), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"adc_report") == 0) {
		listener(listener_print_topic<adc_report_s>, ORB_ID(adc_report), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"irlock_report") == 0) {
		listener(listener_print_topic<irlock_report_s>, ORB_ID(irlock_report), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"vehicle_local_position") == 0) {
		listener(listener_print_topic<vehicle_local_position_s>, ORB_ID(vehicle_local_position), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"vehicle_local_position_groundtruth") == 0) {
		listener(listener_print_topic<vehicle_local_position_s>, ORB_ID(vehicle_local_position_groundtruth), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"rc_channels") == 0) {
		listener(listener_print_topic<rc_channels_s>, ORB_ID(rc_channels), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"geofence_result") == 0) {
		listener(listener_print_topic<geofence_result_s>, ORB_ID(geofence_result), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"servorail_status") == 0) {
		listener(listener_print_topic<servorail_status_s>, ORB_ID(servorail_status), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"manual_control_setpoint") == 0) {
		listener(listener_print_topic<manual_control_setpoint_s>, ORB_ID(manual_control_setpoint), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"timesync_status") == 0) {
		listener(listener_print_topic<timesync_status_s>, ORB_ID(timesync_status), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"home_position") == 0) {
		listener(listener_print_topic<home_position_s>, ORB_ID(home_position), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"vehicle_rates_setpoint") == 0) {
		listener(listener_print_topic<vehicle_rates_setpoint_s>, ORB_ID(vehicle_rates_setpoint), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"vehicle_command_ack") == 0) {
		listener(listener_print_topic<vehicle_command_ack_s>, ORB_ID(vehicle_command_ack), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"obstacle_distance") == 0) {
		listener(listener_print_topic<obstacle_distance_s>, ORB_ID(obstacle_distance), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"obstacle_distance_fused") == 0) {
		listener(listener_print_topic<obstacle_distance_s>, ORB_ID(obstacle_distance_fused), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"debug_key_value") == 0) {
		listener(listener_print_topic<debug_key_value_s>, ORB_ID(debug_key_value), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"commander_state") == 0) {
		listener(listener_print_topic<commander_state_s>, ORB_ID(commander_state), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"vehicle_constraints") == 0) {
		listener(listener_print_topic<vehicle_constraints_s>, ORB_ID(vehicle_constraints), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"airspeed") == 0) {
		listener(listener_print_topic<airspeed_s>, ORB_ID(airspeed), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"position_setpoint_triplet") == 0) {
		listener(listener_print_topic<position_setpoint_triplet_s>, ORB_ID(position_setpoint_triplet), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"vehicle_status") == 0) {
		listener(listener_print_topic<vehicle_status_s>, ORB_ID(vehicle_status), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"ekf_gps_position") == 0) {
		listener(listener_print_topic<ekf_gps_position_s>, ORB_ID(ekf_gps_position), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"position_controller_landing_status") == 0) {
		listener(listener_print_topic<position_controller_landing_status_s>, ORB_ID(position_controller_landing_status), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"battery_status") == 0) {
		listener(listener_print_topic<battery_status_s>, ORB_ID(battery_status), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"mission_result") == 0) {
		listener(listener_print_topic<mission_result_s>, ORB_ID(mission_result), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"vtol_vehicle_status") == 0) {
		listener(listener_print_topic<vtol_vehicle_status_s>, ORB_ID(vtol_vehicle_status), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"power_monitor") == 0) {
		listener(listener_print_topic<power_monitor_s>, ORB_ID(power_monitor), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"system_power") == 0) {
		listener(listener_print_topic<system_power_s>, ORB_ID(system_power), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"uavcan_parameter_value") == 0) {
		listener(listener_print_topic<uavcan_parameter_value_s>, ORB_ID(uavcan_parameter_value), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"debug_array") == 0) {
		listener(listener_print_topic<debug_array_s>, ORB_ID(debug_array), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"ekf2_timestamps") == 0) {
		listener(listener_print_topic<ekf2_timestamps_s>, ORB_ID(ekf2_timestamps), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"camera_capture") == 0) {
		listener(listener_print_topic<camera_capture_s>, ORB_ID(camera_capture), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"mission") == 0) {
		listener(listener_print_topic<mission_s>, ORB_ID(mission), num_msgs, topic_instance, topic_interval);
	} else if (strcmp(topic_name,"esc_report") == 0) {
		listener(listener_print_topic<esc_report_s>, ORB_ID(esc_report), num_msgs, topic_instance, topic_interval);
	} else {
		 PX4_INFO_RAW(" Topic did not match any known topics\n");
	}
}

