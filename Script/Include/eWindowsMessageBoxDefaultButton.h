#ifndef _INCLUDE_GUARD_EWINDOWSMESSAGEBOXDEFAULTBUTTON_H_
#define _INCLUDE_GUARD_EWINDOWSMESSAGEBOXDEFAULTBUTTON_H_



#include <Windows.h>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



namespace ns_windowsUtil
{
	


	enum class eWindowsMessageBoxDefaultButton
	{
		// 1番目のボタン
		First_MBDefaultButton	= MB_DEFBUTTON1,
		
		// 2番目のボタン
		Second_MBDefaultButton	= MB_DEFBUTTON2,
		
		// 3番目のボタン
		Third_MBDefaultButton	= MB_DEFBUTTON3,

		// 最後のボタン
		Last_MBDefaultButton	= MB_DEFBUTTON4
	};
	


}	// namespace ns_windowsUtil



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_EWINDOWSMESSAGEBOXDEFAULTBUTTON_H_