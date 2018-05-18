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
		// ����
		Error_MBResultID	= 0,

		// ���~
		Abort_MBResultID	= IDABORT,

		// �L�����Z��
		Cansel_MBResultID	= IDCANCEL,

		// ���s
		Continue_MBResultID	= IDCONTINUE,

		// ����
		Ignore_MBResultID	= IDIGNORE,

		// ������
		No_MBResultID		= IDNO,

		// OK
		OK_MBResultID		= IDOK,

		// �Ď��s
		Retry_MBResultID	= IDRETRY,

		// �Ď��s
		TryAgain_MBResultID	= IDTRYAGAIN,

		// �͂�
		Yes_MBResultID		= IDYES
	};
	


}	// namespace ns_windowsUtil



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_EWINDOWSMESSAGEBOXRESULTID_H_