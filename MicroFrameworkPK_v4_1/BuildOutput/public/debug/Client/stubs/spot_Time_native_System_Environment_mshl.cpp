//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------


#include "spot_Time_native.h"
#include "spot_Time_native_System_Environment.h"

using namespace System;


HRESULT Library_spot_Time_native_System_Environment::get_TickCount___STATIC__I4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        INT32 retVal = Environment::get_TickCount( hr );
        TINYCLR_CHECK_HRESULT( hr );
        SetResult_INT32( stack, retVal );

    }
    TINYCLR_NOCLEANUP();
}