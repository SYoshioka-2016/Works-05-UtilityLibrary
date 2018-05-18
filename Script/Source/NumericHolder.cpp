#include <NumericHolder.h>

#include <MathUtil.h>
#include <StringUtil.h>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



namespace ns_standardType
{



namespace ns_holderType
{



	NumericHolder::NumericHolder() :
		NumericHolder( 0 )
	{

	}



	NumericHolder::NumericHolder( const LargestFloatDataType value ) :
		m_value( 0 ),
		m_isInteger( false )
	{
		this->setValue( value );
	}



	NumericHolder::NumericHolder( const std::string& value ) :
		NumericHolder( ns_stringUtil::stringToNumeric( value ) )
	{

	}



	NumericHolder::NumericHolder( const std::wstring& value ) :
		NumericHolder( ns_stringUtil::wstringToString( value ) )
	{

	}
	


	NumericHolder::NumericHolder( const NumericHolder& other ) :
		NumericHolder( other.getValue<LargestFloatDataType>() )
	{

	}



	NumericHolder::~NumericHolder()
	{

	}



	NumericHolder::operator bool() const
	{
		return this->getValue<LargestFloatDataType>() != 0;
	}



	NumericHolder::operator char() const
	{
		return this->getValue<char>();
	}



	NumericHolder::operator unsigned char() const
	{
		return this->getValue<unsigned char>();
	}



	NumericHolder::operator short() const
	{
		return this->getValue<short>();
	}



	NumericHolder::operator unsigned short() const
	{
		return this->getValue<unsigned short>();
	}



	NumericHolder::operator int() const
	{
		return this->getValue<int>();
	}



	NumericHolder::operator unsigned int() const
	{
		return this->getValue<unsigned int>();
	}



	NumericHolder::operator long() const
	{
		return this->getValue<long>();
	}



	NumericHolder::operator unsigned long() const
	{
		return this->getValue<unsigned long>();
	}



	NumericHolder::operator float() const
	{
		return this->getValue<float>();
	}



	NumericHolder::operator double() const
	{
		return this->getValue<double>();
	}



	NumericHolder::operator long double() const
	{
		return this->getValue<long double>();
	}



	template<typename NumericType>
	NumericType NumericHolder::getValue() const
	{
		return static_cast<NumericType>( this->m_value );
	}



	bool NumericHolder::isInteger() const
	{
		return this->m_isInteger;
	}



	bool NumericHolder::isFloat() const
	{
		return !this->isInteger();
	}



	void NumericHolder::setValue( const LargestFloatDataType value )
	{
		this->m_value = value;

		this->m_isInteger = ns_mathUtil::isInteger( value );
	}



	template char NumericHolder::getValue() const;
	template unsigned char NumericHolder::getValue() const;
	template short NumericHolder::getValue() const;
	template unsigned short NumericHolder::getValue() const;
	template int NumericHolder::getValue() const;
	template unsigned int NumericHolder::getValue() const;
	template long NumericHolder::getValue() const;
	template unsigned long NumericHolder::getValue() const;
	template long long NumericHolder::getValue() const;
	template unsigned long long NumericHolder::getValue() const;
	template float NumericHolder::getValue() const;
	template double NumericHolder::getValue() const;
	template long double NumericHolder::getValue() const;



}	// namespace ns_holderType



}	// namespace ns_standardType



}	// namespace ns_typeUtil



}	// namespace ns_myUtility