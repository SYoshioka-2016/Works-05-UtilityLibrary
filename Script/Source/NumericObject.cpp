#include <NumericObject.h>

#include <BooleanObject.h>
#include <AssertUtil.h>
#include <StringUtil.h>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



namespace ns_basicObjectType
{



	template<typename NumericType>
	NumericObject<NumericType>::NumericObject() :
		m_value()
	{
		this->setValue( 0 );
	}
	


	template<typename NumericType>
	NumericObject<NumericType>::NumericObject( const NumericObject<NumericType>& other ) :
		m_value()
	{
		this->setValue( other.getValue() );
	}


	
	template<typename NumericType>
	NumericObject<NumericType>::NumericObject( const ns_standardType::ns_holderType::NumericHolder& value ) :
		m_value()
	{
		this->setValue( value );
	}


	
	// ŠÖ”ŒÄ‚Ño‚µ‰‰Zq

	template<typename NumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator()( const ns_standardType::ns_holderType::NumericHolder& value )
	{
		this->setValue( value );

		return *this;
	}


	
	// ‘ã“ü‰‰Zq

	template<typename NumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator=( const NumericObject<NumericType>& other )
	{
		return this->operator()( other );
	}



	template<typename NumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator=( const ns_standardType::ns_holderType::NumericHolder& value )
	{
		return this->operator()( value );
	}


	
	// ”äŠr‰‰Zq
	
	// “™‰¿(==)
	template<typename NumericType>
	const ns_standardType::StandardBoolean NumericObject<NumericType>::operator==( const ns_standardType::ns_holderType::NumericHolder& value ) const
	{
		return this->m_value == value;
	}
	

	
	// ”ñ“™’l(!=)
	template<typename NumericType>
	const ns_standardType::StandardBoolean NumericObject<NumericType>::operator!=( const ns_standardType::ns_holderType::NumericHolder& value ) const
	{
		return !this->operator==( value );
	}
	

	
	// ‚æ‚è¬‚³‚¢(<)
	template<typename NumericType>
	const ns_standardType::StandardBoolean NumericObject<NumericType>::operator<( const ns_standardType::ns_holderType::NumericHolder& value ) const
	{
		return this->m_value < value;
	}
	

	
	// ‚æ‚è‘å‚«‚¢(>)
	template<typename NumericType>
	const ns_standardType::StandardBoolean NumericObject<NumericType>::operator>( const ns_standardType::ns_holderType::NumericHolder& value ) const
	{
		return this->m_value > value;
	}
	

	
	// ˆÈ‰º(<=)
	template<typename NumericType>
	const ns_standardType::StandardBoolean NumericObject<NumericType>::operator<=( const ns_standardType::ns_holderType::NumericHolder& value ) const
	{
		return this->m_value <= value;
	}
	

	
	// ˆÈã(>=)
	template<typename NumericType>
	const ns_standardType::StandardBoolean NumericObject<NumericType>::operator>=( const ns_standardType::ns_holderType::NumericHolder& value ) const
	{
		return this->m_value >= value;
	}


	
	// ’P€‰‰Zq

	template<typename NumericType>
	const NumericObject<NumericType>& NumericObject<NumericType>::operator+() const
	{
		return *this;
	}



	template<typename NumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator-() const
	{
		return this->negated();
	}



	template<typename NumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator++()
	{
		++this->m_value;

		return *this;
	}



	template<typename NumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator++( int )
	{
		const NumericObject ret = *this;

		this->operator++();

		return ret;
	}



	template<typename NumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator--()
	{
		--this->m_value;

		return *this;
	}



	template<typename NumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator--( int )
	{
		const NumericObject ret = *this;

		this->operator--();

		return ret;
	}



	template<typename NumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator~() const
	{
		return ~this->m_value;
	}



	template<typename NumericType>
	bool NumericObject<NumericType>::operator!() const
	{
		return !this->m_value;
	}

	
		
	// Zp‰‰Zq
	
	// ‰ÁZ(+)
	template<typename NumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator+( const ns_standardType::ns_holderType::NumericHolder& value ) const
	{
		return this->m_value + value;
	}

	
	
	// Œ¸Z(-)
	template<typename NumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator-( const ns_standardType::ns_holderType::NumericHolder& value ) const
	{
		return this->m_value - value;
	}

	
		
	// æZ(*)
	template<typename NumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator*( const ns_standardType::ns_holderType::NumericHolder& value ) const
	{
		return this->m_value * value;
	}

	
		
	// œZ(/)
	template<typename NumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator/( const ns_standardType::ns_holderType::NumericHolder& value ) const
	{
		return this->m_value / value;
	}

	
		
	// è—](%)
	template<typename NumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator%( const ns_standardType::ns_holderType::NumericHolder& value ) const
	{
		return this->m_value % value;
	}


	
	// ˜_—Ï(&)
	template<typename NumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator&( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value ) const
	{
		return this->m_value & value;
	}


	
	// ˜_—˜a(|)
	template<typename NumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator|( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value ) const
	{
		return this->m_value | value;
	}


	
	// ”r‘¼“I˜_—˜a(^)
	template<typename NumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator^( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value ) const
	{
		return this->m_value ^ value;
	}


	
	// ¶ƒVƒtƒg(<<)
	template<typename NumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator<<( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value ) const
	{
		return this->m_value << value;
	}


	
	// ‰EƒVƒtƒg(>>)
	template<typename NumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator>>( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value ) const
	{
		return this->m_value >> value;
	}


	
	// •¡‡‘ã“ü‰‰Zq
		
	// ‰ÁZ‘ã“ü(+=)
	template<typename NumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator+=( const ns_standardType::ns_holderType::NumericHolder& value )
	{
		return this->operator=( this->operator+( value ) );
	}
		


	// Œ¸Z‘ã“ü(-=)
	template<typename NumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator-=( const ns_standardType::ns_holderType::NumericHolder& value )
	{
		return this->operator+=( value.getValue<NumericType>() * -1 );
	}


		
	// æZ‘ã“ü(*=)
	template<typename NumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator*=( const ns_standardType::ns_holderType::NumericHolder& value )
	{
		return this->operator=( this->operator*( value ) );
	}


		
	// œZ‘ã“ü(/=)
	template<typename NumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator/=( const ns_standardType::ns_holderType::NumericHolder& value )
	{
		return this->operator=( this->operator/( value ) );
	}


		
	// è—]‘ã“ü(%=)
	template<typename NumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator%=( const ns_standardType::ns_holderType::NumericHolder& value )
	{
		return this->operator=( this->operator%( value ) );
	}


		
	// ˜_—Ï‘ã“ü(&=)
	template<typename NumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator&=( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value )
	{
		return this->operator=( this->operator&( value ) );
	}


		
	// ˜_—˜a‘ã“ü(|=)
	template<typename NumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator|=( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value )
	{
		return this->operator=( this->operator|( value ) );
	}


		
	// ”r‘¼“I˜_—˜a‘ã“ü(^=)
	template<typename NumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator^=( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value )
	{
		return this->operator=( this->operator^( value ) );
	}


		
	// ¶ƒVƒtƒg‘ã“ü(<<=)
	template<typename NumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator<<=( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value )
	{
		return this->operator=( this->operator<<( value ) );
	}


		
	// ‰EƒVƒtƒg‘ã“ü(>>=)
	template<typename NumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator>>=( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value )
	{
		return this->operator=( this->operator>>( value ) );
	}

	
	
	template<typename OtherNumericType>
	std::istream& operator>>( std::istream& in, NumericObject<OtherNumericType>& other )
	{
		OtherNumericType tmp = 0;

		in >> tmp;

		other = tmp;

		return in;
	}


	
	template<typename NumericType>
	const NumericType& NumericObject<NumericType>::getValue() const
	{
		return this->m_value.getValue();
	}


	
	template<typename NumericType>
	bool NumericObject<NumericType>::toBool() const
	{
		return this->m_value.toBool();
	}


	
	template<typename NumericType>
	char NumericObject<NumericType>::toChar() const
	{
		return this->m_value.toChar();
	}


	
	template<typename NumericType>
	unsigned char NumericObject<NumericType>::toUnsignedChar() const
	{
		return this->m_value.toUnsignedChar();
	}


	
	template<typename NumericType>
	short NumericObject<NumericType>::toShort() const
	{
		return this->m_value.toShort();
	}


	
	template<typename NumericType>
	unsigned short NumericObject<NumericType>::toUnsignedShort() const
	{
		return this->m_value.toUnsignedShort();
	}


	
	template<typename NumericType>
	int NumericObject<NumericType>::toInt() const
	{
		return this->m_value.toInt();
	}


	
	template<typename NumericType>
	unsigned int NumericObject<NumericType>::toUnsignedInt() const
	{
		return this->m_value.toUnsignedInt();
	}


	
	template<typename NumericType>
	long NumericObject<NumericType>::toLong() const
	{
		return this->m_value.toLong();
	}


	
	template<typename NumericType>
	unsigned long NumericObject<NumericType>::toUnsignedLong() const
	{
		return this->m_value.toUnsignedLong();
	}


	
	template<typename NumericType>
	float NumericObject<NumericType>::toFloat() const
	{
		return this->m_value.toFloat();
	}


	
	template<typename NumericType>
	double NumericObject<NumericType>::toDouble() const
	{
		return this->m_value.toDouble();
	}


	
	template<typename NumericType>
	long double NumericObject<NumericType>::toLongDouble() const
	{
		return this->m_value.toLongDouble();
	}



	template<typename NumericType>
	BasicObject::String NumericObject<NumericType>::toString() const
	{
		return ns_stringUtil::numericToString( this->m_value.getValue() );
	}



	template<typename NumericType>
	bool NumericObject<NumericType>::isFloatType() const
	{
		if ( typeid( NumericType ) == typeid( float ) )			{ return true; }

		if ( typeid( NumericType ) == typeid( double ) )		{ return true; }

		if ( typeid( NumericType ) == typeid( long double ) )	{ return true; }



		return false;
	}


	
	template<typename NumericType>
	bool NumericObject<NumericType>::isIntegerType() const
	{
		return !this->isFloatType();
	}



	template<typename NumericType>
	const NumericObject<NumericType>& NumericObject<NumericType>::consoleIn()
	{
		std::cin >> this->m_value;

		return *this;
	}


	
	template<typename NumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::inverse()
	{
		this->m_value = 1 / this->m_value;

		return *this;
	}



	template<typename NumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::inversed() const
	{
		return NumericObject( this->m_value ).inverse();
	}


	
	template<typename NumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::negate()
	{
		this->m_value.negate();

		return *this;
	}



	template<typename NumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::negated() const
	{
		return NumericObject( this->m_value ).negate();
	}


	
	template<typename NumericType>
	void NumericObject<NumericType>::setValue( const NumericType value )
	{
		this->m_value = value;
	}

#include <stdio.h>

	template<typename NumericType>
	BasicObject::String NumericObject<NumericType>::toConsoleOutString() const
	{
		const std::type_info* typeInfo = &typeid( NumericType );
		auto ret = BasicObject::String( typeInfo->name() ) + " : value = " + this->toString();

		if ( *typeInfo == typeid( char ) )
		{
			char buffer[10] = { };

			sprintf_s( buffer, "%c", this->m_value.toInt() );

			ret += BasicObject::String( "('" ) + buffer + "')";
		}

		return ret;
	}

	

	template class NumericObject<char>;
	template class NumericObject<unsigned char>;
	template class NumericObject<short>;
	template class NumericObject<unsigned short>;
	template class NumericObject<int>;
	template class NumericObject<unsigned int>;
	template class NumericObject<long>;
	template class NumericObject<unsigned long>;
	template class NumericObject<float>;
	template class NumericObject<double>;
	template class NumericObject<long double>;



	template std::istream& operator>>( std::istream& in, NumericObject<char>& other );
	template std::istream& operator>>( std::istream& in, NumericObject<unsigned char>& other );
	template std::istream& operator>>( std::istream& in, NumericObject<short>& other );
	template std::istream& operator>>( std::istream& in, NumericObject<unsigned short>& other );
	template std::istream& operator>>( std::istream& in, NumericObject<int>& other );
	template std::istream& operator>>( std::istream& in, NumericObject<unsigned int>& other );
	template std::istream& operator>>( std::istream& in, NumericObject<long>& other );
	template std::istream& operator>>( std::istream& in, NumericObject<unsigned long>& other );
	template std::istream& operator>>( std::istream& in, NumericObject<float>& other );
	template std::istream& operator>>( std::istream& in, NumericObject<double>& other );
	template std::istream& operator>>( std::istream& in, NumericObject<long double>& other );



}	// namespace ns_basicObjectType



}	// namespace ns_typeUtil



}	// namespace ns_myUtility