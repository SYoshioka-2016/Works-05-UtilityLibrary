#ifndef _INCLUDE_GUARD_EWINDOWSMESSAGEBOXICON_H_
#define _INCLUDE_GUARD_EWINDOWSMESSAGEBOXICON_H_



#include <Windows.h>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



namespace ns_windowsUtil
{
	


	enum class eWindowsMessageBoxIcon
	{
		// 無し
		None_MBIcon,

		// 感嘆符( !のマーク )
		Exclamation_MBIcon	= MB_ICONEXCLAMATION,
		
		// インフォメーション( iのマーク )
		Information_MBIcon	= MB_ICONASTERISK,
		
		// 疑問符( ?のマーク )
		Question_MBIcon		= MB_ICONQUESTION,
		
		// 停止( ×のマーク )
		Stop_MBIcon			= MB_ICONHAND
	};



}	// namespace ns_windowsUtil



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_EWINDOWSMESSAGEBOXICON_H_