/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "Mock_ThrottleSensor.h"

static const char* CMockString_ThrottleSensor_init = "ThrottleSensor_init";

typedef struct _CMOCK_ThrottleSensor_init_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  ThrottleSensor* ReturnVal;

} CMOCK_ThrottleSensor_init_CALL_INSTANCE;

static struct Mock_ThrottleSensorInstance
{
  int ThrottleSensor_init_IgnoreBool;
  ThrottleSensor* ThrottleSensor_init_FinalReturn;
  CMOCK_ThrottleSensor_init_CALLBACK ThrottleSensor_init_CallbackFunctionPointer;
  int ThrottleSensor_init_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE ThrottleSensor_init_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void Mock_ThrottleSensor_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.ThrottleSensor_init_IgnoreBool)
    Mock.ThrottleSensor_init_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_ThrottleSensor_init);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.ThrottleSensor_init_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.ThrottleSensor_init_CallbackFunctionPointer != NULL)
    Mock.ThrottleSensor_init_CallInstance = CMOCK_GUTS_NONE;
}

void Mock_ThrottleSensor_Init(void)
{
  Mock_ThrottleSensor_Destroy();
}

void Mock_ThrottleSensor_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  Mock.ThrottleSensor_init_CallbackFunctionPointer = NULL;
  Mock.ThrottleSensor_init_CallbackCalls = 0;
}

ThrottleSensor* ThrottleSensor_init(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_ThrottleSensor_init_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_ThrottleSensor_init);
  cmock_call_instance = (CMOCK_ThrottleSensor_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.ThrottleSensor_init_CallInstance);
  Mock.ThrottleSensor_init_CallInstance = CMock_Guts_MemNext(Mock.ThrottleSensor_init_CallInstance);
  if (Mock.ThrottleSensor_init_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.ThrottleSensor_init_FinalReturn;
    Mock.ThrottleSensor_init_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (Mock.ThrottleSensor_init_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.ThrottleSensor_init_CallbackFunctionPointer(Mock.ThrottleSensor_init_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void ThrottleSensor_init_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, ThrottleSensor* cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_ThrottleSensor_init_CALL_INSTANCE));
  CMOCK_ThrottleSensor_init_CALL_INSTANCE* cmock_call_instance = (CMOCK_ThrottleSensor_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.ThrottleSensor_init_CallInstance = CMock_Guts_MemChain(Mock.ThrottleSensor_init_CallInstance, cmock_guts_index);
  Mock.ThrottleSensor_init_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.ThrottleSensor_init_IgnoreBool = (int)1;
}

void ThrottleSensor_init_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, ThrottleSensor* cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_ThrottleSensor_init_CALL_INSTANCE));
  CMOCK_ThrottleSensor_init_CALL_INSTANCE* cmock_call_instance = (CMOCK_ThrottleSensor_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.ThrottleSensor_init_CallInstance = CMock_Guts_MemChain(Mock.ThrottleSensor_init_CallInstance, cmock_guts_index);
  Mock.ThrottleSensor_init_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  UNITY_CLR_DETAILS();
}

void ThrottleSensor_init_StubWithCallback(CMOCK_ThrottleSensor_init_CALLBACK Callback)
{
  Mock.ThrottleSensor_init_IgnoreBool = (int)0;
  Mock.ThrottleSensor_init_CallbackFunctionPointer = Callback;
}

