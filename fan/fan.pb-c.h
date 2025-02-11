/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: fan.proto */

#ifndef PROTOBUF_C_fan_2eproto__INCLUDED
#define PROTOBUF_C_fan_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Iot__Service__Fan__Properties Iot__Service__Fan__Properties;


/* --- enums --- */

typedef enum _Iot__Service__Fan__FanMode {
  IOT__SERVICE__FAN__FAN_MODE__FAN_NORMAL = 0,
  IOT__SERVICE__FAN__FAN_MODE__FAN_NATURAL = 1,
  IOT__SERVICE__FAN__FAN_MODE__FAN_SLEEP = 2,
  IOT__SERVICE__FAN__FAN_MODE__FAN_COMFORTABLE = 3,
  IOT__SERVICE__FAN__FAN_MODE__FAN_HUMAN_FEELING = 4,
  IOT__SERVICE__FAN__FAN_MODE__FAN_QUIET = 5,
  IOT__SERVICE__FAN__FAN_MODE__FAN_BABY = 6
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(IOT__SERVICE__FAN__FAN_MODE)
} Iot__Service__Fan__FanMode;
typedef enum _Iot__Service__Fan__HorizontalDirection {
  IOT__SERVICE__FAN__HORIZONTAL_DIRECTION__HL_STOP = 0,
  IOT__SERVICE__FAN__HORIZONTAL_DIRECTION__HL_LEFTRIGHT = 1,
  IOT__SERVICE__FAN__HORIZONTAL_DIRECTION__HL_AUTO = 2,
  IOT__SERVICE__FAN__HORIZONTAL_DIRECTION__HL_ONE = 3,
  IOT__SERVICE__FAN__HORIZONTAL_DIRECTION__HL_TWO = 4,
  IOT__SERVICE__FAN__HORIZONTAL_DIRECTION__HL_THREE = 5,
  IOT__SERVICE__FAN__HORIZONTAL_DIRECTION__HL_FOUR = 6,
  IOT__SERVICE__FAN__HORIZONTAL_DIRECTION__HL_FIVE = 7,
  IOT__SERVICE__FAN__HORIZONTAL_DIRECTION__HL_SIX = 8
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(IOT__SERVICE__FAN__HORIZONTAL_DIRECTION)
} Iot__Service__Fan__HorizontalDirection;
typedef enum _Iot__Service__Fan__VerticalDirection {
  IOT__SERVICE__FAN__VERTICAL_DIRECTION__VL_STOP = 0,
  IOT__SERVICE__FAN__VERTICAL_DIRECTION__VL_UPDOWN = 1,
  IOT__SERVICE__FAN__VERTICAL_DIRECTION__VL_AUTO = 2,
  IOT__SERVICE__FAN__VERTICAL_DIRECTION__VL_ONE = 3,
  IOT__SERVICE__FAN__VERTICAL_DIRECTION__VL_TWO = 4,
  IOT__SERVICE__FAN__VERTICAL_DIRECTION__VL_THREE = 5,
  IOT__SERVICE__FAN__VERTICAL_DIRECTION__VL_FOUR = 6,
  IOT__SERVICE__FAN__VERTICAL_DIRECTION__VL_FIVE = 7,
  IOT__SERVICE__FAN__VERTICAL_DIRECTION__VL_SIX = 8
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(IOT__SERVICE__FAN__VERTICAL_DIRECTION)
} Iot__Service__Fan__VerticalDirection;
typedef enum _Iot__Service__Fan__SwingDirection {
  IOT__SERVICE__FAN__SWING_DIRECTION__AUTO = 0,
  /*
   *8字摇头
   */
  IOT__SERVICE__FAN__SWING_DIRECTION__E_DIRECTION = 1,
  /*
   *W字摇头
   */
  IOT__SERVICE__FAN__SWING_DIRECTION__W_DIRECTION = 2,
  /*
   *左右摇头
   */
  IOT__SERVICE__FAN__SWING_DIRECTION__LR_DIRECTION = 3,
  /*
   *上下摇头
   */
  IOT__SERVICE__FAN__SWING_DIRECTION__UD_DIRECTION = 4,
  /*
   *上下左右摇头
   */
  IOT__SERVICE__FAN__SWING_DIRECTION__LRUD_DIRECTION = 5
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(IOT__SERVICE__FAN__SWING_DIRECTION)
} Iot__Service__Fan__SwingDirection;
typedef enum _Iot__Service__Fan__SwingAngle {
  /*
   *不设定该值
   */
  IOT__SERVICE__FAN__SWING_ANGLE__NONE = 0,
  IOT__SERVICE__FAN__SWING_ANGLE__ANGLE1 = 1,
  IOT__SERVICE__FAN__SWING_ANGLE__ANGLE2 = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(IOT__SERVICE__FAN__SWING_ANGLE)
} Iot__Service__Fan__SwingAngle;

/* --- messages --- */

struct  _Iot__Service__Fan__Properties
{
  ProtobufCMessage base;
  protobuf_c_boolean power;
  Iot__Service__Fan__FanMode fanmode;
  uint32_t windspeed;
  Iot__Service__Fan__HorizontalDirection horizontaldirection;
  Iot__Service__Fan__VerticalDirection verticaldirection;
  Iot__Service__Fan__SwingDirection swingdirection;
  protobuf_c_boolean childlockenabled;
  protobuf_c_boolean preventstraightwind;
  protobuf_c_boolean childpreventcoldwind;
  protobuf_c_boolean upswingwind;
  protobuf_c_boolean downswingwind;
  protobuf_c_boolean upnosensewind;
  protobuf_c_boolean downnosensewind;
  protobuf_c_boolean nosensewind;
  protobuf_c_boolean tempwindenabled;
  protobuf_c_boolean screendisplayenabled;
  uint32_t appointmentpoweron;
  protobuf_c_boolean mute;
  protobuf_c_boolean autowindenabled;
  protobuf_c_boolean powerstatus;
  Iot__Service__Fan__SwingAngle swingangle;
  protobuf_c_boolean swingenabled;
  protobuf_c_boolean lrdiyswingenabled;
  uint32_t lrdiyuppercent;
  uint32_t lrdiydownpercent;
  protobuf_c_boolean uddiyswingenabled;
  uint32_t uddiyuppercent;
  uint32_t uddiydownpercent;
  protobuf_c_boolean airdry;
  protobuf_c_boolean anionenabled;
  protobuf_c_boolean waterionsenabled;
  uint32_t appointmentpoweroff;
};
#define IOT__SERVICE__FAN__PROPERTIES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__fan__properties__descriptor) \
    , 0, IOT__SERVICE__FAN__FAN_MODE__FAN_NORMAL, 0, IOT__SERVICE__FAN__HORIZONTAL_DIRECTION__HL_STOP, IOT__SERVICE__FAN__VERTICAL_DIRECTION__VL_STOP, IOT__SERVICE__FAN__SWING_DIRECTION__AUTO, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, IOT__SERVICE__FAN__SWING_ANGLE__NONE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }


/* Iot__Service__Fan__Properties methods */
void   iot__service__fan__properties__init
                     (Iot__Service__Fan__Properties         *message);
size_t iot__service__fan__properties__get_packed_size
                     (const Iot__Service__Fan__Properties   *message);
size_t iot__service__fan__properties__pack
                     (const Iot__Service__Fan__Properties   *message,
                      uint8_t             *out);
size_t iot__service__fan__properties__pack_to_buffer
                     (const Iot__Service__Fan__Properties   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__Fan__Properties *
       iot__service__fan__properties__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__fan__properties__free_unpacked
                     (Iot__Service__Fan__Properties *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Iot__Service__Fan__Properties_Closure)
                 (const Iot__Service__Fan__Properties *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    iot__service__fan__fan_mode__descriptor;
extern const ProtobufCEnumDescriptor    iot__service__fan__horizontal_direction__descriptor;
extern const ProtobufCEnumDescriptor    iot__service__fan__vertical_direction__descriptor;
extern const ProtobufCEnumDescriptor    iot__service__fan__swing_direction__descriptor;
extern const ProtobufCEnumDescriptor    iot__service__fan__swing_angle__descriptor;
extern const ProtobufCMessageDescriptor iot__service__fan__properties__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_fan_2eproto__INCLUDED */
