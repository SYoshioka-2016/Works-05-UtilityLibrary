#include <StringHolder.h>

#include <StringUtil.h>
#include <AssertUtil.h>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



namespace ns_standardType
{



namespace ns_holderType
{


/*
	StringHolder::StringHolder() :
		StringHolder( "" )
	{

	}
*/

/*
	StringHolder::StringHolder( const StringHolder& other ) :
		StringHolder( other.getString() )
	{

	}
*/


	StringHolder::StringHolder( const std::string& value ) :
		m_stringValue( nullptr ),
		m_wstringValue( nullptr )
	{
		this->setValue( value );
	}



	StringHolder::StringHolder( const char* value ) :
		StringHolder( std::string( value ) )
	{

	}



	StringHolder::StringHolder( const std::wstring& value ) :
		m_stringValue( nullptr ),
		m_wstringValue( nullptr )
	{
		this->setValue( value );
	}



	StringHolder::StringHolder( const wchar_t* value ) :
		StringHolder( std::wstring( value ) )
	{

	}


/*
	StringHolder::StringHolder( const char value ) :
		StringHolder( &value )
	{

	}
*/


	StringHolder::StringHolder( const int value ) :
		StringHolder( static_cast<LargestFloatDataType>( value ) )
	{

	}



	StringHolder::StringHolder( const LargestFloatDataType value ) :
		StringHolder( ns_stringUtil::numericToString( value ) )
	{

	}



	StringHolder::~StringHolder()
	{
		this->m_stringValue.reset();

		this->m_wstringValue.reset();
	}



	StringHolder::operator std::string() const
	{
		return this->getString();
	}



	StringHolder::operator std::wstring() const
	{
		return this->getWString();
	}



	std::string StringHolder::getString() const
	{
		if ( this->m_stringValue != nullptr )
		{
			return *this->m_stringValue;
		}

		if ( this->m_wstringValue != nullptr )
		{
			return ns_stringUtil::wstringToString( *this->m_wstringValue );
		}

		HALT_APPLICATION();



		return std::string();
	}



	std::wstring StringHolder::getWString() const
	{
		if ( this->m_wstringValue != nullptr )
		{
			return *this->m_wstringValue;
		}

		if ( this->m_stringValue != nullptr )
		{
			return ns_stringUtil::stringToWString( *this->m_stringValue );
		}

		HALT_APPLICATION();



		return std::wstring();
	}



	void StringHolder::setValue( const std::string& value )
	{
		if ( this->m_stringValue == nullptr )
		{
			this->m_stringValue = std::make_unique<std::string>();
		}

		*this->m_stringValue = value;
	}



	void StringHolder::setValue( const std::wstring& value )
	{
		if ( this->m_wstringValue == nullptr )
		{
			this->m_wstringValue = std::make_unique<std::wstring>();
		}

		*this->m_wstringValue = value;
	}



}	// namespace ns_holderType



}	// namespace ns_standardType



}	// namespace ns_typeUtil



}	// namespace ns_myUtility