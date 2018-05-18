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
		// ���~�A�Ď��s�A����
		AbortRetryIgnore_MBButton	= MB_ABORTRETRYIGNORE,

		// �L�����Z���A�Ď��s�A���s
		CancelTryContinue_MBButton	= MB_CANCELTRYCONTINUE,

		// OK
		OK_MBButton					= MB_OK,

		// OK�A�L�����Z��
		OKCansel_MBButton			= MB_OKCANCEL,

		// �Ď��s�A�L�����Z��
		RetryCansel_MBButton		= MB_RETRYCANCEL,

		// �͂��A������
		YesNo_MBButton				= MB_YESNO,

		// �͂��A�������A�L�����Z��
		YesNoCansel_MBButton		= MB_YESNOCANCEL
	};
	


}	// namespace ns_windowsUtil



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_EWINDOWSMESSAGEBOXBUTTON_H_