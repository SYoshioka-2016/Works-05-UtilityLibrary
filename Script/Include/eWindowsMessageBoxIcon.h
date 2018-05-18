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
		// ����
		None_MBIcon,

		// ���Q��( !�̃}�[�N )
		Exclamation_MBIcon	= MB_ICONEXCLAMATION,
		
		// �C���t�H���[�V����( i�̃}�[�N )
		Information_MBIcon	= MB_ICONASTERISK,
		
		// �^�╄( ?�̃}�[�N )
		Question_MBIcon		= MB_ICONQUESTION,
		
		// ��~( �~�̃}�[�N )
		Stop_MBIcon			= MB_ICONHAND
	};



}	// namespace ns_windowsUtil



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_EWINDOWSMESSAGEBOXICON_H_