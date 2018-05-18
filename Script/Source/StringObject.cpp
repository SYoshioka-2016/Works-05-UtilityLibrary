#include <StringObject.h>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



namespace ns_basicObjectType
{



	StringObject::StringObject() :
		StringObject( "" )
	{

	}



	StringObject::StringObject( const StringObject& other ) :
		StringObject( other.getString() )
	{

	}



	StringObject::StringObject( const ns_standardType::ns_holderType::StringHolder& value ) :
		m_value( std::make_unique<std::string>() )
	{
		this->setValue( value );
	}



	StringObject::~StringObject()
	{
		this->releaseObject();
	}



	StringObject& StringObject::operator=( const StringObject& other )
	{
		return this->operator()( other );
	}



	StringObject& StringObject::operator=( const ns_standardType::ns_holderType::StringHolder& value )
	{
		return this->operator()( value );
	}



	StringObject& StringObject::operator()( const StringObject& other )
	{
		return this->operator()( other.getString() );
	}



	StringObject& StringObject::operator()( const ns_standardType::ns_holderType::StringHolder& value )
	{
		this->setValue( value );

		return *this;
	}



	const StringObject StringObject::operator+( const StringObject& other ) const
	{
		return *this->m_value.get() + other.getString();
	}



	const StringObject StringObject::operator+( const ns_standardType::ns_holderType::StringHolder& value ) const
	{
		return *this->m_value.get() + value.getString();
	}



	StringObject& StringObject::operator+=( const StringObject& other )
	{
		return this->operator+=( other.getString() );
	}



	StringObject& StringObject::operator+=( const ns_standardType::ns_holderType::StringHolder& value )
	{
		return this->operator=( ( this->operator+( value ) ) );
	}

	
/*
	StringObject::operator const char*() const
	{
		return this->getString().c_str();
	}



	StringObject::operator const wchar_t*() const
	{
		return this->getWString().c_str();
	}
*/


	ns_standardType::StandardString<char> StringObject::toString() const
	{
		return *this->m_value.get();
	}


/*
	std::string StringObject::getString() const
	{
		return this->m_value->getString();
	}



	std::wstring StringObject::getWString() const
	{
		return this->m_value->getWString();
	}
*/


	void StringObject::releaseObject()
	{
		this->m_value.reset();
	}



	void StringObject::setValue( const ns_standardType::ns_holderType::StringHolder& value )
	{
		*this->m_value.get() = value.getString();
	}



	ns_standardType::StandardString<char> StringObject::toConsoleOutString() const
	{
		return "String : value = \"" + *this->m_value.get() + "\"";
	}



}	// namespace ns_basicObjectType



}	// namespace ns_typeUtil



}	// namespace ns_myUtility