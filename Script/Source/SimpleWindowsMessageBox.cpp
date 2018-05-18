#include <SimpleWindowsMessageBox.h>

#include <AssertUtil.h>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



namespace ns_windowsUtil
{



	SimpleWindowsMessageBox::SimpleWindowsMessageBox() :
		SimpleWindowsMessageBox( WindowsMessageBoxDesc() )
	{
	
	}



	SimpleWindowsMessageBox::SimpleWindowsMessageBox( const WindowsMessageBoxDesc& desc ) :
		m_desc( std::make_unique<WindowsMessageBoxDesc>() ),
		m_result( eWindowsMessageBoxResultID::Error_MBResultID )
	{
		this->setDesc( desc );
	}



	SimpleWindowsMessageBox::~SimpleWindowsMessageBox()
	{
		this->releaseObject();
	}



	eWindowsMessageBoxResultID SimpleWindowsMessageBox::createMessageBox()
	{
		const auto windowHandle		= this->m_desc->windowHandle;
		const auto windowTitleText	= this->m_desc->windowTitleText;
		const auto messageText		= this->m_desc->messageText;
		const auto type				= this->getType();

		const auto button = 
			MessageBoxA(
				windowHandle,
				messageText.getString().c_str(),
				windowTitleText.getString().c_str(),
				type
			);

		this->m_result = this->getResult( button );
	


		return this->m_result;
	}



	const ns_basicObjectType::BooleanObject SimpleWindowsMessageBox::isSelectedAbortButton() const
	{
		return this->m_result == eWindowsMessageBoxResultID::Abort_MBResultID;
	}



	const ns_basicObjectType::BooleanObject SimpleWindowsMessageBox::isSelectedCanselButton() const
	{
		return this->m_result == eWindowsMessageBoxResultID::Cansel_MBResultID;
	}



	const ns_basicObjectType::BooleanObject SimpleWindowsMessageBox::isSelectedContinueButton() const
	{
		return this->m_result == eWindowsMessageBoxResultID::Continue_MBResultID;
	}



	const ns_basicObjectType::BooleanObject SimpleWindowsMessageBox::isSelectedIgnoreButton() const
	{
		return this->m_result == eWindowsMessageBoxResultID::Ignore_MBResultID;
	}



	const ns_basicObjectType::BooleanObject SimpleWindowsMessageBox::isSelectedNoButton() const
	{
		return this->m_result == eWindowsMessageBoxResultID::No_MBResultID;
	}



	const ns_basicObjectType::BooleanObject SimpleWindowsMessageBox::isSelectedOKButton() const
	{
		return this->m_result == eWindowsMessageBoxResultID::OK_MBResultID;
	}



	const ns_basicObjectType::BooleanObject SimpleWindowsMessageBox::isSelectedRetryButton() const
	{
		return this->m_result == eWindowsMessageBoxResultID::Retry_MBResultID;
	}



	const ns_basicObjectType::BooleanObject SimpleWindowsMessageBox::isSelectedTryAgainButton() const
	{
		return this->m_result == eWindowsMessageBoxResultID::TryAgain_MBResultID;
	}



	const ns_basicObjectType::BooleanObject SimpleWindowsMessageBox::isSelectedYesButton() const
	{
		return this->m_result == eWindowsMessageBoxResultID::Yes_MBResultID;
	}



	void SimpleWindowsMessageBox::setDesc( const WindowsMessageBoxDesc& desc )
	{
		*this->m_desc.get() = desc;
	}



	unsigned int SimpleWindowsMessageBox::getType() const
	{
		auto ret = 0U;

		ret |= this->getIconType();

		ret |= this->getButtonType();

		ret |= this->getDefaultButtonType();

		ret |= this->getModalType();

		ret |= this->getOptionType();

		return ret;
	}



	unsigned int SimpleWindowsMessageBox::getIconType() const
	{
		switch ( this->m_desc->icon )
		{
		case eWindowsMessageBoxIcon::None_MBIcon:			return 0;
		case eWindowsMessageBoxIcon::Exclamation_MBIcon:	return MB_ICONEXCLAMATION;
		case eWindowsMessageBoxIcon::Information_MBIcon:	return MB_ICONASTERISK;
		case eWindowsMessageBoxIcon::Question_MBIcon:		return MB_ICONQUESTION;
		case eWindowsMessageBoxIcon::Stop_MBIcon:			return MB_ICONHAND;
		}

		HALT_APPLICATION( "対応するアイコンがありません。" );



		return 0;
	}



	unsigned int SimpleWindowsMessageBox::getButtonType() const
	{
		switch ( this->m_desc->button )
		{
		case eWindowsMessageBoxButton::AbortRetryIgnore_MBButton:	return MB_ABORTRETRYIGNORE;
		case eWindowsMessageBoxButton::CancelTryContinue_MBButton:	return MB_CANCELTRYCONTINUE;
		case eWindowsMessageBoxButton::OKCansel_MBButton:			return MB_OKCANCEL;
		case eWindowsMessageBoxButton::OK_MBButton:					return MB_OK;
		case eWindowsMessageBoxButton::RetryCansel_MBButton:		return MB_RETRYCANCEL;
		case eWindowsMessageBoxButton::YesNoCansel_MBButton:		return MB_YESNOCANCEL;
		case eWindowsMessageBoxButton::YesNo_MBButton:				return MB_YESNO;
		}

		HALT_APPLICATION( "対応するボタンがありません。" );



		return 0;
	}



	unsigned int SimpleWindowsMessageBox::getDefaultButtonType() const
	{
		auto defaultButton		= static_cast<unsigned int>( this->m_desc->defaltButton );
		auto defaultLastButton	= ( this->m_desc->getButtonCount() - 1 ) * 256;

		if ( defaultButton > defaultLastButton )
		{
			defaultButton = defaultLastButton;
		}

		return defaultButton;
	}



	unsigned int SimpleWindowsMessageBox::getModalType() const
	{
		switch ( this->m_desc->modal )
		{
		case eWindowsMessageBoxModal::Appl_MBModal:		return MB_APPLMODAL;
		case eWindowsMessageBoxModal::System_MBModal:	return MB_SYSTEMMODAL;
		case eWindowsMessageBoxModal::Task_MBModal:		return MB_TASKMODAL;
		}

		HALT_APPLICATION( "対応するモーダルがありません。" );



		return 0;
	}



	unsigned int SimpleWindowsMessageBox::getOptionType() const
	{
		switch ( this->m_desc->option )
		{
		case eWindowsMessageBoxOption::None_MBOption:						return 0;
		case eWindowsMessageBoxOption::DefaultDesktopOnly_MBOption:			return MB_DEFAULT_DESKTOP_ONLY;
		case eWindowsMessageBoxOption::RightAlign_MBOption:					return MB_RIGHT;
		case eWindowsMessageBoxOption::RtlReading_MBOption:					return MB_RTLREADING;
		case eWindowsMessageBoxOption::SetForeground_MBOption:				return MB_SETFOREGROUND;
		case eWindowsMessageBoxOption::TopMost_MBOption:					return MB_TOPMOST;
		case eWindowsMessageBoxOption::ServiceNotification_MBOption:		return MB_SERVICE_NOTIFICATION;
	//	case eWindowsMessageBoxOption::ServiceNotificationNT3X_MBOption:	return MB_SERVICE_NOTIFICATION_NT3X;
		}

		HALT_APPLICATION( "対応するオプションがありません。" );



		return 0;
	}



	eWindowsMessageBoxResultID SimpleWindowsMessageBox::getResult( const int result ) const
	{
		switch ( result )
		{
		case 0:				return eWindowsMessageBoxResultID::Error_MBResultID;
		case IDABORT:		return eWindowsMessageBoxResultID::Abort_MBResultID;
		case IDCANCEL:		return eWindowsMessageBoxResultID::Cansel_MBResultID;
		case IDCONTINUE:	return eWindowsMessageBoxResultID::Continue_MBResultID;
		case IDIGNORE:		return eWindowsMessageBoxResultID::Ignore_MBResultID;
		case IDNO:			return eWindowsMessageBoxResultID::No_MBResultID;
		case IDOK:			return eWindowsMessageBoxResultID::OK_MBResultID;
		case IDRETRY:		return eWindowsMessageBoxResultID::Retry_MBResultID;
		case IDTRYAGAIN:	return eWindowsMessageBoxResultID::TryAgain_MBResultID;
		case IDYES:			return eWindowsMessageBoxResultID::Yes_MBResultID;
		}

		HALT_APPLICATION( "対応する結果がありません。" );



		return eWindowsMessageBoxResultID::Error_MBResultID;
	}



	void SimpleWindowsMessageBox::releaseObject()
	{
		this->m_desc.reset();
	}



	ns_standardType::StandardString<char> SimpleWindowsMessageBox::toConsoleOutString() const
	{
		ns_standardType::StandardString<char> ret;

		ret += this->toTypeNameString() + "\n";
		ret += "Window Title Text = \"" + this->m_desc->windowTitleText.getString() + "\"\n";
		ret += "Message      Text = \"" + this->m_desc->messageText.getString() + "\"\n";
		ret += "Icon              = " + this->m_desc->getIconString().getString() + "\n";
		ret += "Button            = " + this->m_desc->getButtonString().getString() + "\n";
		ret += "Default Button    = " + this->m_desc->getDefaultButtonString().getString() + "\n";
		ret += "Modal             = " + this->m_desc->getModalString().getString() + "\n";
		ret += "Option            = " + this->m_desc->getOptionString().getString();

		return ret;
	}



}	// namespace ns_windowsUtil



}	// namespace ns_typeUtil



}	// namespace ns_myUtility
