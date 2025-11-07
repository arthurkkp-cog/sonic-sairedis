#pragma once

extern "C" {
#include "sai.h"
}

namespace saivs
{
    constexpr const char* SAI_KEY_VS_SWITCH_TYPE = "SAI_VS_SWITCH_TYPE";
    constexpr const char* SAI_KEY_VS_SAI_SWITCH_TYPE = "SAI_VS_SAI_SWITCH_TYPE";

    constexpr const char* SAI_VALUE_SAI_SWITCH_TYPE_NPU = "SAI_SWITCH_TYPE_NPU";
    constexpr const char* SAI_VALUE_SAI_SWITCH_TYPE_PHY = "SAI_SWITCH_TYPE_PHY";

    /**
     * @brief SAI_KEY_VS_INTERFACE_LANE_MAP_FILE
     *
     * If specified in profile.ini it should point to eth interface to lane map.
     *
     * Example:
     * eth0:1,2,3,4
     * eth1:5,6,7,8
     *
     * TODO must support hardware info for multiple switches
     */
    constexpr const char* SAI_KEY_VS_INTERFACE_LANE_MAP_FILE = "SAI_VS_INTERFACE_LANE_MAP_FILE";

    /**
     * @brief SAI_KEY_VS_RESOURCE_LIMITER_FILE
     *
     * File with resource limitations for object type create.
     *
     * Example:
     * SAI_OBJECT_TYPE_ACL_TABLE=3
     */
    constexpr const char* SAI_KEY_VS_RESOURCE_LIMITER_FILE = "SAI_VS_RESOURCE_LIMITER_FILE";

    /**
     * @brief SAI_KEY_VS_INTERFACE_FABRIC_LANE_MAP_FILE
     *
     * If specified in profile.ini it should point to fabric port to lane map.
     *
     * Example:
     * fabric0:1
     * fabric1:2
     *
     */
    constexpr const char* SAI_KEY_VS_INTERFACE_FABRIC_LANE_MAP_FILE = "SAI_VS_INTERFACE_FABRIC_LANE_MAP_FILE";

    /**
     * @brief SAI_KEY_VS_HOSTIF_USE_TAP_DEVICE
     *
     * Bool flag, (true/false). If set to true, then during create host interface
     * sai object also tap device will be created and mac address will be assigned.
     * For this operation root privileges will be required.
     *
     * By default this flag is set to false.
     */
    constexpr const char* SAI_KEY_VS_HOSTIF_USE_TAP_DEVICE = "SAI_VS_HOSTIF_USE_TAP_DEVICE";

    /**
     * @brief SAI_KEY_VS_BFD_OFFLOAD_SUPPORTED
     *
     * Bool flag, (true/false). If set to false, then platform will be configured
     * to return SAI_BFD_SESSION_OFFLOAD_TYPE_NONE for
     * SAI_SWITCH_ATTR_SUPPORTED_IPV4_BFD_SESSION_OFFLOAD_TYPE and
     * SAI_SWITCH_ATTR_SUPPORTED_IPV6_BFD_SESSION_OFFLOAD_TYPE calls; otherwise
     * SAI_BFD_SESSION_OFFLOAD_TYPE_FULL will be set.
     *
     * By default this flag is set to true.
     */
    constexpr const char* SAI_KEY_VS_BFD_OFFLOAD_SUPPORTED = "SAI_VS_BFD_OFFLOAD_SUPPORTED";

    /**
     * @brief SAI_KEY_VS_USE_CONFIGURED_SPEED_AS_OPER_SPEED
     *
     * Bool flag, (true/false). If set to true, SAI_PORT_ATTR_OPER_SPEED returns
     * the SAI_PORT_ATTR_SPEED instead of querying the speed of veth
     *
     * By default this flag is set to false.
     */
    constexpr const char* SAI_KEY_VS_USE_CONFIGURED_SPEED_AS_OPER_SPEED = "SAI_VS_USE_CONFIGURED_SPEED_AS_OPER_SPEED";

    /**
     * @brief SAI_KEY_VS_CORE_PORT_INDEX_MAP_FILE
     *
     * For VOQ systems if specified in profile.ini it should point to eth interface to
     * core and core port index map as port name:core_index,core_port_index
     *
     * Example:
     * eth1:0,1
     * eth17:1,1
     *
     */
    constexpr const char* SAI_KEY_VS_CORE_PORT_INDEX_MAP_FILE = "SAI_VS_CORE_PORT_INDEX_MAP_FILE";

    /**
     * @brief Context config.
     *
     * Optional. Should point to a context_config.json which will contain how many
     * contexts (syncd) we have in the system globally and each context how many
     * switches it manages. Only one of this contexts will be used in VS.
     */
    constexpr const char* SAI_KEY_VS_CONTEXT_CONFIG = "SAI_VS_CONTEXT_CONFIG";

    /**
     * @brief Global context.
     *
     * Optional. Should point to GUID value which is provided in context_config.json
     * by SAI_KEY_VS_CONTEXT_CONFIG. Default is 0.
     */
    constexpr const char* SAI_KEY_VS_GLOBAL_CONTEXT = "SAI_VS_GLOBAL_CONTEXT";

    constexpr const char* SAI_VALUE_VS_SWITCH_TYPE_BCM56850 = "SAI_VS_SWITCH_TYPE_BCM56850";
    constexpr const char* SAI_VALUE_VS_SWITCH_TYPE_BCM56971B0 = "SAI_VS_SWITCH_TYPE_BCM56971B0";
    constexpr const char* SAI_VALUE_VS_SWITCH_TYPE_BCM81724 = "SAI_VS_SWITCH_TYPE_BCM81724";
    constexpr const char* SAI_VALUE_VS_SWITCH_TYPE_MLNX2700 = "SAI_VS_SWITCH_TYPE_MLNX2700";
    constexpr const char* SAI_VALUE_VS_SWITCH_TYPE_NVDA_MBF2H536C = "SAI_VS_SWITCH_TYPE_NVDA_MBF2H536C";
    constexpr const char* SAI_VALUE_VS_SWITCH_TYPE_DPU_SIMU_2P = "SAI_VS_SWITCH_TYPE_DPU_SIMU_2P";
    constexpr const char* SAI_VALUE_VS_SWITCH_TYPE_VPP = "SAI_VS_SWITCH_TYPE_VPP";

    /*
     * Values for SAI_KEY_BOOT_TYPE (defined in saiswitch.h)
     */
    constexpr const char* SAI_VALUE_VS_BOOT_TYPE_COLD = "0";
    constexpr const char* SAI_VALUE_VS_BOOT_TYPE_WARM = "1";
    constexpr const char* SAI_VALUE_VS_BOOT_TYPE_FAST = "2";

    /**
     * @brief SAI_VS_UNITTEST_CHANNEL
     *
     * Notification channel for redis database.
     */
    constexpr const char* SAI_VS_UNITTEST_CHANNEL = "SAI_VS_UNITTEST_CHANNEL";

    /**
     * @brief SAI_VS_UNITTEST_SET_RO_OP
     *
     * Notification operation for "SET" READ_ONLY attribute.
     */
    constexpr const char* SAI_VS_UNITTEST_SET_RO_OP = "set_ro";

    /**
     * @brief SAI_VS_UNITTEST_SET_STATS
     *
     * Notification operation for "SET" stats on specific object.
     */
    constexpr const char* SAI_VS_UNITTEST_SET_STATS_OP = "set_stats";

    /**
     * @brief SAI_VS_UNITTEST_ENABLE
     *
     * Notification operation for enabling unittests.
     */
    constexpr const char* SAI_VS_UNITTEST_ENABLE_UNITTESTS = "enable_unittests";
}

typedef enum _sai_vs_switch_attr_t
{
    /**
     * @brief Will enable metadata unittests.
     *
     * @type bool
     * @flags CREATE_AND_SET
     * @default false
     */
    SAI_VS_SWITCH_ATTR_META_ENABLE_UNITTESTS = SAI_SWITCH_ATTR_CUSTOM_RANGE_START,

    /**
     * @brief Will allow to set value that is read only.
     *
     * Unittests must be enabled.
     *
     * Value is the attribute to be allowed.
     *
     * @type sai_int32_t
     * @flags CREATE_AND_SET
     */
    SAI_VS_SWITCH_ATTR_META_ALLOW_READ_ONLY_ONCE,

} sau_vs_switch_attr_t;
