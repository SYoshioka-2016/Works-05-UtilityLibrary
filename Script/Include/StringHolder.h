#ifndef _INCLUDE_GUARD_STRINGHOLDER_H_
#define _INCLUDE_GUARD_STRINGHOLDER_H_



#include <HolderBase.h>

#include <string>
#include <memory>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



namespace ns_standardType
{



namespace ns_holderType
{



	class StringHolder
	{
	public:

//		StringHolder();

		StringHolder( const StringHolder& other ) = delete;

		StringHolder( const std::string& value );

		StringHolder( const char* value );

		StringHolder( const std::wstring& value );

		StringHolder( const wchar_t* value );

//		StringHolder( const char value );

		explicit StringHolder( const int value );

		StringHolder( const LargestFloatDataType value );

		~StringHolder();



		StringHolder& operator=( const StringHolder& ) = delete;



		operator std::string() const;

		operator std::wstring() const;



		std::string getString() const;

		std::wstring getWString() const;

	private:

		void setValue( const std::string& value );

		void setValue( const std::wstring& value );

	private:

		std::unique_ptr<std::string>		m_stringValue;

		std::unique_ptr<std::wstring>		m_wstringValue;
	};



}	// namespace ns_holderType



}	// namespace ns_standardType



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_STRINGHOLDER_H_