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
		// 1�Ԗڂ̃{�^��
		First_MBDefaultButton	= MB_DEFBUTTON1,
		
		// 2�Ԗڂ̃{�^��
		Second_MBDefaultButton	= MB_DEFBUTTON2,
		
		// 3�Ԗڂ̃{�^��
		Third_MBDefaultButton	= MB_DEFBUTTON3,

		// �Ō�̃{�^��
		Last_MBDefaultButton	= MB_DEFBUTTON4
	};
	


}	// namespace ns_windowsUtil



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_EWINDOWSMESSAGEBOXDEFAULTBUTTON_H_