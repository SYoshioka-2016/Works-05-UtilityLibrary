#ifndef _INCLUDE_GUARD_SIMPLEWINDOWSMESSAGEBOX_H_
#define _INCLUDE_GUARD_SIMPLEWINDOWSMESSAGEBOX_H_



#include <BooleanObject.h>
#include <Uncopyable.h>
#include <WindowsMessageBoxDesc.h>
#include <eWindowsMessageBoxResultID.h>

#include <memory>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



namespace ns_windowsUtil
{



	class SimpleWindowsMessageBox : public ns_basicObjectType::BasicObject, public Uncopyable
	{
	public:

		SimpleWindowsMessageBox();

		SimpleWindowsMessageBox( const WindowsMessageBoxDesc& desc );

		~SimpleWindowsMessageBox();

		

		eWindowsMessageBoxResultID createMessageBox();

		const ns_basicObjectType::BooleanObject isSelectedAbortButton() const;

		const ns_basicObjectType::BooleanObject isSelectedCanselButton() const;

		const ns_basicObjectType::BooleanObject isSelectedContinueButton() const;

		const ns_basicObjectType::BooleanObject isSelectedIgnoreButton() const;

		const ns_basicObjectType::BooleanObject isSelectedNoButton() const;

		const ns_basicObjectType::BooleanObject isSelectedOKButton() const;

		const ns_basicObjectType::BooleanObject isSelectedRetryButton() const;

		const ns_basicObjectType::BooleanObject isSelectedTryAgainButton() const;

		const ns_basicObjectType::BooleanObject isSelectedYesButton() const;



		void setDesc( const WindowsMessageBoxDesc& desc );

	protected:

		unsigned int getType() const;

		unsigned int getIconType() const;

		unsigned int getButtonType() const;

		unsigned int getDefaultButtonType() const;

		unsigned int getModalType() const;

		unsigned int getOptionType() const;

		eWindowsMessageBoxResultID getResult( const int result ) const;

		void releaseObject() override;

		virtual ns_standardType::StandardString<char> toConsoleOutString() const override;

	private:

		std::unique_ptr<WindowsMessageBoxDesc>		m_desc;

		eWindowsMessageBoxResultID					m_result;
	};



}	// namespace ns_windowsUtil



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_SIMPLEWINDOWSMESSAGEBOX_H_