#ifndef _INCLUDE_GUARD_NUMERICOBJECT_H_
#define _INCLUDE_GUARD_NUMERICOBJECT_H_



#include <BasicObject.h>
#include <StandardNumeric.h>
#include <StandardBoolean.h>

//#include <BaseNumericObject.h>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



namespace ns_basicObjectType
{



	template<typename NumericType>
	class NumericObject : public BasicObject
	{
	public:

		NumericObject();
		
		NumericObject( const NumericObject<NumericType>& other );

		NumericObject( const ns_standardType::ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		NumericObject( const ns_standardType::StandardNumeric<OtherNumericType>& value );
		
		template<typename OtherNumericType>
		NumericObject( const NumericObject<OtherNumericType>& other );


	
		// ŠÖ”ŒÄ‚Ño‚µ‰‰Zq

		NumericObject& operator()( const ns_standardType::ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		NumericObject& operator()( const NumericObject<OtherNumericType>& other );


	
		// ‘ã“ü‰‰Zq

		NumericObject& operator=( const NumericObject<NumericType>& other );

		NumericObject& operator=( const ns_standardType::ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		NumericObject& operator=( const NumericObject<OtherNumericType>& other );



		// ”äŠr‰‰Zq
		
		// “™‰¿(==)
		const ns_standardType::StandardBoolean operator==( const ns_standardType::ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const ns_standardType::StandardBoolean operator==( const NumericObject<OtherNumericType>& other ) const;
		
		// ”ñ“™’l(!=)
		const ns_standardType::StandardBoolean operator!=( const ns_standardType::ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const ns_standardType::StandardBoolean operator!=( const NumericObject<OtherNumericType>& other ) const;
		
		// ‚æ‚è¬‚³‚¢(<)
		const ns_standardType::StandardBoolean operator<( const ns_standardType::ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const ns_standardType::StandardBoolean operator<( const NumericObject<OtherNumericType>& other ) const;
		
		// ‚æ‚è‘å‚«‚¢(>)
		const ns_standardType::StandardBoolean operator>( const ns_standardType::ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const ns_standardType::StandardBoolean operator>( const NumericObject<OtherNumericType>& other ) const;
		
		// ˆÈ‰º(<=)
		const ns_standardType::StandardBoolean operator<=( const ns_standardType::ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const ns_standardType::StandardBoolean operator<=( const NumericObject<OtherNumericType>& other ) const;
		
		// ˆÈã(>=)
		const ns_standardType::StandardBoolean operator>=( const ns_standardType::ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const ns_standardType::StandardBoolean operator>=( const NumericObject<OtherNumericType>& other ) const;



		// ’P€‰‰Zq

		const NumericObject& operator+() const;

		const NumericObject operator-() const;

		NumericObject& operator++();

		const NumericObject operator++( int );

		NumericObject& operator--();

		const NumericObject operator--( int );

		const NumericObject operator~() const;

		bool operator!() const;



		// Zp‰‰Zq

		// ‰ÁZ(+)
		const NumericObject operator+( const ns_standardType::ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const NumericObject operator+( const NumericObject<OtherNumericType>& other ) const;
		
		// Œ¸Z(-)
		const NumericObject operator-( const ns_standardType::ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const NumericObject operator-( const NumericObject<OtherNumericType>& other ) const;
		
		// æZ(*)
		const NumericObject operator*( const ns_standardType::ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const NumericObject operator*( const NumericObject<OtherNumericType>& other ) const;
		
		// œZ(/)
		const NumericObject operator/( const ns_standardType::ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const NumericObject operator/( const NumericObject<OtherNumericType>& other ) const;

		// è—](%)
		const NumericObject operator%( const ns_standardType::ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const NumericObject operator%( const NumericObject<OtherNumericType>& other ) const;

		// ˜_—Ï(&)
		const NumericObject operator&( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value ) const;
		
		template<typename OtherNumericType>
		const NumericObject operator&( const NumericObject<OtherNumericType>& other ) const;

		// ˜_—˜a(|)
		const NumericObject operator|( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value ) const;
		
		template<typename OtherNumericType>
		const NumericObject operator|( const NumericObject<OtherNumericType>& other ) const;

		// ”r‘¼“I˜_—˜a(^)
		const NumericObject operator^( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value ) const;
		
		template<typename OtherNumericType>
		const NumericObject operator^( const NumericObject<OtherNumericType>& other ) const;

		// ¶ƒVƒtƒg(<<)
		const NumericObject operator<<( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value ) const;
		
		template<typename OtherNumericType>
		const NumericObject operator<<( const NumericObject<OtherNumericType>& other ) const;

		// ‰EƒVƒtƒg(>>)
		const NumericObject operator>>( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value ) const;
		
		template<typename OtherNumericType>
		const NumericObject operator>>( const NumericObject<OtherNumericType>& other ) const;


		
		// •¡‡‘ã“ü‰‰Zq
		
		// ‰ÁZ‘ã“ü(+=)
		NumericObject& operator+=( const ns_standardType::ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		NumericObject& operator+=( const NumericObject<OtherNumericType>& other );

		// Œ¸Z‘ã“ü(-=)
		NumericObject& operator-=( const ns_standardType::ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		NumericObject& operator-=( const NumericObject<OtherNumericType>& other );

		// æZ‘ã“ü(*=)
		NumericObject& operator*=( const ns_standardType::ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		NumericObject& operator*=( const NumericObject<OtherNumericType>& other );

		// œZ‘ã“ü(/=)
		NumericObject& operator/=( const ns_standardType::ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		NumericObject& operator/=( const NumericObject<OtherNumericType>& other );

		// è—]‘ã“ü(%=)
		NumericObject& operator%=( const ns_standardType::ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		NumericObject& operator%=( const NumericObject<OtherNumericType>& other );
		
		// ˜_—Ï‘ã“ü(&=)
		NumericObject& operator&=( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value );
		
		template<typename OtherNumericType>
		NumericObject& operator&=( const NumericObject<OtherNumericType>& other );
		
		// ˜_—˜a‘ã“ü(|=)
		NumericObject& operator|=( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value );
		
		template<typename OtherNumericType>
		NumericObject& operator|=( const NumericObject<OtherNumericType>& other );
		
		// ”r‘¼“I˜_—˜a‘ã“ü(^=)
		NumericObject& operator^=( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value );
		
		template<typename OtherNumericType>
		NumericObject& operator^=( const NumericObject<OtherNumericType>& other );
		
		// ¶ƒVƒtƒg‘ã“ü(<<=)
		NumericObject& operator<<=( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value );
		
		template<typename OtherNumericType>
		NumericObject& operator<<=( const NumericObject<OtherNumericType>& other );
		
		// ‰EƒVƒtƒg‘ã“ü(>>=)
		NumericObject& operator>>=( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value );
		
		template<typename OtherNumericType>
		NumericObject& operator>>=( const NumericObject<OtherNumericType>& other );


		
		// “ü—Í‰‰Zq
		template<typename OtherNumericType>
		friend std::istream& operator>>( std::istream& in, NumericObject<OtherNumericType>& other );

		

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



		virtual BasicObject::String toString() const override;

		

		bool isFloatType() const;

		bool isIntegerType() const;



		const NumericObject& consoleIn();



		NumericObject& inverse();

		const NumericObject inversed() const;

		NumericObject& negate();

		const NumericObject negated() const;

	protected:

		virtual void setValue( const NumericType value );

		virtual BasicObject::String toConsoleOutString() const override;

	private:

		ns_standardType::StandardNumeric<NumericType> m_value;
	};


/*
	using StandardSignedChar			= NumericObject<char, BooleanObject>;

	using StandardUnignedChar			= NumericObject<unsigned char, BooleanObject>;

	using StandardSignedShortInteger	= NumericObject<short, BooleanObject>;

	using StandardUnsignedShortInteger	= NumericObject<unsigned short, BooleanObject>;

	using StandardSignedInteger			= NumericObject<int, BooleanObject>;

	using StandardUnsignedInteger		= NumericObject<unsigned int, BooleanObject>;

	using StandardSignedLongInteger		= NumericObject<long, BooleanObject>;

	using StandardUnsignedLongInteger	= NumericObject<unsigned long, BooleanObject>;

	using StandardFloat					= NumericObject<float, BooleanObject>;

	using StandardDouble				= NumericObject<double, BooleanObject>;

	using StandardLongDouble			= NumericObject<long double, BooleanObject>;
*/


	template<typename NumericType>
	template<typename OtherNumericType>
	NumericObject<NumericType>::NumericObject( const ns_standardType::StandardNumeric<OtherNumericType>& value ) :
		m_value()
	{
		this->setValue( value.getValue() );
	}



	template<typename NumericType>
	template<typename OtherNumericType>
	NumericObject<NumericType>::NumericObject( const NumericObject<OtherNumericType>& other ) :
		m_value()
	{
		this->setValue( other.getValue() );
	}



	template<typename NumericType>
	template<typename OtherNumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator()( const NumericObject<OtherNumericType>& other )
	{
		this->setValue( other.toNumeric<NumericType>() );

		return *this;
	}



	template<typename NumericType>
	template<typename OtherNumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator=( const NumericObject<OtherNumericType>& other )
	{
		return this->operator()( other );
	}


	
	// ”äŠr‰‰Zq
	
	// “™‰¿(==)
	template<typename NumericType>
	template<typename OtherNumericType>
	const ns_standardType::StandardBoolean NumericObject<NumericType>::operator==( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator==( other.getValue<OtherNumericType>() );
	}


	
	// ”ñ“™’l(!=)
	template<typename NumericType>
	template<typename OtherNumericType>
	const ns_standardType::StandardBoolean NumericObject<NumericType>::operator!=( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator!=( other.getValue<OtherNumericType>() );
	}


	
	// ‚æ‚è¬‚³‚¢(<)
	template<typename NumericType>
	template<typename OtherNumericType>
	const ns_standardType::StandardBoolean NumericObject<NumericType>::operator<( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator<( other.getValue<OtherNumericType>() );
	}


	
	// ‚æ‚è‘å‚«‚¢(>)
	template<typename NumericType>
	template<typename OtherNumericType>
	const ns_standardType::StandardBoolean NumericObject<NumericType>::operator>( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator>( other.getValue<OtherNumericType>() );
	}


	
	// ˆÈ‰º(<=)
	template<typename NumericType>
	template<typename OtherNumericType>
	const ns_standardType::StandardBoolean NumericObject<NumericType>::operator<=( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator<=( other.getValue<OtherNumericType>() );
	}


	
	// ˆÈã(>=)
	template<typename NumericType>
	template<typename OtherNumericType>
	const ns_standardType::StandardBoolean NumericObject<NumericType>::operator>=( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator>=( other.getValue<OtherNumericType>() );
	}


	
	// Zp‰‰Zq
	

	// ‰ÁZ(+)
	template<typename NumericType>
	template<typename OtherNumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator+( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator+( other.getValue<OtherNumericType>() );
	}


	
	
	// Œ¸Z(-)
	template<typename NumericType>
	template<typename OtherNumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator-( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator+( other.negated() );
	}


	
	// æZ(*)
	template<typename NumericType>
	template<typename OtherNumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator*( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator*( other.getValue<OtherNumericType>() );
	}


	
	// œZ(/)
	template<typename NumericType>
	template<typename OtherNumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator/( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator/( other.getValue<OtherNumericType>() );
	}


	
	// è—](%)
	template<typename NumericType>
	template<typename OtherNumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator%( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator%( other.getValue<OtherNumericType>() );
	}


	
	// ˜_—Ï(&)
	template<typename NumericType>
	template<typename OtherNumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator&( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator&( other.getValue<ns_standardType::ns_holderType::LargestSignedIntegerDataType>() );
	}


	
	// ˜_—˜a(|)
	template<typename NumericType>
	template<typename OtherNumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator|( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator|( other.getValue<ns_standardType::ns_holderType::LargestSignedIntegerDataType>() );
	}


	
	// ”r‘¼“I˜_—˜a(^)
	template<typename NumericType>
	template<typename OtherNumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator^( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator^( other.getValue<ns_standardType::ns_holderType::LargestSignedIntegerDataType>() );
	}


	
	// ¶ƒVƒtƒg(<<)
	template<typename NumericType>
	template<typename OtherNumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator<<( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator<<( other.getValue<ns_standardType::ns_holderType::LargestSignedIntegerDataType>() );
	}


	
	// ‰EƒVƒtƒg(>>)
	template<typename NumericType>
	template<typename OtherNumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator>>( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator>>( other.getValue<ns_standardType::ns_holderType::LargestSignedIntegerDataType>() );
	}


	
	// •¡‡‘ã“ü‰‰Zq
	
	// ‰ÁZ‘ã“ü(+=)
	template<typename NumericType>
	template<typename OtherNumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator+=( const NumericObject<OtherNumericType>& other )
	{
		return this->operator+=( other.getValue<OtherNumericType>() );
	}
	

	
	// Œ¸Z‘ã“ü(-=)
	template<typename NumericType>
	template<typename OtherNumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator-=( const NumericObject<OtherNumericType>& other )
	{
		return this->operator-=( other.getValue<OtherNumericType>() );
	}
	

	
	// æZ‘ã“ü(*=)
	template<typename NumericType>
	template<typename OtherNumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator*=( const NumericObject<OtherNumericType>& other )
	{
		return this->operator*=( other.getValue<OtherNumericType>() );
	}
	

	
	// œZ‘ã“ü(/=)
	template<typename NumericType>
	template<typename OtherNumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator/=( const NumericObject<OtherNumericType>& other )
	{
		return this->operator/=( other.getValue<OtherNumericType>() );
	}
	

	
	// è—]‘ã“ü(%=)
	template<typename NumericType>
	template<typename OtherNumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator%=( const NumericObject<OtherNumericType>& other )
	{
		return this->operator%=( other.getValue<OtherNumericType>() );
	}
	

	
	// ˜_—Ï‘ã“ü(&=)
	template<typename NumericType>
	template<typename OtherNumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator&=( const NumericObject<OtherNumericType>& other )
	{
		return this->operator&=( other.getValue<ns_standardType::ns_holderType::LargestSignedIntegerDataType>() );
	}
	

	
	// ˜_—˜a‘ã“ü(|=)
	template<typename NumericType>
	template<typename OtherNumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator|=( const NumericObject<OtherNumericType>& other )
	{
		return this->operator|=( other.getValue<ns_standardType::ns_holderType::LargestSignedIntegerDataType>() );
	}
	

	
	// ”r‘¼“I˜_—˜a‘ã“ü(^=)
	template<typename NumericType>
	template<typename OtherNumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator^=( const NumericObject<OtherNumericType>& other )
	{
		return this->operator^=( other.getValue<ns_standardType::ns_holderType::LargestSignedIntegerDataType>() );
	}
	

	
	// ¶ƒVƒtƒg‘ã“ü(<<=)
	template<typename NumericType>
	template<typename OtherNumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator<<=( const NumericObject<OtherNumericType>& other )
	{
		return this->operator<<=( other.getValue<ns_standardType::ns_holderType::LargestSignedIntegerDataType>() );
	}
	

	
	// ‰EƒVƒtƒg‘ã“ü(>>=)
	template<typename NumericType>
	template<typename OtherNumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator>>=( const NumericObject<OtherNumericType>& other )
	{
		return this->operator>>=( other.getValue<ns_standardType::ns_holderType::LargestSignedIntegerDataType>() );
	}



	template<typename NumericType>
	template<typename OtherNumericType>
	OtherNumericType NumericObject<NumericType>::toNumeric() const
	{
		return this->m_value.toNumeric<OtherNumericType>();
	}



}	// namespace ns_basicObjectType



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_NUMERICOBJECT_H_