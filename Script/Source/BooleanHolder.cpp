#include <BooleanHolder.h>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



namespace ns_standardType
{



namespace ns_holderType
{



	BooleanHolder::BooleanHolder() :
		BooleanHolder( false )
	{

	}



	BooleanHolder::BooleanHolder( const LargestFloatDataType value ) :
		m_value( false )
	{
		this->setValue( value );
	}



	BooleanHolder::BooleanHolder( const BooleanHolder& other ) :
		BooleanHolder( static_cast<bool>( other ) )
	{

	}


/*
	BooleanHolder & BooleanHolder::operator=( const BooleanHolder& other )
	{
		return this->operator()( other );
	}



	BooleanHolder & BooleanHolder::operator()( const BooleanHolder& other )
	{
		this->m_value = other;

		return *this;
	}
*/


	BooleanHolder::operator bool() const
	{
		return this->m_value;
	}



	BooleanHolder::operator char() const
	{
		return this->getValue<char>();
	}



	BooleanHolder::operator unsigned char() const
	{
		return this->getValue<unsigned char>();
	}



	BooleanHolder::operator short() const
	{
		return this->getValue<short>();
	}



	BooleanHolder::operator unsigned short() const
	{
		return this->getValue<unsigned short>();
	}



	BooleanHolder::operator int() const
	{
		return this->getValue<int>();
	}



	BooleanHolder::operator unsigned int() const
	{
		return this->getValue<unsigned int>();
	}



	BooleanHolder::operator long() const
	{
		return this->getValue<long>();
	}



	BooleanHolder::operator unsigned long() const
	{
		return this->getValue<unsigned long>();
	}



	BooleanHolder::operator float() const
	{
		return this->getValue<float>();
	}



	BooleanHolder::operator double() const
	{
		return this->getValue<double>();
	}



	BooleanHolder::operator long double() const
	{
		return this->getValue<long double>();
	}



	template<typename NumericType>
	NumericType BooleanHolder::getValue() const
	{
		return static_cast<NumericType>( ( this->m_value ) ? 1 : 0 );
	}



	void BooleanHolder::setValue( const long double value )
	{
		this->m_value = ( value != 0 );
	}


	
	template bool BooleanHolder::getValue() const;
	template char BooleanHolder::getValue() const;
	template unsigned char BooleanHolder::getValue() const;
	template short BooleanHolder::getValue() const;
	template unsigned short BooleanHolder::getValue() const;
	template int BooleanHolder::getValue() const;
	template unsigned int BooleanHolder::getValue() const;
	template long BooleanHolder::getValue() const;
	template unsigned long BooleanHolder::getValue() const;
	template long long BooleanHolder::getValue() const;
	template unsigned long long BooleanHolder::getValue() const;
	template float BooleanHolder::getValue() const;
	template double BooleanHolder::getValue() const;
	template long double BooleanHolder::getValue() const;



}	// namespace ns_holderType



}	// namespace ns_standardType



}	// namespace ns_typeUtil



}	// namespace ns_myUtility