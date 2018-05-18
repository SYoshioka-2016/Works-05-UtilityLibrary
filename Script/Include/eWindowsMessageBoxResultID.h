#ifndef _INCLUDE_GUARD_EWINDOWSMESSAGEBOXRESULTID_H_
#define _INCLUDE_GUARD_EWINDOWSMESSAGEBOXRESULTID_H_



#include <Windows.h>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



namespace ns_windowsUtil
{
	

	
	enum class eWindowsMessageBoxResultID
	{
		// 無し
		Error_MBResultID	= 0,

		// 中止
		Abort_MBResultID	= IDABORT,

		// キャンセル
		Cansel_MBResultID	= IDCANCEL,

		// 続行
		Continue_MBResultID	= IDCONTINUE,

		// 無視
		Ignore_MBResultID	= IDIGNORE,

		// いいえ
		No_MBResultID		= IDNO,

		// OK
		OK_MBResultID		= IDOK,

		// 再試行
		Retry_MBResultID	= IDRETRY,

		// 再実行
		TryAgain_MBResultID	= IDTRYAGAIN,

		// はい
		Yes_MBResultID		= IDYES
	};
	


}	// namespace ns_windowsUtil



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_EWINDOWSMESSAGEBOXRESULTID_H_