#include <WindowsMessageBoxDesc.h>

#include <AssertUtil.h>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



namespace ns_windowsUtil
{



	unsigned int WindowsMessageBoxDesc::getButtonCount() const
	{
		switch ( this->button )
		{
		case eWindowsMessageBoxButton::AbortRetryIgnore_MBButton	:
		case eWindowsMessageBoxButton::CancelTryContinue_MBButton	:
		case eWindowsMessageBoxButton::YesNoCansel_MBButton			: return 3;

		case eWindowsMessageBoxButton::OKCansel_MBButton			:
		case eWindowsMessageBoxButton::RetryCansel_MBButton			:
		case eWindowsMessageBoxButton::YesNo_MBButton				: return 2;

		case eWindowsMessageBoxButton::OK_MBButton					: return 1;
		}

		HALT_APPLICATION( "対応するボタンがありません。" );



		return 0;
	}



	ns_basicObjectType::StringObject WindowsMessageBoxDesc::getIconString() const
	{
		ns_basicObjectType::StringObject ret;

		switch ( this->icon )
		{
		case eWindowsMessageBoxIcon::None_MBIcon:			ret = "None_MBIcon";		break;
		case eWindowsMessageBoxIcon::Exclamation_MBIcon:	ret = "Exclamation_MBIcon"; break;
		case eWindowsMessageBoxIcon::Information_MBIcon:	ret = "Information_MBIcon";	break;
		case eWindowsMessageBoxIcon::Question_MBIcon:		ret = "Question_MBIcon";	break;
		case eWindowsMessageBoxIcon::Stop_MBIcon:			ret = "Stop_MBIcon";		break;

		default:
			
			HALT_APPLICATION( "対応するアイコンがありません。" ); break;
		}

		return ret;
	}



	ns_basicObjectType::StringObject WindowsMessageBoxDesc::getButtonString() const
	{
		ns_basicObjectType::StringObject ret;

		switch ( this->button )
		{
		case eWindowsMessageBoxButton::AbortRetryIgnore_MBButton:	ret = "AbortRetryIgnore_MBButton";	break;
		case eWindowsMessageBoxButton::CancelTryContinue_MBButton:	ret = "CancelTryContinue_MBButton";	break;
		case eWindowsMessageBoxButton::OKCansel_MBButton:			ret = "OKCansel_MBButton";			break;
		case eWindowsMessageBoxButton::OK_MBButton:					ret = "OK_MBButton";				break;
		case eWindowsMessageBoxButton::RetryCansel_MBButton:		ret = "RetryCansel_MBButton";		break;
		case eWindowsMessageBoxButton::YesNoCansel_MBButton:		ret = "YesNoCansel_MBButton";		break;
		case eWindowsMessageBoxButton::YesNo_MBButton:				ret = "YesNo_MBButton";				break;

		default:
			
			HALT_APPLICATION( "対応するボタンがありません。" ); break;
		}

		return ret;
	}



	ns_basicObjectType::StringObject WindowsMessageBoxDesc::getDefaultButtonString() const
	{
		ns_basicObjectType::StringObject ret;

		switch ( this->defaltButton )
		{
		case eWindowsMessageBoxDefaultButton::First_MBDefaultButton:	ret = "First_MBDefaultButton";	break;
		case eWindowsMessageBoxDefaultButton::Second_MBDefaultButton:	ret = "Second_MBDefaultButton";	break;
		case eWindowsMessageBoxDefaultButton::Third_MBDefaultButton:	ret = "Third_MBDefaultButton";	break;
		case eWindowsMessageBoxDefaultButton::Last_MBDefaultButton:		ret = "Last_MBDefaultButton";	break;

		default:
			
			HALT_APPLICATION( "対応する規定ボタンがありません。" ); break;
		}

		return ret;
	}



	ns_basicObjectType::StringObject WindowsMessageBoxDesc::getModalString() const
	{
		ns_basicObjectType::StringObject ret;

		switch ( this->modal )
		{
		case eWindowsMessageBoxModal::Appl_MBModal:		ret = "Appl_MBModal";	break;
		case eWindowsMessageBoxModal::System_MBModal:	ret = "System_MBModal";	break;
		case eWindowsMessageBoxModal::Task_MBModal:		ret = "Task_MBModal";	break;

		default:
			
			HALT_APPLICATION( "対応するモーダルがありません。" ); break;
		}

		return ret;
	}



	ns_basicObjectType::StringObject WindowsMessageBoxDesc::getOptionString() const
	{
		ns_basicObjectType::StringObject ret;

		switch ( this->option )
		{
		case eWindowsMessageBoxOption::None_MBOption:						ret = "None_MBOption";						break;
		case eWindowsMessageBoxOption::DefaultDesktopOnly_MBOption:			ret = "DefaultDesktopOnly_MBOption";		break;
		case eWindowsMessageBoxOption::RightAlign_MBOption:					ret = "RightAlign_MBOption";				break;
		case eWindowsMessageBoxOption::RtlReading_MBOption:					ret = "RtlReading_MBOption";				break;
		case eWindowsMessageBoxOption::SetForeground_MBOption:				ret = "SetForeground_MBOption";				break;
		case eWindowsMessageBoxOption::TopMost_MBOption:					ret = "TopMost_MBOption";					break;
		case eWindowsMessageBoxOption::ServiceNotification_MBOption:		ret = "ServiceNotification_MBOption";		break;
//		case eWindowsMessageBoxOption::ServiceNotificationNT3X_MBOption:	ret = "ServiceNotificationNT3X_MBOption";	break;

		default:
			
			HALT_APPLICATION( "対応するオプションがありません。" ); break;
		}

		return ret;
	}



}	// namespace ns_windowsUtil



}	// namespace ns_typeUtil



}	// namespace ns_myUtility