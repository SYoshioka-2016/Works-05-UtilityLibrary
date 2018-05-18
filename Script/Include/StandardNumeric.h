#ifndef _INCLUDE_GUARD_STANDARDNUMERIC_H_
#define _INCLUDE_GUARD_STANDARDNUMERIC_H_



#include <NumericHolder.h>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



namespace ns_standardType
{



	template<typename NumericType>
	class StandardNumeric
	{
	public:

		StandardNumeric();

		StandardNumeric( const ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		StandardNumeric( const StandardNumeric<OtherNumericType>& other );


	
		// ‘ã“ü‰‰Zq

		StandardNumeric& operator=( const ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		StandardNumeric& operator=( const StandardNumeric<OtherNumericType>& other );


	
		// ŠÖ”ŒÄ‚Ño‚µ‰‰Zq

		StandardNumeric& operator()( const ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		StandardNumeric& operator()( const StandardNumeric<OtherNumericType>& other );



		// ”äŠr‰‰Zq
		
		// “™‰¿(==)
		bool operator==( const ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		bool operator==( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend bool operator==( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other );
		
		// ”ñ“™’l(!=)
		bool operator!=( const ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		bool operator!=( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend bool operator!=( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other );
		
		// ‚æ‚è¬‚³‚¢(<)
		bool operator<( const ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		bool operator<( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend bool operator<( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other );
		
		// ‚æ‚è‘å‚«‚¢(>)
		bool operator>( const ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		bool operator>( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend bool operator>( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other );
		
		// ˆÈ‰º(<=)
		bool operator<=( const ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		bool operator<=( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend bool operator<=( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other );
		
		// ˆÈã(>=)
		bool operator>=( const ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		bool operator>=( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend bool operator>=( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other );




		// ’P€‰‰Zq

		const StandardNumeric& operator+() const;

		const StandardNumeric operator-() const;

		StandardNumeric& operator++();

		const StandardNumeric operator++( int );

		StandardNumeric& operator--();

		const StandardNumeric operator--( int );

		const StandardNumeric operator~() const;

		bool operator!() const;



		// Zp‰‰Zq

		// ‰ÁZ(+)
		const StandardNumeric operator+( const ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const StandardNumeric operator+( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend const StandardNumeric<ns_holderType::LargestFloatDataType> operator+( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other );
		
		// Œ¸Z(-)
		const StandardNumeric operator-( const ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const StandardNumeric operator-( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend const StandardNumeric<ns_holderType::LargestFloatDataType> operator-( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other );
		
		// æZ(*)
		const StandardNumeric operator*( const ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const StandardNumeric operator*( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend const StandardNumeric<ns_holderType::LargestFloatDataType> operator*( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other );
		
		// œZ(/)
		const StandardNumeric operator/( const ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const StandardNumeric operator/( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend const StandardNumeric<ns_holderType::LargestFloatDataType> operator/( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other );
		
		// è—](%)
		const StandardNumeric operator%( const ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const StandardNumeric operator%( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend const StandardNumeric<ns_holderType::LargestFloatDataType> operator%( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other );
		
		// ˜_—Ï(&)
		const StandardNumeric operator&( const ns_holderType::LargestSignedIntegerDataType value ) const;
		
		template<typename OtherNumericType>
		const StandardNumeric operator&( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator&( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<OtherNumericType>& other );

		// ˜_—˜a(|)
		const StandardNumeric operator|( const ns_holderType::LargestSignedIntegerDataType value ) const;
		
		template<typename OtherNumericType>
		const StandardNumeric operator|( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator|( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<OtherNumericType>& other );
		
		// ”r‘¼“I˜_—˜a(^)
		const StandardNumeric operator^( const ns_holderType::LargestSignedIntegerDataType value ) const;
		
		template<typename OtherNumericType>
		const StandardNumeric operator^( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator^( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<OtherNumericType>& other );
		
		// ¶ƒVƒtƒg(<<)
		const StandardNumeric operator<<( const ns_holderType::LargestSignedIntegerDataType value ) const;
		
		template<typename OtherNumericType>
		const StandardNumeric operator<<( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator<<( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<OtherNumericType>& other );
		
		// ‰EƒVƒtƒg(>>)
		const StandardNumeric operator>>( const ns_holderType::LargestSignedIntegerDataType value ) const;
		
		template<typename OtherNumericType>
		const StandardNumeric operator>>( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator>>( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<OtherNumericType>& other );


		
		// •¡‡‘ã“ü‰‰Zq
		
		// ‰ÁZ‘ã“ü(+=)
		StandardNumeric& operator+=( const ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		StandardNumeric& operator+=( const StandardNumeric<OtherNumericType>& other );
		
		template<typename OtherNumericType1, typename OtherNumericType2>
		friend OtherNumericType1& operator+=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other );
		
		// Œ¸Z‘ã“ü(-=)
		StandardNumeric& operator-=( const ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		StandardNumeric& operator-=( const StandardNumeric<OtherNumericType>& other );
		
		template<typename OtherNumericType1, typename OtherNumericType2>
		friend OtherNumericType1& operator-=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other );
		
		// æZ‘ã“ü(*=)
		StandardNumeric& operator*=( const ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		StandardNumeric& operator*=( const StandardNumeric<OtherNumericType>& other );
		
		template<typename OtherNumericType1, typename OtherNumericType2>
		friend OtherNumericType1& operator*=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other );
		
		// œZ‘ã“ü(/=)
		StandardNumeric& operator/=( const ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		StandardNumeric& operator/=( const StandardNumeric<OtherNumericType>& other );
		
		template<typename OtherNumericType1, typename OtherNumericType2>
		friend OtherNumericType1& operator/=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other );
		
		// è—]‘ã“ü(%=)
		StandardNumeric& operator%=( const ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		StandardNumeric& operator%=( const StandardNumeric<OtherNumericType>& other );
		
		template<typename OtherNumericType1, typename OtherNumericType2>
		friend OtherNumericType1& operator%=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other );
		
		// ˜_—Ï‘ã“ü(&=)
		StandardNumeric& operator&=( const ns_holderType::LargestSignedIntegerDataType value );
		
		template<typename OtherNumericType>
		StandardNumeric& operator&=( const StandardNumeric<OtherNumericType>& other );
		
		template<typename OtherNumericType1, typename OtherNumericType2>
		friend OtherNumericType1& operator&=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other );
		
		// ˜_—˜a‘ã“ü(|=)
		StandardNumeric& operator|=( const ns_holderType::LargestSignedIntegerDataType value );
		
		template<typename OtherNumericType>
		StandardNumeric& operator|=( const StandardNumeric<OtherNumericType>& other );
		
		template<typename OtherNumericType1, typename OtherNumericType2>
		friend OtherNumericType1& operator|=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other );
		
		// ”r‘¼“I˜_—˜a‘ã“ü(^=)
		StandardNumeric& operator^=( const ns_holderType::LargestSignedIntegerDataType value );
		
		template<typename OtherNumericType>
		StandardNumeric& operator^=( const StandardNumeric<OtherNumericType>& other );
		
		template<typename OtherNumericType1, typename OtherNumericType2>
		friend OtherNumericType1& operator^=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other );
		
		// ¶ƒVƒtƒg‘ã“ü(<<=)
		StandardNumeric& operator<<=( const ns_holderType::LargestSignedIntegerDataType value );
		
		template<typename OtherNumericType>
		StandardNumeric& operator<<=( const StandardNumeric<OtherNumericType>& other );
		
		template<typename OtherNumericType1, typename OtherNumericType2>
		friend OtherNumericType1& operator<<=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other );
		
		// ‰EƒVƒtƒg‘ã“ü(>>=)
		StandardNumeric& operator>>=( const ns_holderType::LargestSignedIntegerDataType value );
		
		template<typename OtherNumericType>
		StandardNumeric& operator>>=( const StandardNumeric<OtherNumericType>& other );
		
		template<typename OtherNumericType1, typename OtherNumericType2>
		friend OtherNumericType1& operator>>=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other );


		
		// “ü—Í‰‰Zq
		template<typename OtherNumericType>
		friend std::istream& operator>>( std::istream& in, StandardNumeric<OtherNumericType>& other );
		
		// o—Í‰‰Zq
		template<typename OtherNumericType>
		friend std::ostream& operator<<( std::ostream& out, const StandardNumeric<OtherNumericType>& other );
		
		

		const NumericType& getValue() const;

		template<typename OtherNumericType = NumericType>
		OtherNumericType toNumeric() const;
		
		bool toBool() const;
		
		char toChar() const;

		unsigned char toUnsignedChar() const;
		
		short toShort() const;

		unsigned short toUnsignedShort() const;
		
		int toInt() const;

		unsigned int toUnsignedInt() const;
		
		long toLong() const;

		unsigned long toUnsignedLong() const;

		float toFloat() const;

		double toDouble() const;

		long double toLongDouble() const;

		

		bool isFloatType() const;

		bool isIntegerType() const;



		const StandardNumeric& consoleIn();

		const StandardNumeric& consoleOut() const;



		StandardNumeric& inverse();

		const StandardNumeric inversed() const;

		StandardNumeric& negate();

		const StandardNumeric negated() const;

	private:

		const ns_holderType::NumericHolder toNumericHolder() const;

	private:

		NumericType m_value;
	};



	using StandardSignedChar			= StandardNumeric<char>;

	using StandardUnignedChar			= StandardNumeric<unsigned char>;

	using StandardSignedShortInteger	= StandardNumeric<short>;

	using StandardUnsignedShortInteger	= StandardNumeric<unsigned short>;

	using StandardSignedInteger			= StandardNumeric<int>;

	using StandardUnsignedInteger		= StandardNumeric<unsigned int>;

	using StandardSignedLongInteger		= StandardNumeric<long>;

	using StandardUnsignedLongInteger	= StandardNumeric<unsigned long>;

	using StandardFloat					= StandardNumeric<float>;

	using StandardDouble				= StandardNumeric<double>;

	using StandardLongDouble			= StandardNumeric<long double>;



	template<typename NumericType>
	template<typename OtherNumericType>
	StandardNumeric<NumericType>::StandardNumeric( const StandardNumeric<OtherNumericType>& other ) :
		StandardNumeric( other.getValue() )
	{

	}



	template<typename NumericType>
	template<typename OtherNumericType>
	StandardNumeric<NumericType>& StandardNumeric<NumericType>::operator=( const StandardNumeric<OtherNumericType>& other )
	{
		return this->operator=( other.toNumeric<OtherNumericType>() );
	}



	template<typename NumericType>
	template<typename OtherNumericType>
	StandardNumeric<NumericType>& StandardNumeric<NumericType>::operator()( const StandardNumeric<OtherNumericType>& other )
	{
		return this->operator()( other.getValue<OtherNumericType>() );
	}


	
	// ”äŠr‰‰Zq
	
	// “™‰¿(==)
	template<typename NumericType>
	template<typename OtherNumericType>
	bool StandardNumeric<NumericType>::operator==( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator==( other.getValue<OtherNumericType>() );
	}


	
	// ”ñ“™’l(!=)
	template<typename NumericType>
	template<typename OtherNumericType>
	bool StandardNumeric<NumericType>::operator!=( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator!=( other.getValue<OtherNumericType>() );
	}


	
	// ‚æ‚è¬‚³‚¢(<)
	template<typename NumericType>
	template<typename OtherNumericType>
	bool StandardNumeric<NumericType>::operator<( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator<( other.getValue<OtherNumericType>() );
	}


	
	// ‚æ‚è‘å‚«‚¢(>)
	template<typename NumericType>
	template<typename OtherNumericType>
	bool StandardNumeric<NumericType>::operator>( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator>( other.getValue<OtherNumericType>() );
	}


	
	// ˆÈ‰º(<=)
	template<typename NumericType>
	template<typename OtherNumericType>
	bool StandardNumeric<NumericType>::operator<=( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator<=( other.getValue<OtherNumericType>() );
	}


	
	// ˆÈã(>=)
	template<typename NumericType>
	template<typename OtherNumericType>
	bool StandardNumeric<NumericType>::operator>=( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator>=( other.getValue<OtherNumericType>() );
	}


	
	// Zp‰‰Zq
	

	// ‰ÁZ(+)
	template<typename NumericType>
	template<typename OtherNumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator+( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator+( other.getValue<OtherNumericType>() );
	}


	
	// Œ¸Z(-)
	template<typename NumericType>
	template<typename OtherNumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator-( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator+( other.negated() );
	}


	
	// æZ(*)
	template<typename NumericType>
	template<typename OtherNumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator*( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator*( other.getValue<OtherNumericType>() );
	}


	
	// œZ(/)
	template<typename NumericType>
	template<typename OtherNumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator/( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator/( other.getValue<OtherNumericType>() );
	}


	
	// è—](%)
	template<typename NumericType>
	template<typename OtherNumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator%( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator%( other.getValue<OtherNumericType>() );
	}


	
	// ˜_—Ï(&)
	template<typename NumericType>
	template<typename OtherNumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator&( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator&( other.getValue<ns_holderType::LargestSignedIntegerDataType>() );
	}


	
	// ˜_—˜a(|)
	template<typename NumericType>
	template<typename OtherNumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator|( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator|( other.getValue<ns_holderType::LargestSignedIntegerDataType>() );
	}


	
	// ”r‘¼“I˜_—˜a(^)
	template<typename NumericType>
	template<typename OtherNumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator^( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator^( other.getValue<ns_holderType::LargestSignedIntegerDataType>() );
	}


	
	// ¶ƒVƒtƒg(<<)
	template<typename NumericType>
	template<typename OtherNumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator<<( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator<<( other.getValue<ns_holderType::LargestSignedIntegerDataType>() );
	}


	
	// ‰EƒVƒtƒg(>>)
	template<typename NumericType>
	template<typename OtherNumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator>>( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator>>( other.getValue<ns_holderType::LargestSignedIntegerDataType>() );
	}


	
	// •¡‡‘ã“ü‰‰Zq
	
	// ‰ÁZ‘ã“ü(+=)
	template<typename NumericType>
	template<typename OtherNumericType>
	StandardNumeric<NumericType>& StandardNumeric<NumericType>::operator+=( const StandardNumeric<OtherNumericType>& other )
	{
		return this->operator+=( other.getValue<OtherNumericType>() );
	}
	

	
	template<typename OtherNumericType1, typename OtherNumericType2>
	OtherNumericType1& operator+=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other )
	{
		return value += other.getValue<OtherNumericType1>();
	}
	

	
	// Œ¸Z‘ã“ü(-=)
	template<typename NumericType>
	template<typename OtherNumericType>
	StandardNumeric<NumericType>& StandardNumeric<NumericType>::operator-=( const StandardNumeric<OtherNumericType>& other )
	{
		return this->operator-=( other.getValue<OtherNumericType>() );
	}
	
	

	template<typename OtherNumericType1, typename OtherNumericType2>
	OtherNumericType1& operator-=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other )
	{
		return value -= other.getValue<OtherNumericType1>();
	}
	

	
	// æZ‘ã“ü(*=)
	template<typename NumericType>
	template<typename OtherNumericType>
	StandardNumeric<NumericType>& StandardNumeric<NumericType>::operator*=( const StandardNumeric<OtherNumericType>& other )
	{
		return this->operator*=( other.getValue<OtherNumericType>() );
	}
	
	

	template<typename OtherNumericType1, typename OtherNumericType2>
	OtherNumericType1& operator*=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other )
	{
		return value *= other.getValue<OtherNumericType1>();
	}
	

	
	// œZ‘ã“ü(/=)
	template<typename NumericType>
	template<typename OtherNumericType>
	StandardNumeric<NumericType>& StandardNumeric<NumericType>::operator/=( const StandardNumeric<OtherNumericType>& other )
	{
		return this->operator/=( other.getValue<OtherNumericType>() );
	}
	
	

	template<typename OtherNumericType1, typename OtherNumericType2>
	OtherNumericType1& operator/=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other )
	{
		return value /= other.getValue<OtherNumericType1>();
	}
	

	
	// è—]‘ã“ü(%=)
	template<typename NumericType>
	template<typename OtherNumericType>
	StandardNumeric<NumericType>& StandardNumeric<NumericType>::operator%=( const StandardNumeric<OtherNumericType>& other )
	{
		return this->operator%=( other.getValue<OtherNumericType>() );
	}
	
	

	template<typename OtherNumericType1, typename OtherNumericType2>
	OtherNumericType1& operator%=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other )
	{
		return value %= other.getValue<OtherNumericType1>();
	}
	

	
	// ˜_—Ï‘ã“ü(&=)
	template<typename NumericType>
	template<typename OtherNumericType>
	StandardNumeric<NumericType>& StandardNumeric<NumericType>::operator&=( const StandardNumeric<OtherNumericType>& other )
	{
		return this->operator&=( other.getValue<ns_holderType::LargestSignedIntegerDataType>() );
	}
	
	

	template<typename OtherNumericType1, typename OtherNumericType2>
	OtherNumericType1& operator&=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other )
	{
		return value &= other.getValue<OtherNumericType1>();
	}
	

	
	// ˜_—˜a‘ã“ü(|=)
	template<typename NumericType>
	template<typename OtherNumericType>
	StandardNumeric<NumericType>& StandardNumeric<NumericType>::operator|=( const StandardNumeric<OtherNumericType>& other )
	{
		return this->operator|=( other.getValue<ns_holderType::LargestSignedIntegerDataType>() );
	}
	
	

	template<typename OtherNumericType1, typename OtherNumericType2>
	OtherNumericType1& operator|=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other )
	{
		return value |= other.getValue<OtherNumericType1>();
	}
	

	
	// ”r‘¼“I˜_—˜a‘ã“ü(^=)
	template<typename NumericType>
	template<typename OtherNumericType>
	StandardNumeric<NumericType>& StandardNumeric<NumericType>::operator^=( const StandardNumeric<OtherNumericType>& other )
	{
		return this->operator^=( other.getValue<ns_holderType::LargestSignedIntegerDataType>() );
	}
	
	

	template<typename OtherNumericType1, typename OtherNumericType2>
	OtherNumericType1& operator^=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other )
	{
		return value ^= other.getValue<OtherNumericType1>();
	}
	

	
	// ¶ƒVƒtƒg‘ã“ü(<<=)
	template<typename NumericType>
	template<typename OtherNumericType>
	StandardNumeric<NumericType>& StandardNumeric<NumericType>::operator<<=( const StandardNumeric<OtherNumericType>& other )
	{
		return this->operator<<=( other.getValue<ns_holderType::LargestSignedIntegerDataType>() );
	}
	
	

	template<typename OtherNumericType1, typename OtherNumericType2>
	OtherNumericType1& operator<<=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other )
	{
		return value <<= other.getValue<OtherNumericType1>();
	}
	

	
	// ‰EƒVƒtƒg‘ã“ü(>>=)
	template<typename NumericType>
	template<typename OtherNumericType>
	StandardNumeric<NumericType>& StandardNumeric<NumericType>::operator>>=( const StandardNumeric<OtherNumericType>& other )
	{
		return this->operator>>=( other.getValue<ns_holderType::LargestSignedIntegerDataType>() );
	}
	
	

	template<typename OtherNumericType1, typename OtherNumericType2>
	OtherNumericType1& operator>>=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other )
	{
		return value >>= other.getValue<OtherNumericType1>();
	}



	template<typename NumericType>
	template<typename OtherNumericType>
	OtherNumericType StandardNumeric<NumericType>::toNumeric() const
	{
		return static_cast<OtherNumericType>( this->m_value );
	}



}	// namespace ns_standardType



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_STANDARDNUMERIC_H_