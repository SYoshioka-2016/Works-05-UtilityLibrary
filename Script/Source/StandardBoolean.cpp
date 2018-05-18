#include <StandardBoolean.h>

#include <StandardNumeric.h>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



namespace ns_standardType
{



	StandardBoolean::StandardBoolean()
	{

	}



	StandardBoolean::StandardBoolean( const ns_holderType::BooleanHolder& value ) :
		m_value( value )
	{

	}



	StandardBoolean& StandardBoolean::operator=( const ns_holderType::BooleanHolder& value )
	{
		return this->operator()( value );
	}



	StandardBoolean& StandardBoolean::operator()( const ns_holderType::BooleanHolder& value )
	{
		this->m_value = value;

		return *this;
	}



	StandardBoolean& StandardBoolean::operator()( const StandardBoolean& other )
	{
		return this->operator()( other.toBool() );
	}



	const StandardBoolean StandardBoolean::operator==( const ns_holderType::BooleanHolder& value ) const
	{
		return this->m_value == static_cast<bool>( value );
	}



	const StandardBoolean StandardBoolean::operator==( const StandardBoolean& other ) const
	{
		return this->m_value == other.toBool();
	}



	const StandardBoolean operator==( const ns_holderType::BooleanHolder& value, const StandardBoolean& other )
	{
		return other.operator==( value );
	}



	const StandardBoolean StandardBoolean::operator!=( const ns_holderType::BooleanHolder& value ) const
	{
		return this->m_value != static_cast<bool>( value );
	}



	const StandardBoolean StandardBoolean::operator!=( const StandardBoolean& other ) const
	{
		return this->m_value != other.toBool();
	}



	const StandardBoolean operator!=( const ns_holderType::BooleanHolder& value, const StandardBoolean& other )
	{
		return other.operator!=( value );
	}



	const StandardBoolean StandardBoolean::operator<( const ns_holderType::BooleanHolder& value ) const
	{
		return this->m_value < static_cast<bool>( value );
	}



	const StandardBoolean StandardBoolean::operator<( const StandardBoolean& other ) const
	{
		return this->m_value < other.toBool();
	}



	const StandardBoolean operator<( const ns_holderType::BooleanHolder& value, const StandardBoolean& other )
	{
		return static_cast<bool>( value ) < other.toBool();
	}



	const StandardBoolean StandardBoolean::operator>( const ns_holderType::BooleanHolder& value ) const
	{
		return this->m_value > static_cast<bool>( value );
	}



	const StandardBoolean StandardBoolean::operator>( const StandardBoolean& other ) const
	{
		return this->m_value > other.toBool();
	}



	const StandardBoolean operator>( const ns_holderType::BooleanHolder& value, const StandardBoolean& other )
	{
		return static_cast<bool>( value ) > other.toBool();
	}



	const StandardBoolean StandardBoolean::operator<=( const ns_holderType::BooleanHolder& value ) const
	{
		return this->m_value <= static_cast<bool>( value );
	}



	const StandardBoolean StandardBoolean::operator<=( const StandardBoolean& other ) const
	{
		return this->m_value <= other.toBool();
	}



	const StandardBoolean operator<=( const ns_holderType::BooleanHolder& value, const StandardBoolean& other )
	{
		return static_cast<bool>( value ) <= other.toBool();
	}



	const StandardBoolean StandardBoolean::operator>=( const ns_holderType::BooleanHolder& value ) const
	{
		return this->m_value >= static_cast<bool>( value );
	}



	const StandardBoolean StandardBoolean::operator>=( const StandardBoolean& other ) const
	{
		return this->m_value >= other.toBool();
	}



	const StandardBoolean operator>=( const ns_holderType::BooleanHolder& value, const StandardBoolean& other )
	{
		return static_cast<bool>( value ) >= other.toBool();
	}



	const StandardBoolean StandardBoolean::operator!() const
	{
		return !this->m_value;
	}



	std::istream& operator>>( std::istream& in, StandardBoolean& other )
	{
		ns_holderType::LargestFloatDataType tmp = 0;

		in >> tmp;

		other = tmp;

		return in;
	}



	std::ostream& operator<<( std::ostream& out, const StandardBoolean& other )
	{
out << ( other.toBool() ? "true" : "false" );
//out << ns_standardType::StandardString( other.getValue<OtherNumericType>() );

		return out;
	}



	const StandardBoolean& StandardBoolean::consoleIn()
	{
		std::cin >> *this;

		return *this;
	}



	const StandardBoolean& StandardBoolean::consoleOut() const
	{
		std::cout << *this << std::endl;

		return *this;
	}



	template<typename OtherNumericType>
	OtherNumericType StandardBoolean::getValue() const
	{
		return static_cast<OtherNumericType>( this->m_value ? 1 : 0 );
	}



	const bool& StandardBoolean::toBool() const
	{
		return this->m_value;
	}



	char StandardBoolean::toChar() const
	{
		return this->getValue<char>();
	}



	unsigned char StandardBoolean::toUnsignedChar() const
	{
		return this->getValue<unsigned char>();
	}



	short StandardBoolean::toShort() const
	{
		return this->getValue<short>();
	}



	unsigned short StandardBoolean::toUnsignedShort() const
	{
		return this->getValue<unsigned short>();
	}



	int StandardBoolean::toInt() const
	{
		return this->getValue<int>();
	}



	unsigned int StandardBoolean::toUnsignedInt() const
	{
		return this->getValue<unsigned int>();
	}



	long StandardBoolean::toLong() const
	{
		return this->getValue<long>();
	}



	unsigned long StandardBoolean::toUnsignedLong() const
	{
		return this->getValue<unsigned long>();
	}



	long long StandardBoolean::toLongLong() const
	{
		return this->getValue<long long>();
	}



	unsigned long long StandardBoolean::toUnsignedLongLong() const
	{
		return this->getValue<unsigned long long>();
	}



	float StandardBoolean::toFloat() const
	{
		return this->getValue<float>();
	}



	double StandardBoolean::toDouble() const
	{
		return this->getValue<double>();
	}



	long double StandardBoolean::toLongDouble() const
	{
		return this->getValue<long double>();
	}



	template char StandardBoolean::getValue() const;
	template unsigned char StandardBoolean::getValue() const;
	template short StandardBoolean::getValue() const;
	template unsigned short StandardBoolean::getValue() const;
	template int StandardBoolean::getValue() const;
	template unsigned int StandardBoolean::getValue() const;
	template long StandardBoolean::getValue() const;
	template unsigned long StandardBoolean::getValue() const;
	template long long StandardBoolean::getValue() const;
	template unsigned long long StandardBoolean::getValue() const;
	template float StandardBoolean::getValue() const;
	template double StandardBoolean::getValue() const;
	template long double StandardBoolean::getValue() const;



}	// namespace ns_standardType



}	// namespace ns_typeUtil



}	// namespace ns_myUtility