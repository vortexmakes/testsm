/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "Mock_InyectorControlAct.h"

static const char* CMockString_InyectorControlAct_entryIdleSpeed = "InyectorControlAct_entryIdleSpeed";
static const char* CMockString_InyectorControlAct_init = "InyectorControlAct_init";
static const char* CMockString_InyectorControlAct_isPressedThrottle = "InyectorControlAct_isPressedThrottle";
static const char* CMockString_InyectorControlAct_isReleasedThrottle = "InyectorControlAct_isReleasedThrottle";
static const char* CMockString_InyectorControlAct_starting = "InyectorControlAct_starting";
static const char* CMockString_event = "event";

typedef struct _CMOCK_InyectorControlAct_init_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;

} CMOCK_InyectorControlAct_init_CALL_INSTANCE;

typedef struct _CMOCK_InyectorControlAct_isPressedThrottle_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  bool ReturnVal;
  Event* Expected_event;
  int IgnoreArg_event;

} CMOCK_InyectorControlAct_isPressedThrottle_CALL_INSTANCE;

typedef struct _CMOCK_InyectorControlAct_isReleasedThrottle_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  bool ReturnVal;
  Event* Expected_event;
  int IgnoreArg_event;

} CMOCK_InyectorControlAct_isReleasedThrottle_CALL_INSTANCE;

typedef struct _CMOCK_InyectorControlAct_starting_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  Event* Expected_event;
  int IgnoreArg_event;

} CMOCK_InyectorControlAct_starting_CALL_INSTANCE;

typedef struct _CMOCK_InyectorControlAct_entryIdleSpeed_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  Event* Expected_event;
  int IgnoreArg_event;

} CMOCK_InyectorControlAct_entryIdleSpeed_CALL_INSTANCE;

static struct Mock_InyectorControlActInstance
{
  int InyectorControlAct_init_IgnoreBool;
  CMOCK_InyectorControlAct_init_CALLBACK InyectorControlAct_init_CallbackFunctionPointer;
  int InyectorControlAct_init_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE InyectorControlAct_init_CallInstance;
  int InyectorControlAct_isPressedThrottle_IgnoreBool;
  bool InyectorControlAct_isPressedThrottle_FinalReturn;
  CMOCK_InyectorControlAct_isPressedThrottle_CALLBACK InyectorControlAct_isPressedThrottle_CallbackFunctionPointer;
  int InyectorControlAct_isPressedThrottle_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE InyectorControlAct_isPressedThrottle_CallInstance;
  int InyectorControlAct_isReleasedThrottle_IgnoreBool;
  bool InyectorControlAct_isReleasedThrottle_FinalReturn;
  CMOCK_InyectorControlAct_isReleasedThrottle_CALLBACK InyectorControlAct_isReleasedThrottle_CallbackFunctionPointer;
  int InyectorControlAct_isReleasedThrottle_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE InyectorControlAct_isReleasedThrottle_CallInstance;
  int InyectorControlAct_starting_IgnoreBool;
  CMOCK_InyectorControlAct_starting_CALLBACK InyectorControlAct_starting_CallbackFunctionPointer;
  int InyectorControlAct_starting_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE InyectorControlAct_starting_CallInstance;
  int InyectorControlAct_entryIdleSpeed_IgnoreBool;
  CMOCK_InyectorControlAct_entryIdleSpeed_CALLBACK InyectorControlAct_entryIdleSpeed_CallbackFunctionPointer;
  int InyectorControlAct_entryIdleSpeed_CallbackCalls;
  CMOCK_MEM_INDEX_TYPE InyectorControlAct_entryIdleSpeed_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void Mock_InyectorControlAct_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  if (Mock.InyectorControlAct_init_IgnoreBool)
    Mock.InyectorControlAct_init_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_InyectorControlAct_init);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.InyectorControlAct_init_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.InyectorControlAct_init_CallbackFunctionPointer != NULL)
    Mock.InyectorControlAct_init_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.InyectorControlAct_isPressedThrottle_IgnoreBool)
    Mock.InyectorControlAct_isPressedThrottle_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_InyectorControlAct_isPressedThrottle);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.InyectorControlAct_isPressedThrottle_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.InyectorControlAct_isPressedThrottle_CallbackFunctionPointer != NULL)
    Mock.InyectorControlAct_isPressedThrottle_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.InyectorControlAct_isReleasedThrottle_IgnoreBool)
    Mock.InyectorControlAct_isReleasedThrottle_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_InyectorControlAct_isReleasedThrottle);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.InyectorControlAct_isReleasedThrottle_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.InyectorControlAct_isReleasedThrottle_CallbackFunctionPointer != NULL)
    Mock.InyectorControlAct_isReleasedThrottle_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.InyectorControlAct_starting_IgnoreBool)
    Mock.InyectorControlAct_starting_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_InyectorControlAct_starting);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.InyectorControlAct_starting_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.InyectorControlAct_starting_CallbackFunctionPointer != NULL)
    Mock.InyectorControlAct_starting_CallInstance = CMOCK_GUTS_NONE;
  if (Mock.InyectorControlAct_entryIdleSpeed_IgnoreBool)
    Mock.InyectorControlAct_entryIdleSpeed_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_InyectorControlAct_entryIdleSpeed);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.InyectorControlAct_entryIdleSpeed_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.InyectorControlAct_entryIdleSpeed_CallbackFunctionPointer != NULL)
    Mock.InyectorControlAct_entryIdleSpeed_CallInstance = CMOCK_GUTS_NONE;
}

void Mock_InyectorControlAct_Init(void)
{
  Mock_InyectorControlAct_Destroy();
}

void Mock_InyectorControlAct_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
  Mock.InyectorControlAct_init_CallbackFunctionPointer = NULL;
  Mock.InyectorControlAct_init_CallbackCalls = 0;
  Mock.InyectorControlAct_isPressedThrottle_CallbackFunctionPointer = NULL;
  Mock.InyectorControlAct_isPressedThrottle_CallbackCalls = 0;
  Mock.InyectorControlAct_isReleasedThrottle_CallbackFunctionPointer = NULL;
  Mock.InyectorControlAct_isReleasedThrottle_CallbackCalls = 0;
  Mock.InyectorControlAct_starting_CallbackFunctionPointer = NULL;
  Mock.InyectorControlAct_starting_CallbackCalls = 0;
  Mock.InyectorControlAct_entryIdleSpeed_CallbackFunctionPointer = NULL;
  Mock.InyectorControlAct_entryIdleSpeed_CallbackCalls = 0;
}

void InyectorControlAct_init(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_InyectorControlAct_init_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_InyectorControlAct_init);
  cmock_call_instance = (CMOCK_InyectorControlAct_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.InyectorControlAct_init_CallInstance);
  Mock.InyectorControlAct_init_CallInstance = CMock_Guts_MemNext(Mock.InyectorControlAct_init_CallInstance);
  if (Mock.InyectorControlAct_init_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (Mock.InyectorControlAct_init_CallbackFunctionPointer != NULL)
  {
    Mock.InyectorControlAct_init_CallbackFunctionPointer(Mock.InyectorControlAct_init_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void InyectorControlAct_init_CMockIgnore(void)
{
  Mock.InyectorControlAct_init_IgnoreBool = (int)1;
}

void InyectorControlAct_init_CMockExpect(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_InyectorControlAct_init_CALL_INSTANCE));
  CMOCK_InyectorControlAct_init_CALL_INSTANCE* cmock_call_instance = (CMOCK_InyectorControlAct_init_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.InyectorControlAct_init_CallInstance = CMock_Guts_MemChain(Mock.InyectorControlAct_init_CallInstance, cmock_guts_index);
  Mock.InyectorControlAct_init_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  UNITY_CLR_DETAILS();
}

void InyectorControlAct_init_StubWithCallback(CMOCK_InyectorControlAct_init_CALLBACK Callback)
{
  Mock.InyectorControlAct_init_IgnoreBool = (int)0;
  Mock.InyectorControlAct_init_CallbackFunctionPointer = Callback;
}

bool InyectorControlAct_isPressedThrottle(Event* event)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_InyectorControlAct_isPressedThrottle_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_InyectorControlAct_isPressedThrottle);
  cmock_call_instance = (CMOCK_InyectorControlAct_isPressedThrottle_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.InyectorControlAct_isPressedThrottle_CallInstance);
  Mock.InyectorControlAct_isPressedThrottle_CallInstance = CMock_Guts_MemNext(Mock.InyectorControlAct_isPressedThrottle_CallInstance);
  if (Mock.InyectorControlAct_isPressedThrottle_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.InyectorControlAct_isPressedThrottle_FinalReturn;
    Mock.InyectorControlAct_isPressedThrottle_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->IgnoreArg_event)
  {
    UNITY_SET_DETAILS(CMockString_InyectorControlAct_isPressedThrottle,CMockString_event);
    UNITY_TEST_ASSERT_EQUAL_PTR(cmock_call_instance->Expected_event, event, cmock_line, CMockStringMismatch);
  }
  if (Mock.InyectorControlAct_isPressedThrottle_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.InyectorControlAct_isPressedThrottle_CallbackFunctionPointer(event, Mock.InyectorControlAct_isPressedThrottle_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_InyectorControlAct_isPressedThrottle(CMOCK_InyectorControlAct_isPressedThrottle_CALL_INSTANCE* cmock_call_instance, Event* event)
{
  cmock_call_instance->Expected_event = event;
  cmock_call_instance->IgnoreArg_event = 0;
}

void InyectorControlAct_isPressedThrottle_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_InyectorControlAct_isPressedThrottle_CALL_INSTANCE));
  CMOCK_InyectorControlAct_isPressedThrottle_CALL_INSTANCE* cmock_call_instance = (CMOCK_InyectorControlAct_isPressedThrottle_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.InyectorControlAct_isPressedThrottle_CallInstance = CMock_Guts_MemChain(Mock.InyectorControlAct_isPressedThrottle_CallInstance, cmock_guts_index);
  Mock.InyectorControlAct_isPressedThrottle_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.InyectorControlAct_isPressedThrottle_IgnoreBool = (int)1;
}

void InyectorControlAct_isPressedThrottle_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, Event* event, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_InyectorControlAct_isPressedThrottle_CALL_INSTANCE));
  CMOCK_InyectorControlAct_isPressedThrottle_CALL_INSTANCE* cmock_call_instance = (CMOCK_InyectorControlAct_isPressedThrottle_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.InyectorControlAct_isPressedThrottle_CallInstance = CMock_Guts_MemChain(Mock.InyectorControlAct_isPressedThrottle_CallInstance, cmock_guts_index);
  Mock.InyectorControlAct_isPressedThrottle_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_InyectorControlAct_isPressedThrottle(cmock_call_instance, event);
  cmock_call_instance->ReturnVal = cmock_to_return;
  UNITY_CLR_DETAILS();
}

void InyectorControlAct_isPressedThrottle_StubWithCallback(CMOCK_InyectorControlAct_isPressedThrottle_CALLBACK Callback)
{
  Mock.InyectorControlAct_isPressedThrottle_IgnoreBool = (int)0;
  Mock.InyectorControlAct_isPressedThrottle_CallbackFunctionPointer = Callback;
}

void InyectorControlAct_isPressedThrottle_CMockIgnoreArg_event(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_InyectorControlAct_isPressedThrottle_CALL_INSTANCE* cmock_call_instance = (CMOCK_InyectorControlAct_isPressedThrottle_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.InyectorControlAct_isPressedThrottle_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_event = 1;
}

bool InyectorControlAct_isReleasedThrottle(Event* event)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_InyectorControlAct_isReleasedThrottle_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_InyectorControlAct_isReleasedThrottle);
  cmock_call_instance = (CMOCK_InyectorControlAct_isReleasedThrottle_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.InyectorControlAct_isReleasedThrottle_CallInstance);
  Mock.InyectorControlAct_isReleasedThrottle_CallInstance = CMock_Guts_MemNext(Mock.InyectorControlAct_isReleasedThrottle_CallInstance);
  if (Mock.InyectorControlAct_isReleasedThrottle_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.InyectorControlAct_isReleasedThrottle_FinalReturn;
    Mock.InyectorControlAct_isReleasedThrottle_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->IgnoreArg_event)
  {
    UNITY_SET_DETAILS(CMockString_InyectorControlAct_isReleasedThrottle,CMockString_event);
    UNITY_TEST_ASSERT_EQUAL_PTR(cmock_call_instance->Expected_event, event, cmock_line, CMockStringMismatch);
  }
  if (Mock.InyectorControlAct_isReleasedThrottle_CallbackFunctionPointer != NULL)
  {
    cmock_call_instance->ReturnVal = Mock.InyectorControlAct_isReleasedThrottle_CallbackFunctionPointer(event, Mock.InyectorControlAct_isReleasedThrottle_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_InyectorControlAct_isReleasedThrottle(CMOCK_InyectorControlAct_isReleasedThrottle_CALL_INSTANCE* cmock_call_instance, Event* event)
{
  cmock_call_instance->Expected_event = event;
  cmock_call_instance->IgnoreArg_event = 0;
}

void InyectorControlAct_isReleasedThrottle_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_InyectorControlAct_isReleasedThrottle_CALL_INSTANCE));
  CMOCK_InyectorControlAct_isReleasedThrottle_CALL_INSTANCE* cmock_call_instance = (CMOCK_InyectorControlAct_isReleasedThrottle_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.InyectorControlAct_isReleasedThrottle_CallInstance = CMock_Guts_MemChain(Mock.InyectorControlAct_isReleasedThrottle_CallInstance, cmock_guts_index);
  Mock.InyectorControlAct_isReleasedThrottle_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.InyectorControlAct_isReleasedThrottle_IgnoreBool = (int)1;
}

void InyectorControlAct_isReleasedThrottle_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, Event* event, bool cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_InyectorControlAct_isReleasedThrottle_CALL_INSTANCE));
  CMOCK_InyectorControlAct_isReleasedThrottle_CALL_INSTANCE* cmock_call_instance = (CMOCK_InyectorControlAct_isReleasedThrottle_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.InyectorControlAct_isReleasedThrottle_CallInstance = CMock_Guts_MemChain(Mock.InyectorControlAct_isReleasedThrottle_CallInstance, cmock_guts_index);
  Mock.InyectorControlAct_isReleasedThrottle_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_InyectorControlAct_isReleasedThrottle(cmock_call_instance, event);
  cmock_call_instance->ReturnVal = cmock_to_return;
  UNITY_CLR_DETAILS();
}

void InyectorControlAct_isReleasedThrottle_StubWithCallback(CMOCK_InyectorControlAct_isReleasedThrottle_CALLBACK Callback)
{
  Mock.InyectorControlAct_isReleasedThrottle_IgnoreBool = (int)0;
  Mock.InyectorControlAct_isReleasedThrottle_CallbackFunctionPointer = Callback;
}

void InyectorControlAct_isReleasedThrottle_CMockIgnoreArg_event(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_InyectorControlAct_isReleasedThrottle_CALL_INSTANCE* cmock_call_instance = (CMOCK_InyectorControlAct_isReleasedThrottle_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.InyectorControlAct_isReleasedThrottle_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_event = 1;
}

void InyectorControlAct_starting(Event* event)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_InyectorControlAct_starting_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_InyectorControlAct_starting);
  cmock_call_instance = (CMOCK_InyectorControlAct_starting_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.InyectorControlAct_starting_CallInstance);
  Mock.InyectorControlAct_starting_CallInstance = CMock_Guts_MemNext(Mock.InyectorControlAct_starting_CallInstance);
  if (Mock.InyectorControlAct_starting_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->IgnoreArg_event)
  {
    UNITY_SET_DETAILS(CMockString_InyectorControlAct_starting,CMockString_event);
    UNITY_TEST_ASSERT_EQUAL_PTR(cmock_call_instance->Expected_event, event, cmock_line, CMockStringMismatch);
  }
  if (Mock.InyectorControlAct_starting_CallbackFunctionPointer != NULL)
  {
    Mock.InyectorControlAct_starting_CallbackFunctionPointer(event, Mock.InyectorControlAct_starting_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_InyectorControlAct_starting(CMOCK_InyectorControlAct_starting_CALL_INSTANCE* cmock_call_instance, Event* event)
{
  cmock_call_instance->Expected_event = event;
  cmock_call_instance->IgnoreArg_event = 0;
}

void InyectorControlAct_starting_CMockIgnore(void)
{
  Mock.InyectorControlAct_starting_IgnoreBool = (int)1;
}

void InyectorControlAct_starting_CMockExpect(UNITY_LINE_TYPE cmock_line, Event* event)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_InyectorControlAct_starting_CALL_INSTANCE));
  CMOCK_InyectorControlAct_starting_CALL_INSTANCE* cmock_call_instance = (CMOCK_InyectorControlAct_starting_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.InyectorControlAct_starting_CallInstance = CMock_Guts_MemChain(Mock.InyectorControlAct_starting_CallInstance, cmock_guts_index);
  Mock.InyectorControlAct_starting_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_InyectorControlAct_starting(cmock_call_instance, event);
  UNITY_CLR_DETAILS();
}

void InyectorControlAct_starting_StubWithCallback(CMOCK_InyectorControlAct_starting_CALLBACK Callback)
{
  Mock.InyectorControlAct_starting_IgnoreBool = (int)0;
  Mock.InyectorControlAct_starting_CallbackFunctionPointer = Callback;
}

void InyectorControlAct_starting_CMockIgnoreArg_event(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_InyectorControlAct_starting_CALL_INSTANCE* cmock_call_instance = (CMOCK_InyectorControlAct_starting_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.InyectorControlAct_starting_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_event = 1;
}

void InyectorControlAct_entryIdleSpeed(Event* event)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_InyectorControlAct_entryIdleSpeed_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_InyectorControlAct_entryIdleSpeed);
  cmock_call_instance = (CMOCK_InyectorControlAct_entryIdleSpeed_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.InyectorControlAct_entryIdleSpeed_CallInstance);
  Mock.InyectorControlAct_entryIdleSpeed_CallInstance = CMock_Guts_MemNext(Mock.InyectorControlAct_entryIdleSpeed_CallInstance);
  if (Mock.InyectorControlAct_entryIdleSpeed_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  if (!cmock_call_instance->IgnoreArg_event)
  {
    UNITY_SET_DETAILS(CMockString_InyectorControlAct_entryIdleSpeed,CMockString_event);
    UNITY_TEST_ASSERT_EQUAL_PTR(cmock_call_instance->Expected_event, event, cmock_line, CMockStringMismatch);
  }
  if (Mock.InyectorControlAct_entryIdleSpeed_CallbackFunctionPointer != NULL)
  {
    Mock.InyectorControlAct_entryIdleSpeed_CallbackFunctionPointer(event, Mock.InyectorControlAct_entryIdleSpeed_CallbackCalls++);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_InyectorControlAct_entryIdleSpeed(CMOCK_InyectorControlAct_entryIdleSpeed_CALL_INSTANCE* cmock_call_instance, Event* event)
{
  cmock_call_instance->Expected_event = event;
  cmock_call_instance->IgnoreArg_event = 0;
}

void InyectorControlAct_entryIdleSpeed_CMockIgnore(void)
{
  Mock.InyectorControlAct_entryIdleSpeed_IgnoreBool = (int)1;
}

void InyectorControlAct_entryIdleSpeed_CMockExpect(UNITY_LINE_TYPE cmock_line, Event* event)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_InyectorControlAct_entryIdleSpeed_CALL_INSTANCE));
  CMOCK_InyectorControlAct_entryIdleSpeed_CALL_INSTANCE* cmock_call_instance = (CMOCK_InyectorControlAct_entryIdleSpeed_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.InyectorControlAct_entryIdleSpeed_CallInstance = CMock_Guts_MemChain(Mock.InyectorControlAct_entryIdleSpeed_CallInstance, cmock_guts_index);
  Mock.InyectorControlAct_entryIdleSpeed_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_InyectorControlAct_entryIdleSpeed(cmock_call_instance, event);
  UNITY_CLR_DETAILS();
}

void InyectorControlAct_entryIdleSpeed_StubWithCallback(CMOCK_InyectorControlAct_entryIdleSpeed_CALLBACK Callback)
{
  Mock.InyectorControlAct_entryIdleSpeed_IgnoreBool = (int)0;
  Mock.InyectorControlAct_entryIdleSpeed_CallbackFunctionPointer = Callback;
}

void InyectorControlAct_entryIdleSpeed_CMockIgnoreArg_event(UNITY_LINE_TYPE cmock_line)
{
  CMOCK_InyectorControlAct_entryIdleSpeed_CALL_INSTANCE* cmock_call_instance = (CMOCK_InyectorControlAct_entryIdleSpeed_CALL_INSTANCE*)CMock_Guts_GetAddressFor(CMock_Guts_MemEndOfChain(Mock.InyectorControlAct_entryIdleSpeed_CallInstance));
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
  cmock_call_instance->IgnoreArg_event = 1;
}

