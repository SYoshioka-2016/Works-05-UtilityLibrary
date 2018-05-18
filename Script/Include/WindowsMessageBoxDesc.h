#ifndef _INCLUDE_GUARD_WINDOWSMESSAGEBOXDESC_H_
#define _INCLUDE_GUARD_WINDOWSMESSAGEBOXDESC_H_



#include <eWindowsMessageBoxIcon.h>
#include <eWindowsMessageBoxButton.h>
#include <eWindowsMessageBoxDefaultButton.h>
#include <eWindowsMessageBoxModal.h>
#include <eWindowsMessageBoxOption.h>
#include <StringObject.h>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



namespace ns_windowsUtil
{



	struct WindowsMessageBoxDesc
	{
	public:

		HWND									windowHandle	= nullptr;

		ns_basicObjectType::StringObject		windowTitleText	= "Title";

		ns_basicObjectType::StringObject		messageText		= "Message";

		eWindowsMessageBoxIcon					icon			= eWindowsMessageBoxIcon::None_MBIcon;

		eWindowsMessageBoxButton				button			= eWindowsMessageBoxButton::OK_MBButton;

		eWindowsMessageBoxDefaultButton			defaltButton	= eWindowsMessageBoxDefaultButton::First_MBDefaultButton;

		eWindowsMessageBoxModal					modal			= eWindowsMessageBoxModal::Appl_MBModal;

		eWindowsMessageBoxOption				option			= eWindowsMessageBoxOption::None_MBOption;

	public:

		unsigned int getButtonCount() const;

		ns_basicObjectType::StringObject getIconString() const;

		ns_basicObjectType::StringObject getButtonString() const;

		ns_basicObjectType::StringObject getDefaultButtonString() const;

		ns_basicObjectType::StringObject getModalString() const;

		ns_basicObjectType::StringObject getOptionString() const;
	};
	


}	// namespace ns_windowsUtil



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_WINDOWSMESSAGEBOXDESC_H_