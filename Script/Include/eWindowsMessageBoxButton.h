#ifndef _INCLUDE_GUARD_EWINDOWSMESSAGEBOXBUTTON_H_
#define _INCLUDE_GUARD_EWINDOWSMESSAGEBOXBUTTON_H_



#include <Windows.h>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



namespace ns_windowsUtil
{
	

	
	enum class eWindowsMessageBoxButton
	{
		// 中止、再試行、無視
		AbortRetryIgnore_MBButton	= MB_ABORTRETRYIGNORE,

		// キャンセル、再実行、続行
		CancelTryContinue_MBButton	= MB_CANCELTRYCONTINUE,

		// OK
		OK_MBButton					= MB_OK,

		// OK、キャンセル
		OKCansel_MBButton			= MB_OKCANCEL,

		// 再実行、キャンセル
		RetryCansel_MBButton		= MB_RETRYCANCEL,

		// はい、いいえ
		YesNo_MBButton				= MB_YESNO,

		// はい、いいえ、キャンセル
		YesNoCansel_MBButton		= MB_YESNOCANCEL
	};
	


}	// namespace ns_windowsUtil



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_EWINDOWSMESSAGEBOXBUTTON_H_