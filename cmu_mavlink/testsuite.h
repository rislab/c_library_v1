/** @file
 *    @brief MAVLink comm protocol testsuite generated from cmu_mavlink.xml
 *    @see http://qgroundcontrol.org/mavlink/
 */
#pragma once
#ifndef CMU_MAVLINK_TESTSUITE_H
#define CMU_MAVLINK_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_cmu_mavlink(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_common(system_id, component_id, last_msg);
    mavlink_test_cmu_mavlink(system_id, component_id, last_msg);
}
#endif

#include "../common/testsuite.h"


static void mavlink_test_image_triggered_imu(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_IMAGE_TRIGGERED_IMU >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_image_triggered_imu_t packet_in = {
        93372036854775807ULL,93372036854776311ULL,93372036854776815ULL,185.0,213.0,241.0,269.0,297.0,325.0,353.0,381.0,409.0,185
    };
    mavlink_image_triggered_imu_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp = packet_in.timestamp;
        packet1.trigger_t = packet_in.trigger_t;
        packet1.trigger_seq = packet_in.trigger_seq;
        packet1.xacc = packet_in.xacc;
        packet1.yacc = packet_in.yacc;
        packet1.zacc = packet_in.zacc;
        packet1.xgyro = packet_in.xgyro;
        packet1.ygyro = packet_in.ygyro;
        packet1.zgyro = packet_in.zgyro;
        packet1.xmag = packet_in.xmag;
        packet1.ymag = packet_in.ymag;
        packet1.zmag = packet_in.zmag;
        packet1.trigger_id = packet_in.trigger_id;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_IMAGE_TRIGGERED_IMU_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_IMAGE_TRIGGERED_IMU_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_image_triggered_imu_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_image_triggered_imu_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_image_triggered_imu_pack(system_id, component_id, &msg , packet1.timestamp , packet1.xacc , packet1.yacc , packet1.zacc , packet1.xgyro , packet1.ygyro , packet1.zgyro , packet1.xmag , packet1.ymag , packet1.zmag , packet1.trigger_t , packet1.trigger_seq , packet1.trigger_id );
    mavlink_msg_image_triggered_imu_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_image_triggered_imu_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp , packet1.xacc , packet1.yacc , packet1.zacc , packet1.xgyro , packet1.ygyro , packet1.zgyro , packet1.xmag , packet1.ymag , packet1.zmag , packet1.trigger_t , packet1.trigger_seq , packet1.trigger_id );
    mavlink_msg_image_triggered_imu_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_image_triggered_imu_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_image_triggered_imu_send(MAVLINK_COMM_1 , packet1.timestamp , packet1.xacc , packet1.yacc , packet1.zacc , packet1.xgyro , packet1.ygyro , packet1.zgyro , packet1.xmag , packet1.ymag , packet1.zmag , packet1.trigger_t , packet1.trigger_seq , packet1.trigger_id );
    mavlink_msg_image_triggered_imu_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_l1_adaptive_debug(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_L1_ADAPTIVE_DEBUG >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_l1_adaptive_debug_t packet_in = {
        93372036854775807ULL,{ 73.0, 74.0, 75.0 },{ 157.0, 158.0, 159.0 },{ 241.0, 242.0, 243.0 },{ 325.0, 326.0, 327.0 },{ 409.0, 410.0, 411.0 },20771
    };
    mavlink_l1_adaptive_debug_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp = packet_in.timestamp;
        packet1.seq_id = packet_in.seq_id;
        
        mav_array_memcpy(packet1.avl_hat, packet_in.avl_hat, sizeof(float)*3);
        mav_array_memcpy(packet1.dst_hat, packet_in.dst_hat, sizeof(float)*3);
        mav_array_memcpy(packet1.ang_vel, packet_in.ang_vel, sizeof(float)*3);
        mav_array_memcpy(packet1.lpd, packet_in.lpd, sizeof(float)*3);
        mav_array_memcpy(packet1.rates, packet_in.rates, sizeof(float)*3);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_L1_ADAPTIVE_DEBUG_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_L1_ADAPTIVE_DEBUG_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_l1_adaptive_debug_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_l1_adaptive_debug_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_l1_adaptive_debug_pack(system_id, component_id, &msg , packet1.timestamp , packet1.seq_id , packet1.avl_hat , packet1.dst_hat , packet1.ang_vel , packet1.lpd , packet1.rates );
    mavlink_msg_l1_adaptive_debug_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_l1_adaptive_debug_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp , packet1.seq_id , packet1.avl_hat , packet1.dst_hat , packet1.ang_vel , packet1.lpd , packet1.rates );
    mavlink_msg_l1_adaptive_debug_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_l1_adaptive_debug_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_l1_adaptive_debug_send(MAVLINK_COMM_1 , packet1.timestamp , packet1.seq_id , packet1.avl_hat , packet1.dst_hat , packet1.ang_vel , packet1.lpd , packet1.rates );
    mavlink_msg_l1_adaptive_debug_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_odom_mocap(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ODOM_MOCAP >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_odom_mocap_t packet_in = {
        93372036854775807ULL,{ 73.0, 74.0, 75.0, 76.0 },185.0,213.0,241.0,269.0,297.0,325.0
    };
    mavlink_odom_mocap_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_usec = packet_in.time_usec;
        packet1.x = packet_in.x;
        packet1.y = packet_in.y;
        packet1.z = packet_in.z;
        packet1.vx = packet_in.vx;
        packet1.vy = packet_in.vy;
        packet1.vz = packet_in.vz;
        
        mav_array_memcpy(packet1.q, packet_in.q, sizeof(float)*4);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ODOM_MOCAP_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ODOM_MOCAP_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_odom_mocap_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_odom_mocap_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_odom_mocap_pack(system_id, component_id, &msg , packet1.time_usec , packet1.q , packet1.x , packet1.y , packet1.z , packet1.vx , packet1.vy , packet1.vz );
    mavlink_msg_odom_mocap_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_odom_mocap_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.q , packet1.x , packet1.y , packet1.z , packet1.vx , packet1.vy , packet1.vz );
    mavlink_msg_odom_mocap_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_odom_mocap_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_odom_mocap_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.q , packet1.x , packet1.y , packet1.z , packet1.vx , packet1.vy , packet1.vz );
    mavlink_msg_odom_mocap_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_rpm_output(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RPM_OUTPUT >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_rpm_output_t packet_in = {
        93372036854775807ULL,963497880,{ 101.0, 102.0, 103.0, 104.0, 105.0, 106.0, 107.0, 108.0, 109.0, 110.0, 111.0, 112.0, 113.0, 114.0, 115.0, 116.0 }
    };
    mavlink_rpm_output_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_usec = packet_in.time_usec;
        packet1.noutputs = packet_in.noutputs;
        
        mav_array_memcpy(packet1.output, packet_in.output, sizeof(float)*16);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RPM_OUTPUT_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RPM_OUTPUT_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rpm_output_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_rpm_output_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rpm_output_pack(system_id, component_id, &msg , packet1.time_usec , packet1.noutputs , packet1.output );
    mavlink_msg_rpm_output_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rpm_output_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.noutputs , packet1.output );
    mavlink_msg_rpm_output_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_rpm_output_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rpm_output_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.noutputs , packet1.output );
    mavlink_msg_rpm_output_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_cascaded_cmd(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_CASCADED_CMD >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_cascaded_cmd_t packet_in = {
        93372036854775807ULL,73.0,{ 101.0, 102.0, 103.0, 104.0 },{ 213.0, 214.0, 215.0 },{ 297.0, 298.0, 299.0 },161
    };
    mavlink_cascaded_cmd_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_usec = packet_in.time_usec;
        packet1.thrust = packet_in.thrust;
        packet1.target_system = packet_in.target_system;
        
        mav_array_memcpy(packet1.q, packet_in.q, sizeof(float)*4);
        mav_array_memcpy(packet1.ang_vel, packet_in.ang_vel, sizeof(float)*3);
        mav_array_memcpy(packet1.ang_acc, packet_in.ang_acc, sizeof(float)*3);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_CASCADED_CMD_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_CASCADED_CMD_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cascaded_cmd_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_cascaded_cmd_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cascaded_cmd_pack(system_id, component_id, &msg , packet1.time_usec , packet1.target_system , packet1.thrust , packet1.q , packet1.ang_vel , packet1.ang_acc );
    mavlink_msg_cascaded_cmd_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cascaded_cmd_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.target_system , packet1.thrust , packet1.q , packet1.ang_vel , packet1.ang_acc );
    mavlink_msg_cascaded_cmd_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_cascaded_cmd_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cascaded_cmd_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.target_system , packet1.thrust , packet1.q , packet1.ang_vel , packet1.ang_acc );
    mavlink_msg_cascaded_cmd_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_cascaded_cmd_gains(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_CASCADED_CMD_GAINS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_cascaded_cmd_gains_t packet_in = {
        93372036854775807ULL,{ 73.0, 74.0, 75.0 },{ 157.0, 158.0, 159.0 },101
    };
    mavlink_cascaded_cmd_gains_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_usec = packet_in.time_usec;
        packet1.target_system = packet_in.target_system;
        
        mav_array_memcpy(packet1.kR, packet_in.kR, sizeof(float)*3);
        mav_array_memcpy(packet1.kOm, packet_in.kOm, sizeof(float)*3);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_CASCADED_CMD_GAINS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_CASCADED_CMD_GAINS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cascaded_cmd_gains_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_cascaded_cmd_gains_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cascaded_cmd_gains_pack(system_id, component_id, &msg , packet1.time_usec , packet1.target_system , packet1.kR , packet1.kOm );
    mavlink_msg_cascaded_cmd_gains_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cascaded_cmd_gains_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.target_system , packet1.kR , packet1.kOm );
    mavlink_msg_cascaded_cmd_gains_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_cascaded_cmd_gains_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_cascaded_cmd_gains_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.target_system , packet1.kR , packet1.kOm );
    mavlink_msg_cascaded_cmd_gains_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_mocap_motor_state(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_MOCAP_MOTOR_STATE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_mocap_motor_state_t packet_in = {
        93372036854775807ULL,29,96
    };
    mavlink_mocap_motor_state_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_usec = packet_in.time_usec;
        packet1.target_system = packet_in.target_system;
        packet1.state = packet_in.state;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_MOCAP_MOTOR_STATE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_MOCAP_MOTOR_STATE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mocap_motor_state_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_mocap_motor_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mocap_motor_state_pack(system_id, component_id, &msg , packet1.time_usec , packet1.target_system , packet1.state );
    mavlink_msg_mocap_motor_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mocap_motor_state_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.target_system , packet1.state );
    mavlink_msg_mocap_motor_state_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_mocap_motor_state_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mocap_motor_state_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.target_system , packet1.state );
    mavlink_msg_mocap_motor_state_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_cmu_mavlink(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_image_triggered_imu(system_id, component_id, last_msg);
    mavlink_test_l1_adaptive_debug(system_id, component_id, last_msg);
    mavlink_test_odom_mocap(system_id, component_id, last_msg);
    mavlink_test_rpm_output(system_id, component_id, last_msg);
    mavlink_test_cascaded_cmd(system_id, component_id, last_msg);
    mavlink_test_cascaded_cmd_gains(system_id, component_id, last_msg);
    mavlink_test_mocap_motor_state(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // CMU_MAVLINK_TESTSUITE_H
