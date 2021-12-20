// @generated SignedSource<<997028e94e721c306cc2f380a6dd9297>>

#pragma once

namespace facebook {
namespace profilo {
namespace entries {
enum class EntryType {
  UNKNOWN_TYPE = 0,
  UI_INPUT_START = 1,
  UI_INPUT_END = 2,
  UI_UPDATE_START = 3,
  UI_UPDATE_END = 4,
  NET_ADDED = 5,
  NET_CANCEL = 6,
  NET_CHANGEPRI = 7,
  NET_ERROR = 8,
  NET_END = 9,
  NET_RESPONSE = 10,
  NET_RETRY = 11,
  NET_START = 12,
  NET_COUNTER = 13,
  CALL_START = 14,
  CALL_END = 15,
  ASYNC_CALL = 16,
  SERV_CONN = 17,
  SERV_DISCONN = 18,
  SERV_END = 19,
  ADAPTER_NOTIFY = 20,
  MARK_FLAG = 21,
  MARK_PUSH = 22,
  MARK_POP = 23,
  LIFECYCLE_APPLICATION_START = 24,
  LIFECYCLE_APPLICATION_END = 25,
  LIFECYCLE_ACTIVITY_START = 26,
  LIFECYCLE_ACTIVITY_END = 27,
  LIFECYCLE_SERVICE_START = 28,
  LIFECYCLE_SERVICE_END = 29,
  LIFECYCLE_BROADCAST_RECEIVER_START = 30,
  LIFECYCLE_BROADCAST_RECEIVER_END = 31,
  LIFECYCLE_CONTENT_PROVIDER_START = 32,
  LIFECYCLE_CONTENT_PROVIDER_END = 33,
  LIFECYCLE_FRAGMENT_START = 34,
  LIFECYCLE_FRAGMENT_END = 35,
  LIFECYCLE_VIEW_START = 36,
  LIFECYCLE_VIEW_END = 37,
  TRACE_ABORT = 38,
  TRACE_END = 39,
  TRACE_START = 40,
  TRACE_BACKWARDS = 41,
  TRACE_TIMEOUT = 42,
  BLACKBOX_TRACE_START = 43,
  COUNTER = 44,
  STACK_FRAME = 45,
  QPL_START = 46,
  QPL_END = 47,
  QPL_CANCEL = 48,
  QPL_NOTE = 49,
  QPL_POINT = 50,
  QPL_EVENT = 51,
  TRACE_ANNOTATION = 52,
  WAIT_START = 53,
  WAIT_END = 54,
  WAIT_SIGNAL = 55,
  STRING_KEY = 56,
  STRING_VALUE = 57,
  QPL_TAG = 58,
  QPL_ANNOTATION = 59,
  TRACE_THREAD_NAME = 60,
  TRACE_PRE_END = 61,
  TRACE_THREAD_PRI = 62,
  MINOR_FAULT = 63,
  MAJOR_FAULT = 64,
  PERFEVENTS_LOST = 65,
  CLASS_LOAD = 66,
  JAVASCRIPT_STACK_FRAME = 67,
  MESSAGE_START = 68,
  MESSAGE_END = 69,
  CLASS_VALUE = 70,
  HTTP2_REQUEST_INITIATED = 71,
  HTTP2_FRAME_HEADER = 72,
  HTTP2_WINDOW_UPDATE = 73,
  HTTP2_PRIORITY = 74,
  HTTP2_EGRESS_FRAME_HEADER = 75,
  PROCESS_LIST = 76,
  IO_START = 77,
  IO_END = 78,
  CPU_COUNTER = 79,
  CLASS_LOAD_START = 80,
  CLASS_LOAD_END = 81,
  CLASS_LOAD_FAILED = 82,
  STRING_NAME = 83,
  JAVA_FRAME_NAME = 84,
  BINDER_START = 85,
  BINDER_END = 86,
  MEMORY_ALLOCATION = 87,
  STKERR_EMPTYSTACK = 88,
  STKERR_STACKOVERFLOW = 89,
  STKERR_NOSTACKFORTHREAD = 90,
  STKERR_SIGNALINTERRUPT = 91,
  STKERR_NESTEDUNWIND = 92,
  MAPPING = 93,
  LOGGER_PRIORITY = 94,
  CONDITIONAL_UPLOAD_RATE = 95,
  NATIVE_ALLOC = 96,
  NATIVE_FREE = 97,
  NATIVE_ALLOC_FAILURE = 98,
};


const char* to_string(EntryType type);
} // namespace entries
} // namespace profilo
} // namespace facebook
