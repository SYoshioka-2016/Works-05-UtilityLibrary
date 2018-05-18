#include <StandardNumeric.h>

#include <iostream>
			#include <StringUtil.h>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



namespace ns_standardType
{



	template<typename NumericType>
	StandardNumeric<NumericType>::StandardNumeric() :
		StandardNumeric( 0 )
	{

	}


	
	
	template<typename NumericType>
	StandardNumeric<NumericType>::StandardNumeric( const ns_holderType::NumericHolder& value ) :
		m_value( value )
	{

	}


	
	// ë„ì¸ââéZéq

	template<typename NumericType>
	StandardNumeric<NumericType>& StandardNumeric<NumericType>::operator=( const ns_holderType::NumericHolder& value )
	{
		return this->operator()( value );
	}


	
	// ä÷êîåƒÇ—èoÇµââéZéq

	template<typename NumericType>
	StandardNumeric<NumericType>& StandardNumeric<NumericType>::operator()( const ns_holderType::NumericHolder& value )
	{
		this->m_value = value;

		return *this;
	}


	
	// î‰ärââéZéq
	
	// ìôâø(==)
	template<typename NumericType>
	bool StandardNumeric<NumericType>::operator==( const ns_holderType::NumericHolder& value ) const
	{
		return this->toNumeric<ns_holderType::LargestFloatDataType>() == value.getValue<ns_holderType::LargestFloatDataType>();
	}


	
	template<typename OtherNumericType>
	bool operator==( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other )
	{
		return other.operator==( value );
	}
	

	
	// îÒìôíl(!=)
	template<typename NumericType>
	bool StandardNumeric<NumericType>::operator!=( const ns_holderType::NumericHolder& value ) const
	{
		return !this->operator==( value );
	}


	
	template<typename OtherNumericType>
	bool operator!=( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other )
	{
		return other.operator!=( value );
	}
	

	
	// ÇÊÇËè¨Ç≥Ç¢(<)
	template<typename NumericType>
	bool StandardNumeric<NumericType>::operator<( const ns_holderType::NumericHolder& value ) const
	{
		return this->toNumeric<ns_holderType::LargestFloatDataType>() < value.getValue<ns_holderType::LargestFloatDataType>();
	}


	
	template<typename OtherNumericType>
	bool operator<( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other )
	{
		return value.getValue<ns_holderType::LargestFloatDataType>() < other.toNumeric<ns_holderType::LargestFloatDataType>();
	}
	

	
	// ÇÊÇËëÂÇ´Ç¢(>)
	template<typename NumericType>
	bool StandardNumeric<NumericType>::operator>( const ns_holderType::NumericHolder& value ) const
	{
		return this->toNumeric<ns_holderType::LargestFloatDataType>() > value.getValue<ns_holderType::LargestFloatDataType>();
	}


	
	template<typename OtherNumericType>
	bool operator>( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other )
	{
		return value.getValue<ns_holderType::LargestFloatDataType>() > other.toNumeric<ns_holderType::LargestFloatDataType>();
	}
	

	
	// à»â∫(<=)
	template<typename NumericType>
	bool StandardNumeric<NumericType>::operator<=( const ns_holderType::NumericHolder& value ) const
	{
		return this->toNumeric<ns_holderType::LargestFloatDataType>() <= value.getValue<ns_holderType::LargestFloatDataType>();
	}


	
	template<typename OtherNumericType>
	bool operator<=( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other )
	{
		return value.getValue<ns_holderType::LargestFloatDataType>() <= other.toNumeric<ns_holderType::LargestFloatDataType>();
	}
	

	
	// à»è„(>=)
	template<typename NumericType>
	bool StandardNumeric<NumericType>::operator>=( const ns_holderType::NumericHolder& value ) const
	{
		return this->toNumeric<ns_holderType::LargestFloatDataType>() >= value.getValue<ns_holderType::LargestFloatDataType>();
	}


	
	template<typename OtherNumericType>
	bool operator>=( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other )
	{
		return value.getValue<ns_holderType::LargestFloatDataType>() >= other.toNumeric<ns_holderType::LargestFloatDataType>();
	}


	
	// íPçÄââéZéq

	template<typename NumericType>
	const StandardNumeric<NumericType>& StandardNumeric<NumericType>::operator+() const
	{
		return *this;
	}



	template<typename NumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator-() const
	{
		return this->negated();
	}



	template<typename NumericType>
	StandardNumeric<NumericType>& StandardNumeric<NumericType>::operator++()
	{
		return this->operator=( this->m_value + 1 );
	}



	template<typename NumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator++( int )
	{
		const StandardNumeric ret = *this;

		this->operator++();

		return ret;
	}



	template<typename NumericType>
	StandardNumeric<NumericType>& StandardNumeric<NumericType>::operator--()
	{
		return this->operator=( this->m_value - 1 );
	}



	template<typename NumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator--( int )
	{
		const StandardNumeric ret = *this;

		this->operator--();

		return ret;
	}



	template<typename NumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator~() const
	{
		if ( this->isFloatType() ) { return 0; }

		return ~( this->toNumeric<ns_holderType::LargestSignedIntegerDataType>() );
	}



	template<typename NumericType>
	bool StandardNumeric<NumericType>::operator!() const
	{
		return this->m_value == 0;
	}

	
		
	// éZèpââéZéq
	
	// â¡éZ(+)
	template<typename NumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator+( const ns_holderType::NumericHolder& value ) const
	{
		return this->m_value + value.getValue<NumericType>();
	}


	
	template<typename OtherNumericType>
	const StandardNumeric<ns_holderType::LargestFloatDataType> operator+( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other )
	{
		return other.operator+( value );
	}

	
	
	// å∏éZ(-)
	template<typename NumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator-( const ns_holderType::NumericHolder& value ) const
	{
		return this->operator+( value.getValue<NumericType>() * -1 );
	}


	
	template<typename OtherNumericType>
	const StandardNumeric<ns_holderType::LargestFloatDataType> operator-( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other )
	{
		return value.getValue<ns_holderType::LargestFloatDataType>() - other.toNumeric<ns_holderType::LargestFloatDataType>();
	}

	
		
	// èÊéZ(*)
	template<typename NumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator*( const ns_holderType::NumericHolder& value ) const
	{
		return this->m_value * value.getValue<NumericType>();
	}


	
	template<typename OtherNumericType>
	const StandardNumeric<ns_holderType::LargestFloatDataType> operator*( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other )
	{
		return value.getValue<ns_holderType::LargestFloatDataType>() * other.toNumeric<ns_holderType::LargestFloatDataType>();
	}

	
		
	// èúéZ(/)
	template<typename NumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator/( const ns_holderType::NumericHolder& value ) const
	{
		return this->m_value / value.getValue<NumericType>();
	}


	
	template<typename OtherNumericType>
	const StandardNumeric<ns_holderType::LargestFloatDataType> operator/( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other )
	{
		return value.getValue<ns_holderType::LargestFloatDataType>() / other.toNumeric<ns_holderType::LargestFloatDataType>();
	}

	
		
	// èËó](%)
	template<typename NumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator%( const ns_holderType::NumericHolder& value ) const
	{
		return fmod( this->m_value, value.getValue<NumericType>() );
	}


	
	template<typename OtherNumericType>
	const StandardNumeric<ns_holderType::LargestFloatDataType> operator%( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other )
	{
		return fmod( value.getValue<ns_holderType::LargestFloatDataType>(), other.toNumeric<ns_holderType::LargestFloatDataType>() );
	}


	
	// ò_óùêœ(&)
	template<typename NumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator&( const ns_holderType::LargestSignedIntegerDataType value ) const
	{
		return ( this->isIntegerType() ) ? ( static_cast<ns_holderType::LargestSignedIntegerDataType>( this->m_value ) & value ) : 0;
	}

	
		
	template<typename OtherNumericType>
	const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator&( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<OtherNumericType>& other )
	{
		return value & other.toNumeric<ns_holderType::LargestSignedIntegerDataType>();
	}


	
	// ò_óùòa(|)
	template<typename NumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator|( const ns_holderType::LargestSignedIntegerDataType value ) const
	{
		return ( this->isIntegerType() ) ? ( static_cast<ns_holderType::LargestSignedIntegerDataType>( this->m_value ) | value ) : 0;
	}

	
		
	template<typename OtherNumericType>
	const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator|( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<OtherNumericType>& other )
	{
		return value | other.toNumeric<ns_holderType::LargestSignedIntegerDataType>();
	}


	
	// îrëºìIò_óùòa(^)
	template<typename NumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator^( const ns_holderType::LargestSignedIntegerDataType value ) const
	{
		return ( this->isIntegerType() ) ? ( static_cast<ns_holderType::LargestSignedIntegerDataType>( this->m_value ) ^ value ) : 0;
	}

	
		
	template<typename OtherNumericType>
	const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator^( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<OtherNumericType>& other )
	{
		return value ^ other.toNumeric<ns_holderType::LargestSignedIntegerDataType>();
	}


	
	// ç∂ÉVÉtÉg(<<)
	template<typename NumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator<<( const ns_holderType::LargestSignedIntegerDataType value ) const
	{
		return ( this->isIntegerType() ) ? ( static_cast<ns_holderType::LargestSignedIntegerDataType>( this->m_value ) << value ) : 0;
	}

	
		
	template<typename OtherNumericType>
	const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator<<( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<OtherNumericType>& other )
	{
		return value << other.toNumeric<ns_holderType::LargestSignedIntegerDataType>();
	}


	
	// âEÉVÉtÉg(>>)
	template<typename NumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator>>( const ns_holderType::LargestSignedIntegerDataType value ) const
	{
		return ( this->isIntegerType() ) ? ( static_cast<ns_holderType::LargestSignedIntegerDataType>( this->m_value ) >> value ) : 0;
	}

	
		
	template<typename OtherNumericType>
	const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator>>( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<OtherNumericType>& other )
	{
		return value >> other.toNumeric<ns_holderType::LargestSignedIntegerDataType>();
	}


	
	// ï°çáë„ì¸ââéZéq
		
	// â¡éZë„ì¸(+=)
	template<typename NumericType>
	StandardNumeric<NumericType>& StandardNumeric<NumericType>::operator+=( const ns_holderType::NumericHolder& value )
	{
		return this->operator=( this->operator+( value ) );
	}
		


	// å∏éZë„ì¸(-=)
	template<typename NumericType>
	StandardNumeric<NumericType>& StandardNumeric<NumericType>::operator-=( const ns_holderType::NumericHolder& value )
	{
		return this->operator+=( value.getValue<NumericType>() * -1 );
	}


		
	// èÊéZë„ì¸(*=)
	template<typename NumericType>
	StandardNumeric<NumericType>& StandardNumeric<NumericType>::operator*=( const ns_holderType::NumericHolder& value )
	{
		return this->operator=( this->operator*( value ) );
	}


		
	// èúéZë„ì¸(/=)
	template<typename NumericType>
	StandardNumeric<NumericType>& StandardNumeric<NumericType>::operator/=( const ns_holderType::NumericHolder& value )
	{
		return this->operator=( this->operator/( value ) );
	}


		
	// èËó]ë„ì¸(%=)
	template<typename NumericType>
	StandardNumeric<NumericType>& StandardNumeric<NumericType>::operator%=( const ns_holderType::NumericHolder& value )
	{
		return this->operator=( this->operator%( value ) );
	}


		
	// ò_óùêœë„ì¸(&=)
	template<typename NumericType>
	StandardNumeric<NumericType>& StandardNumeric<NumericType>::operator&=( const ns_holderType::LargestSignedIntegerDataType value )
	{
		return this->operator=( this->operator&( value ) );
	}


		
	// ò_óùòaë„ì¸(|=)
	template<typename NumericType>
	StandardNumeric<NumericType>& StandardNumeric<NumericType>::operator|=( const ns_holderType::LargestSignedIntegerDataType value )
	{
		return this->operator=( this->operator|( value ) );
	}


		
	// îrëºìIò_óùòaë„ì¸(^=)
	template<typename NumericType>
	StandardNumeric<NumericType>& StandardNumeric<NumericType>::operator^=( const ns_holderType::LargestSignedIntegerDataType value )
	{
		return this->operator=( this->operator^( value ) );
	}


		
	// ç∂ÉVÉtÉgë„ì¸(<<=)
	template<typename NumericType>
	StandardNumeric<NumericType>& StandardNumeric<NumericType>::operator<<=( const ns_holderType::LargestSignedIntegerDataType value )
	{
		return this->operator=( this->operator<<( value ) );
	}


		
	// âEÉVÉtÉgë„ì¸(>>=)
	template<typename NumericType>
	StandardNumeric<NumericType>& StandardNumeric<NumericType>::operator>>=( const ns_holderType::LargestSignedIntegerDataType value )
	{
		return this->operator=( this->operator>>( value ) );
	}






	

	template<typename OtherNumericType>
	std::istream& operator>>( std::istream& in, StandardNumeric<OtherNumericType>& other )
	{
		OtherNumericType tmp = 0;

		in >> tmp;

		other = tmp;

		return in;
	}

	

	template<typename OtherNumericType>
	std::ostream& operator<<( std::ostream& out, const StandardNumeric<OtherNumericType>& other )
	{
out << ns_stringUtil::numericToString( other.toNumeric<OtherNumericType>() );
//out << ns_standardType::ns_holderType::StringHolder( other.toNumeric<OtherNumericType>() );
//out << ns_standardType::StandardString( other.toNumeric<OtherNumericType>() );

		return out;
	}


	
	template<typename NumericType>
	const NumericType& StandardNumeric<NumericType>::getValue() const
	{
		return this->m_value;
	}


	
	template<typename NumericType>
	bool StandardNumeric<NumericType>::toBool() const
	{
		return ( this->m_value != 0 );
	}


	
	template<typename NumericType>
	char StandardNumeric<NumericType>::toChar() const
	{
		return this->toNumeric<char>();
	}


	
	template<typename NumericType>
	unsigned char StandardNumeric<NumericType>::toUnsignedChar() const
	{
		return this->toNumeric<unsigned char>();
	}


	
	template<typename NumericType>
	short StandardNumeric<NumericType>::toShort() const
	{
		return this->toNumeric<short>();
	}


	
	template<typename NumericType>
	unsigned short StandardNumeric<NumericType>::toUnsignedShort() const
	{
		return this->toNumeric<unsigned short>();
	}


	
	template<typename NumericType>
	int StandardNumeric<NumericType>::toInt() const
	{
		return this->toNumeric<int>();
	}


	
	template<typename NumericType>
	unsigned int StandardNumeric<NumericType>::toUnsignedInt() const
	{
		return this->toNumeric<unsigned int>();
	}


	
	template<typename NumericType>
	long StandardNumeric<NumericType>::toLong() const
	{
		return this->toNumeric<long>();
	}


	
	template<typename NumericType>
	unsigned long StandardNumeric<NumericType>::toUnsignedLong() const
	{
		return this->toNumeric<unsigned long>();
	}


	
	template<typename NumericType>
	float StandardNumeric<NumericType>::toFloat() const
	{
		return this->toNumeric<float>();
	}


	
	template<typename NumericType>
	double StandardNumeric<NumericType>::toDouble() const
	{
		return this->toNumeric<double>();
	}


	
	template<typename NumericType>
	long double StandardNumeric<NumericType>::toLongDouble() const
	{
		return this->toNumeric<long double>();
	}



	template<typename NumericType>
	bool StandardNumeric<NumericType>::isFloatType() const
	{
		if ( typeid( NumericType ) == typeid( float ) )			{ return true; }

		if ( typeid( NumericType ) == typeid( double ) )		{ return true; }

		if ( typeid( NumericType ) == typeid( long double ) )	{ return true; }



		return false;
	}


	
	template<typename NumericType>
	bool StandardNumeric<NumericType>::isIntegerType() const
	{
		return !this->isFloatType();
	}



	template<typename NumericType>
	const StandardNumeric<NumericType>& StandardNumeric<NumericType>::consoleIn()
	{
		std::cin >> *this;

		return *this;
	}



	template<typename NumericType>
	const StandardNumeric<NumericType>& StandardNumeric<NumericType>::consoleOut() const
	{
		std::cout << *this << std::endl;

		return *this;
	}


	
	template<typename NumericType>
	StandardNumeric<NumericType>& StandardNumeric<NumericType>::inverse()
	{
		this->m_value = 1 / this->m_value;

		return *this;
	}



	template<typename NumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::inversed() const
	{
		return StandardNumeric( this->m_value ).inverse();
	}


	
	template<typename NumericType>
	StandardNumeric<NumericType>& StandardNumeric<NumericType>::negate()
	{
		this->m_value *= -1;

		return *this;
	}



	template<typename NumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::negated() const
	{
		return StandardNumeric( this->m_value ).negate();
	}


	
	template<typename NumericType>
	const ns_holderType::NumericHolder StandardNumeric<NumericType>::toNumericHolder() const
	{
		return this->m_value;
	}

	

	template class StandardNumeric<char>;
	template class StandardNumeric<unsigned char>;
	template class StandardNumeric<short>;
	template class StandardNumeric<unsigned short>;
	template class StandardNumeric<int>;
	template class StandardNumeric<unsigned int>;
	template class StandardNumeric<long>;
	template class StandardNumeric<unsigned long>;
	template class StandardNumeric<float>;
	template class StandardNumeric<double>;
	template class StandardNumeric<long double>;


	
	template bool operator==( const ns_holderType::NumericHolder& value, const StandardNumeric<char>& other );
	template bool operator==( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned char>& other );
	template bool operator==( const ns_holderType::NumericHolder& value, const StandardNumeric<short>& other );
	template bool operator==( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned short>& other );
	template bool operator==( const ns_holderType::NumericHolder& value, const StandardNumeric<int>& other );
	template bool operator==( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned int>& other );
	template bool operator==( const ns_holderType::NumericHolder& value, const StandardNumeric<long>& other );
	template bool operator==( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned long>& other );
	template bool operator==( const ns_holderType::NumericHolder& value, const StandardNumeric<float>& other );
	template bool operator==( const ns_holderType::NumericHolder& value, const StandardNumeric<double>& other );
	template bool operator==( const ns_holderType::NumericHolder& value, const StandardNumeric<long double>& other );


	
	template bool operator!=( const ns_holderType::NumericHolder& value, const StandardNumeric<char>& other );
	template bool operator!=( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned char>& other );
	template bool operator!=( const ns_holderType::NumericHolder& value, const StandardNumeric<short>& other );
	template bool operator!=( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned short>& other );
	template bool operator!=( const ns_holderType::NumericHolder& value, const StandardNumeric<int>& other );
	template bool operator!=( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned int>& other );
	template bool operator!=( const ns_holderType::NumericHolder& value, const StandardNumeric<long>& other );
	template bool operator!=( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned long>& other );
	template bool operator!=( const ns_holderType::NumericHolder& value, const StandardNumeric<float>& other );
	template bool operator!=( const ns_holderType::NumericHolder& value, const StandardNumeric<double>& other );
	template bool operator!=( const ns_holderType::NumericHolder& value, const StandardNumeric<long double>& other );


	
	template bool operator<( const ns_holderType::NumericHolder& value, const StandardNumeric<char>& other );
	template bool operator<( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned char>& other );
	template bool operator<( const ns_holderType::NumericHolder& value, const StandardNumeric<short>& other );
	template bool operator<( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned short>& other );
	template bool operator<( const ns_holderType::NumericHolder& value, const StandardNumeric<int>& other );
	template bool operator<( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned int>& other );
	template bool operator<( const ns_holderType::NumericHolder& value, const StandardNumeric<long>& other );
	template bool operator<( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned long>& other );
	template bool operator<( const ns_holderType::NumericHolder& value, const StandardNumeric<float>& other );
	template bool operator<( const ns_holderType::NumericHolder& value, const StandardNumeric<double>& other );
	template bool operator<( const ns_holderType::NumericHolder& value, const StandardNumeric<long double>& other );


	
	template bool operator>( const ns_holderType::NumericHolder& value, const StandardNumeric<char>& other );
	template bool operator>( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned char>& other );
	template bool operator>( const ns_holderType::NumericHolder& value, const StandardNumeric<short>& other );
	template bool operator>( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned short>& other );
	template bool operator>( const ns_holderType::NumericHolder& value, const StandardNumeric<int>& other );
	template bool operator>( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned int>& other );
	template bool operator>( const ns_holderType::NumericHolder& value, const StandardNumeric<long>& other );
	template bool operator>( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned long>& other );
	template bool operator>( const ns_holderType::NumericHolder& value, const StandardNumeric<float>& other );
	template bool operator>( const ns_holderType::NumericHolder& value, const StandardNumeric<double>& other );
	template bool operator>( const ns_holderType::NumericHolder& value, const StandardNumeric<long double>& other );


	
	template bool operator<=( const ns_holderType::NumericHolder& value, const StandardNumeric<char>& other );
	template bool operator<=( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned char>& other );
	template bool operator<=( const ns_holderType::NumericHolder& value, const StandardNumeric<short>& other );
	template bool operator<=( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned short>& other );
	template bool operator<=( const ns_holderType::NumericHolder& value, const StandardNumeric<int>& other );
	template bool operator<=( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned int>& other );
	template bool operator<=( const ns_holderType::NumericHolder& value, const StandardNumeric<long>& other );
	template bool operator<=( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned long>& other );
	template bool operator<=( const ns_holderType::NumericHolder& value, const StandardNumeric<float>& other );
	template bool operator<=( const ns_holderType::NumericHolder& value, const StandardNumeric<double>& other );
	template bool operator<=( const ns_holderType::NumericHolder& value, const StandardNumeric<long double>& other );


	
	template bool operator>=( const ns_holderType::NumericHolder& value, const StandardNumeric<char>& other );
	template bool operator>=( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned char>& other );
	template bool operator>=( const ns_holderType::NumericHolder& value, const StandardNumeric<short>& other );
	template bool operator>=( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned short>& other );
	template bool operator>=( const ns_holderType::NumericHolder& value, const StandardNumeric<int>& other );
	template bool operator>=( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned int>& other );
	template bool operator>=( const ns_holderType::NumericHolder& value, const StandardNumeric<long>& other );
	template bool operator>=( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned long>& other );
	template bool operator>=( const ns_holderType::NumericHolder& value, const StandardNumeric<float>& other );
	template bool operator>=( const ns_holderType::NumericHolder& value, const StandardNumeric<double>& other );
	template bool operator>=( const ns_holderType::NumericHolder& value, const StandardNumeric<long double>& other );


	
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator+( const ns_holderType::NumericHolder& value, const StandardNumeric<char>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator+( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned char>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator+( const ns_holderType::NumericHolder& value, const StandardNumeric<short>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator+( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned short>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator+( const ns_holderType::NumericHolder& value, const StandardNumeric<int>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator+( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned int>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator+( const ns_holderType::NumericHolder& value, const StandardNumeric<long>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator+( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned long>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator+( const ns_holderType::NumericHolder& value, const StandardNumeric<float>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator+( const ns_holderType::NumericHolder& value, const StandardNumeric<double>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator+( const ns_holderType::NumericHolder& value, const StandardNumeric<long double>& other );


	
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator-( const ns_holderType::NumericHolder& value, const StandardNumeric<char>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator-( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned char>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator-( const ns_holderType::NumericHolder& value, const StandardNumeric<short>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator-( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned short>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator-( const ns_holderType::NumericHolder& value, const StandardNumeric<int>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator-( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned int>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator-( const ns_holderType::NumericHolder& value, const StandardNumeric<long>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator-( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned long>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator-( const ns_holderType::NumericHolder& value, const StandardNumeric<float>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator-( const ns_holderType::NumericHolder& value, const StandardNumeric<double>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator-( const ns_holderType::NumericHolder& value, const StandardNumeric<long double>& other );


	
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator*( const ns_holderType::NumericHolder& value, const StandardNumeric<char>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator*( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned char>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator*( const ns_holderType::NumericHolder& value, const StandardNumeric<short>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator*( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned short>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator*( const ns_holderType::NumericHolder& value, const StandardNumeric<int>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator*( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned int>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator*( const ns_holderType::NumericHolder& value, const StandardNumeric<long>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator*( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned long>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator*( const ns_holderType::NumericHolder& value, const StandardNumeric<float>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator*( const ns_holderType::NumericHolder& value, const StandardNumeric<double>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator*( const ns_holderType::NumericHolder& value, const StandardNumeric<long double>& other );


	
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator/( const ns_holderType::NumericHolder& value, const StandardNumeric<char>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator/( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned char>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator/( const ns_holderType::NumericHolder& value, const StandardNumeric<short>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator/( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned short>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator/( const ns_holderType::NumericHolder& value, const StandardNumeric<int>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator/( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned int>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator/( const ns_holderType::NumericHolder& value, const StandardNumeric<long>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator/( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned long>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator/( const ns_holderType::NumericHolder& value, const StandardNumeric<float>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator/( const ns_holderType::NumericHolder& value, const StandardNumeric<double>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator/( const ns_holderType::NumericHolder& value, const StandardNumeric<long double>& other );


	
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator%( const ns_holderType::NumericHolder& value, const StandardNumeric<char>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator%( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned char>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator%( const ns_holderType::NumericHolder& value, const StandardNumeric<short>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator%( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned short>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator%( const ns_holderType::NumericHolder& value, const StandardNumeric<int>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator%( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned int>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator%( const ns_holderType::NumericHolder& value, const StandardNumeric<long>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator%( const ns_holderType::NumericHolder& value, const StandardNumeric<unsigned long>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator%( const ns_holderType::NumericHolder& value, const StandardNumeric<float>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator%( const ns_holderType::NumericHolder& value, const StandardNumeric<double>& other );
	template const StandardNumeric<ns_holderType::LargestFloatDataType> operator%( const ns_holderType::NumericHolder& value, const StandardNumeric<long double>& other );

	

	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator&( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<char>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator&( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<unsigned char>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator&( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<short>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator&( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<unsigned short>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator&( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<int>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator&( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<unsigned int>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator&( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<long>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator&( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<unsigned long>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator&( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<float>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator&( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<double>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator&( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<long double>& other );

	

	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator|( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<char>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator|( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<unsigned char>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator|( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<short>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator|( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<unsigned short>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator|( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<int>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator|( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<unsigned int>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator|( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<long>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator|( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<unsigned long>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator|( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<float>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator|( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<double>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator|( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<long double>& other );

	

	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator^( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<char>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator^( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<unsigned char>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator^( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<short>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator^( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<unsigned short>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator^( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<int>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator^( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<unsigned int>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator^( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<long>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator^( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<unsigned long>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator^( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<float>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator^( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<double>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator^( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<long double>& other );

	

	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator<<( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<char>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator<<( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<unsigned char>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator<<( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<short>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator<<( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<unsigned short>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator<<( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<int>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator<<( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<unsigned int>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator<<( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<long>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator<<( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<unsigned long>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator<<( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<float>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator<<( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<double>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator<<( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<long double>& other );

	

	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator>>( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<char>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator>>( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<unsigned char>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator>>( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<short>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator>>( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<unsigned short>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator>>( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<int>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator>>( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<unsigned int>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator>>( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<long>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator>>( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<unsigned long>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator>>( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<float>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator>>( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<double>& other );
	template const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator>>( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<long double>& other );


	
	template std::ostream& operator<<( std::ostream& out, const StandardNumeric<char>& other );
	template std::ostream& operator<<( std::ostream& out, const StandardNumeric<unsigned char>& other );
	template std::ostream& operator<<( std::ostream& out, const StandardNumeric<short>& other );
	template std::ostream& operator<<( std::ostream& out, const StandardNumeric<unsigned short>& other );
	template std::ostream& operator<<( std::ostream& out, const StandardNumeric<int>& other );
	template std::ostream& operator<<( std::ostream& out, const StandardNumeric<unsigned int>& other );
	template std::ostream& operator<<( std::ostream& out, const StandardNumeric<long>& other );
	template std::ostream& operator<<( std::ostream& out, const StandardNumeric<unsigned long>& other );
	template std::ostream& operator<<( std::ostream& out, const StandardNumeric<float>& other );
	template std::ostream& operator<<( std::ostream& out, const StandardNumeric<double>& other );
	template std::ostream& operator<<( std::ostream& out, const StandardNumeric<long double>& other );



	template std::istream& operator>>( std::istream& in, StandardNumeric<char>& other );
	template std::istream& operator>>( std::istream& in, StandardNumeric<unsigned char>& other );
	template std::istream& operator>>( std::istream& in, StandardNumeric<short>& other );
	template std::istream& operator>>( std::istream& in, StandardNumeric<unsigned short>& other );
	template std::istream& operator>>( std::istream& in, StandardNumeric<int>& other );
	template std::istream& operator>>( std::istream& in, StandardNumeric<unsigned int>& other );
	template std::istream& operator>>( std::istream& in, StandardNumeric<long>& other );
	template std::istream& operator>>( std::istream& in, StandardNumeric<unsigned long>& other );
	template std::istream& operator>>( std::istream& in, StandardNumeric<float>& other );
	template std::istream& operator>>( std::istream& in, StandardNumeric<double>& other );
	template std::istream& operator>>( std::istream& in, StandardNumeric<long double>& other );



}	// namespace ns_standardType



}	// namespace ns_typeUtil



}	// namespace ns_myUtility