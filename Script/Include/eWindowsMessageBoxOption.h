#ifndef _INCLUDE_GUARD_EWINDOWSMESSAGEBOXOPTION_H_
#define _INCLUDE_GUARD_EWINDOWSMESSAGEBOXOPTION_H_



#include <Windows.h>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



namespace ns_windowsUtil
{
	


	enum class eWindowsMessageBoxOption
	{
		None_MBOption,

		DefaultDesktopOnly_MBOption			= MB_DEFAULT_DESKTOP_ONLY,

		RightAlign_MBOption					= MB_RIGHT,

		RtlReading_MBOption					= MB_RTLREADING,

		SetForeground_MBOption				= MB_SETFOREGROUND,

		TopMost_MBOption					= MB_TOPMOST,

		ServiceNotification_MBOption		= MB_SERVICE_NOTIFICATION,

		ServiceNotificationNT3X_MBOption	= MB_SERVICE_NOTIFICATION_NT3X
	};



}	// namespace ns_windowsUtil



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_EWINDOWSMESSAGEBOXOPTION_H_