/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: light.proto */

#ifndef PROTOBUF_C_light_2eproto__INCLUDED
#define PROTOBUF_C_light_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "schema/common/common.pb-c.h"

typedef struct _Iot__Service__Light__RGB Iot__Service__Light__RGB;
typedef struct _Iot__Service__Light__ActionInLightLanguage Iot__Service__Light__ActionInLightLanguage;
typedef struct _Iot__Service__Light__ActionOutLightLanguage Iot__Service__Light__ActionOutLightLanguage;
typedef struct _Iot__Service__Light__FreeControlNightLight Iot__Service__Light__FreeControlNightLight;
typedef struct _Iot__Service__Light__SceneCttBrightness Iot__Service__Light__SceneCttBrightness;
typedef struct _Iot__Service__Light__StudyTimeSetting Iot__Service__Light__StudyTimeSetting;
typedef struct _Iot__Service__Light__LightStudyMode Iot__Service__Light__LightStudyMode;
typedef struct _Iot__Service__Light__Properties Iot__Service__Light__Properties;


/* --- enums --- */

typedef enum _Iot__Service__Light__ActionInLightLanguage__EnumMode {
  IOT__SERVICE__LIGHT__ACTION_IN_LIGHT_LANGUAGE__ENUM_MODE__MISS_YOU = 0,
  IOT__SERVICE__LIGHT__ACTION_IN_LIGHT_LANGUAGE__ENUM_MODE__SLEEP_NOW = 1,
  IOT__SERVICE__LIGHT__ACTION_IN_LIGHT_LANGUAGE__ENUM_MODE__ALMOST_HOME = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(IOT__SERVICE__LIGHT__ACTION_IN_LIGHT_LANGUAGE__ENUM_MODE)
} Iot__Service__Light__ActionInLightLanguage__EnumMode;
typedef enum _Iot__Service__Light__LightStudyMode__Mode {
  IOT__SERVICE__LIGHT__LIGHT_STUDY_MODE__MODE__INIT = 0,
  IOT__SERVICE__LIGHT__LIGHT_STUDY_MODE__MODE__SELF_DEFINE = 1,
  /*
   *番茄钟，25分钟
   */
  IOT__SERVICE__LIGHT__LIGHT_STUDY_MODE__MODE__POMODORO = 2,
  /*
   *课堂模式，45分钟
   */
  IOT__SERVICE__LIGHT__LIGHT_STUDY_MODE__MODE__CLASSROOM = 3
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(IOT__SERVICE__LIGHT__LIGHT_STUDY_MODE__MODE)
} Iot__Service__Light__LightStudyMode__Mode;
typedef enum _Iot__Service__Light__EnumLightMode {
  IOT__SERVICE__LIGHT__ENUM_LIGHT_MODE__MANUAL = 0,
  IOT__SERVICE__LIGHT__ENUM_LIGHT_MODE__READING = 1,
  IOT__SERVICE__LIGHT__ENUM_LIGHT_MODE__SCREEN_READING = 2,
  IOT__SERVICE__LIGHT__ENUM_LIGHT_MODE__SLEEP = 3,
  IOT__SERVICE__LIGHT__ENUM_LIGHT_MODE__LEISURE = 4,
  /*
   *感光模式
   */
  IOT__SERVICE__LIGHT__ENUM_LIGHT_MODE__PHOTOSENSITIVE = 5
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(IOT__SERVICE__LIGHT__ENUM_LIGHT_MODE)
} Iot__Service__Light__EnumLightMode;

/* --- messages --- */

struct  _Iot__Service__Light__RGB
{
  ProtobufCMessage base;
  uint32_t r;
  uint32_t g;
  uint32_t b;
};
#define IOT__SERVICE__LIGHT__RGB__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__light__rgb__descriptor) \
    , 0, 0, 0 }


struct  _Iot__Service__Light__ActionInLightLanguage
{
  ProtobufCMessage base;
  Iot__Service__Light__ActionInLightLanguage__EnumMode mode;
};
#define IOT__SERVICE__LIGHT__ACTION_IN_LIGHT_LANGUAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__light__action_in_light_language__descriptor) \
    , IOT__SERVICE__LIGHT__ACTION_IN_LIGHT_LANGUAGE__ENUM_MODE__MISS_YOU }


struct  _Iot__Service__Light__ActionOutLightLanguage
{
  ProtobufCMessage base;
};
#define IOT__SERVICE__LIGHT__ACTION_OUT_LIGHT_LANGUAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__light__action_out_light_language__descriptor) \
     }


struct  _Iot__Service__Light__FreeControlNightLight
{
  ProtobufCMessage base;
  protobuf_c_boolean enable;
  uint32_t starthour;
  uint32_t startmin;
  uint32_t endhour;
  uint32_t endmin;
};
#define IOT__SERVICE__LIGHT__FREE_CONTROL_NIGHT_LIGHT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__light__free_control_night_light__descriptor) \
    , 0, 0, 0, 0, 0 }


struct  _Iot__Service__Light__SceneCttBrightness
{
  ProtobufCMessage base;
  Iot__Service__Light__EnumLightMode lightmode;
  uint32_t colortemp;
  uint32_t brightness;
};
#define IOT__SERVICE__LIGHT__SCENE_CTT_BRIGHTNESS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__light__scene_ctt_brightness__descriptor) \
    , IOT__SERVICE__LIGHT__ENUM_LIGHT_MODE__MANUAL, 0, 0 }


struct  _Iot__Service__Light__StudyTimeSetting
{
  ProtobufCMessage base;
  uint32_t repeatnum;
  uint32_t studytime;
  uint32_t breaktime;
};
#define IOT__SERVICE__LIGHT__STUDY_TIME_SETTING__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__light__study_time_setting__descriptor) \
    , 0, 0, 0 }


struct  _Iot__Service__Light__LightStudyMode
{
  ProtobufCMessage base;
  Iot__Service__Light__LightStudyMode__Mode mode;
  /*
   *对应不同 mode 的倒计时时长，单位s
   */
  uint32_t duration;
  /*
   *该设置的时间戳，单位s
   */
  uint32_t settingtime;
};
#define IOT__SERVICE__LIGHT__LIGHT_STUDY_MODE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__light__light_study_mode__descriptor) \
    , IOT__SERVICE__LIGHT__LIGHT_STUDY_MODE__MODE__INIT, 0, 0 }


struct  _Iot__Service__Light__Properties
{
  ProtobufCMessage base;
  protobuf_c_boolean power;
  uint32_t brightness;
  uint32_t cct;
  Iot__Service__Light__EnumLightMode lightmode;
  protobuf_c_boolean autocolortemperature;
  Iot__Service__Light__RGB *colorrgb;
  uint32_t colorsaturation;
  /*
   *action lightLanguage(ActionInLightLanguage) returns (ActionOutLightLanguage) = 8;
   */
  protobuf_c_boolean autobrightness;
  Iot__Service__Light__FreeControlNightLight *freecontrolnightlight;
  size_t n_scenecttbrightness;
  ArrayNode **scenecttbrightness;
  protobuf_c_boolean colorcttmode;
  Iot__Service__Light__StudyTimeSetting *studytimesetting;
  uint32_t appointmentpoweron;
  uint32_t appointmentpoweroff;
  protobuf_c_boolean lightturnoffdelayenabled;
  Iot__Service__Light__LightStudyMode *lightstudymode;
};
#define IOT__SERVICE__LIGHT__PROPERTIES__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&iot__service__light__properties__descriptor) \
    , 0, 0, 0, IOT__SERVICE__LIGHT__ENUM_LIGHT_MODE__MANUAL, 0, NULL, 0, 0, NULL, 0,NULL, 0, NULL, 0, 0, 0, NULL }


/* Iot__Service__Light__RGB methods */
void   iot__service__light__rgb__init
                     (Iot__Service__Light__RGB         *message);
size_t iot__service__light__rgb__get_packed_size
                     (const Iot__Service__Light__RGB   *message);
size_t iot__service__light__rgb__pack
                     (const Iot__Service__Light__RGB   *message,
                      uint8_t             *out);
size_t iot__service__light__rgb__pack_to_buffer
                     (const Iot__Service__Light__RGB   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__Light__RGB *
       iot__service__light__rgb__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__light__rgb__free_unpacked
                     (Iot__Service__Light__RGB *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__Light__ActionInLightLanguage methods */
void   iot__service__light__action_in_light_language__init
                     (Iot__Service__Light__ActionInLightLanguage         *message);
size_t iot__service__light__action_in_light_language__get_packed_size
                     (const Iot__Service__Light__ActionInLightLanguage   *message);
size_t iot__service__light__action_in_light_language__pack
                     (const Iot__Service__Light__ActionInLightLanguage   *message,
                      uint8_t             *out);
size_t iot__service__light__action_in_light_language__pack_to_buffer
                     (const Iot__Service__Light__ActionInLightLanguage   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__Light__ActionInLightLanguage *
       iot__service__light__action_in_light_language__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__light__action_in_light_language__free_unpacked
                     (Iot__Service__Light__ActionInLightLanguage *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__Light__ActionOutLightLanguage methods */
void   iot__service__light__action_out_light_language__init
                     (Iot__Service__Light__ActionOutLightLanguage         *message);
size_t iot__service__light__action_out_light_language__get_packed_size
                     (const Iot__Service__Light__ActionOutLightLanguage   *message);
size_t iot__service__light__action_out_light_language__pack
                     (const Iot__Service__Light__ActionOutLightLanguage   *message,
                      uint8_t             *out);
size_t iot__service__light__action_out_light_language__pack_to_buffer
                     (const Iot__Service__Light__ActionOutLightLanguage   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__Light__ActionOutLightLanguage *
       iot__service__light__action_out_light_language__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__light__action_out_light_language__free_unpacked
                     (Iot__Service__Light__ActionOutLightLanguage *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__Light__FreeControlNightLight methods */
void   iot__service__light__free_control_night_light__init
                     (Iot__Service__Light__FreeControlNightLight         *message);
size_t iot__service__light__free_control_night_light__get_packed_size
                     (const Iot__Service__Light__FreeControlNightLight   *message);
size_t iot__service__light__free_control_night_light__pack
                     (const Iot__Service__Light__FreeControlNightLight   *message,
                      uint8_t             *out);
size_t iot__service__light__free_control_night_light__pack_to_buffer
                     (const Iot__Service__Light__FreeControlNightLight   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__Light__FreeControlNightLight *
       iot__service__light__free_control_night_light__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__light__free_control_night_light__free_unpacked
                     (Iot__Service__Light__FreeControlNightLight *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__Light__SceneCttBrightness methods */
void   iot__service__light__scene_ctt_brightness__init
                     (Iot__Service__Light__SceneCttBrightness         *message);
size_t iot__service__light__scene_ctt_brightness__get_packed_size
                     (const Iot__Service__Light__SceneCttBrightness   *message);
size_t iot__service__light__scene_ctt_brightness__pack
                     (const Iot__Service__Light__SceneCttBrightness   *message,
                      uint8_t             *out);
size_t iot__service__light__scene_ctt_brightness__pack_to_buffer
                     (const Iot__Service__Light__SceneCttBrightness   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__Light__SceneCttBrightness *
       iot__service__light__scene_ctt_brightness__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__light__scene_ctt_brightness__free_unpacked
                     (Iot__Service__Light__SceneCttBrightness *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__Light__StudyTimeSetting methods */
void   iot__service__light__study_time_setting__init
                     (Iot__Service__Light__StudyTimeSetting         *message);
size_t iot__service__light__study_time_setting__get_packed_size
                     (const Iot__Service__Light__StudyTimeSetting   *message);
size_t iot__service__light__study_time_setting__pack
                     (const Iot__Service__Light__StudyTimeSetting   *message,
                      uint8_t             *out);
size_t iot__service__light__study_time_setting__pack_to_buffer
                     (const Iot__Service__Light__StudyTimeSetting   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__Light__StudyTimeSetting *
       iot__service__light__study_time_setting__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__light__study_time_setting__free_unpacked
                     (Iot__Service__Light__StudyTimeSetting *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__Light__LightStudyMode methods */
void   iot__service__light__light_study_mode__init
                     (Iot__Service__Light__LightStudyMode         *message);
size_t iot__service__light__light_study_mode__get_packed_size
                     (const Iot__Service__Light__LightStudyMode   *message);
size_t iot__service__light__light_study_mode__pack
                     (const Iot__Service__Light__LightStudyMode   *message,
                      uint8_t             *out);
size_t iot__service__light__light_study_mode__pack_to_buffer
                     (const Iot__Service__Light__LightStudyMode   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__Light__LightStudyMode *
       iot__service__light__light_study_mode__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__light__light_study_mode__free_unpacked
                     (Iot__Service__Light__LightStudyMode *message,
                      ProtobufCAllocator *allocator);
/* Iot__Service__Light__Properties methods */
void   iot__service__light__properties__init
                     (Iot__Service__Light__Properties         *message);
size_t iot__service__light__properties__get_packed_size
                     (const Iot__Service__Light__Properties   *message);
size_t iot__service__light__properties__pack
                     (const Iot__Service__Light__Properties   *message,
                      uint8_t             *out);
size_t iot__service__light__properties__pack_to_buffer
                     (const Iot__Service__Light__Properties   *message,
                      ProtobufCBuffer     *buffer);
Iot__Service__Light__Properties *
       iot__service__light__properties__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   iot__service__light__properties__free_unpacked
                     (Iot__Service__Light__Properties *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Iot__Service__Light__RGB_Closure)
                 (const Iot__Service__Light__RGB *message,
                  void *closure_data);
typedef void (*Iot__Service__Light__ActionInLightLanguage_Closure)
                 (const Iot__Service__Light__ActionInLightLanguage *message,
                  void *closure_data);
typedef void (*Iot__Service__Light__ActionOutLightLanguage_Closure)
                 (const Iot__Service__Light__ActionOutLightLanguage *message,
                  void *closure_data);
typedef void (*Iot__Service__Light__FreeControlNightLight_Closure)
                 (const Iot__Service__Light__FreeControlNightLight *message,
                  void *closure_data);
typedef void (*Iot__Service__Light__SceneCttBrightness_Closure)
                 (const Iot__Service__Light__SceneCttBrightness *message,
                  void *closure_data);
typedef void (*Iot__Service__Light__StudyTimeSetting_Closure)
                 (const Iot__Service__Light__StudyTimeSetting *message,
                  void *closure_data);
typedef void (*Iot__Service__Light__LightStudyMode_Closure)
                 (const Iot__Service__Light__LightStudyMode *message,
                  void *closure_data);
typedef void (*Iot__Service__Light__Properties_Closure)
                 (const Iot__Service__Light__Properties *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    iot__service__light__enum_light_mode__descriptor;
extern const ProtobufCMessageDescriptor iot__service__light__rgb__descriptor;
extern const ProtobufCMessageDescriptor iot__service__light__action_in_light_language__descriptor;
extern const ProtobufCEnumDescriptor    iot__service__light__action_in_light_language__enum_mode__descriptor;
extern const ProtobufCMessageDescriptor iot__service__light__action_out_light_language__descriptor;
extern const ProtobufCMessageDescriptor iot__service__light__free_control_night_light__descriptor;
extern const ProtobufCMessageDescriptor iot__service__light__scene_ctt_brightness__descriptor;
extern const ProtobufCMessageDescriptor iot__service__light__study_time_setting__descriptor;
extern const ProtobufCMessageDescriptor iot__service__light__light_study_mode__descriptor;
extern const ProtobufCEnumDescriptor    iot__service__light__light_study_mode__mode__descriptor;
extern const ProtobufCMessageDescriptor iot__service__light__properties__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_light_2eproto__INCLUDED */
