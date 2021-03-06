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


	
		// 関数呼び出し演算子

		NumericObject& operator()( const ns_standardType::ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		NumericObject& operator()( const NumericObject<OtherNumericType>& other );


	
		// 代入演算子

		NumericObject& operator=( const NumericObject<NumericType>& other );

		NumericObject& operator=( const ns_standardType::ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		NumericObject& operator=( const NumericObject<OtherNumericType>& other );



		// 比較演算子
		
		// 等価(==)
		const ns_standardType::StandardBoolean operator==( const ns_standardType::ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const ns_standardType::StandardBoolean operator==( const NumericObject<OtherNumericType>& other ) const;
		
		// 非等値(!=)
		const ns_standardType::StandardBoolean operator!=( const ns_standardType::ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const ns_standardType::StandardBoolean operator!=( const NumericObject<OtherNumericType>& other ) const;
		
		// より小さい(<)
		const ns_standardType::StandardBoolean operator<( const ns_standardType::ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const ns_standardType::StandardBoolean operator<( const NumericObject<OtherNumericType>& other ) const;
		
		// より大きい(>)
		const ns_standardType::StandardBoolean operator>( const ns_standardType::ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const ns_standardType::StandardBoolean operator>( const NumericObject<OtherNumericType>& other ) const;
		
		// 以下(<=)
		const ns_standardType::StandardBoolean operator<=( const ns_standardType::ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const ns_standardType::StandardBoolean operator<=( const NumericObject<OtherNumericType>& other ) const;
		
		// 以上(>=)
		const ns_standardType::StandardBoolean operator>=( const ns_standardType::ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const ns_standardType::StandardBoolean operator>=( const NumericObject<OtherNumericType>& other ) const;



		// 単項演算子

		const NumericObject& operator+() const;

		const NumericObject operator-() const;

		NumericObject& operator++();

		const NumericObject operator++( int );

		NumericObject& operator--();

		const NumericObject operator--( int );

		const NumericObject operator~() const;

		bool operator!() const;



		// 算術演算子

		// 加算(+)
		const NumericObject operator+( const ns_standardType::ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const NumericObject operator+( const NumericObject<OtherNumericType>& other ) const;
		
		// 減算(-)
		const NumericObject operator-( const ns_standardType::ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const NumericObject operator-( const NumericObject<OtherNumericType>& other ) const;
		
		// 乗算(*)
		const NumericObject operator*( const ns_standardType::ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const NumericObject operator*( const NumericObject<OtherNumericType>& other ) const;
		
		// 除算(/)
		const NumericObject operator/( const ns_standardType::ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const NumericObject operator/( const NumericObject<OtherNumericType>& other ) const;

		// 剰余(%)
		const NumericObject operator%( const ns_standardType::ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const NumericObject operator%( const NumericObject<OtherNumericType>& other ) const;

		// 論理積(&)
		const NumericObject operator&( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value ) const;
		
		template<typename OtherNumericType>
		const NumericObject operator&( const NumericObject<OtherNumericType>& other ) const;

		// 論理和(|)
		const NumericObject operator|( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value ) const;
		
		template<typename OtherNumericType>
		const NumericObject operator|( const NumericObject<OtherNumericType>& other ) const;

		// 排他的論理和(^)
		const NumericObject operator^( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value ) const;
		
		template<typename OtherNumericType>
		const NumericObject operator^( const NumericObject<OtherNumericType>& other ) const;

		// 左シフト(<<)
		const NumericObject operator<<( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value ) const;
		
		template<typename OtherNumericType>
		const NumericObject operator<<( const NumericObject<OtherNumericType>& other ) const;

		// 右シフト(>>)
		const NumericObject operator>>( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value ) const;
		
		template<typename OtherNumericType>
		const NumericObject operator>>( const NumericObject<OtherNumericType>& other ) const;


		
		// 複合代入演算子
		
		// 加算代入(+=)
		NumericObject& operator+=( const ns_standardType::ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		NumericObject& operator+=( const NumericObject<OtherNumericType>& other );

		// 減算代入(-=)
		NumericObject& operator-=( const ns_standardType::ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		NumericObject& operator-=( const NumericObject<OtherNumericType>& other );

		// 乗算代入(*=)
		NumericObject& operator*=( const ns_standardType::ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		NumericObject& operator*=( const NumericObject<OtherNumericType>& other );

		// 除算代入(/=)
		NumericObject& operator/=( const ns_standardType::ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		NumericObject& operator/=( const NumericObject<OtherNumericType>& other );

		// 剰余代入(%=)
		NumericObject& operator%=( const ns_standardType::ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		NumericObject& operator%=( const NumericObject<OtherNumericType>& other );
		
		// 論理積代入(&=)
		NumericObject& operator&=( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value );
		
		template<typename OtherNumericType>
		NumericObject& operator&=( const NumericObject<OtherNumericType>& other );
		
		// 論理和代入(|=)
		NumericObject& operator|=( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value );
		
		template<typename OtherNumericType>
		NumericObject& operator|=( const NumericObject<OtherNumericType>& other );
		
		// 排他的論理和代入(^=)
		NumericObject& operator^=( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value );
		
		template<typename OtherNumericType>
		NumericObject& operator^=( const NumericObject<OtherNumericType>& other );
		
		// 左シフト代入(<<=)
		NumericObject& operator<<=( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value );
		
		template<typename OtherNumericType>
		NumericObject& operator<<=( const NumericObject<OtherNumericType>& other );
		
		// 右シフト代入(>>=)
		NumericObject& operator>>=( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value );
		
		template<typename OtherNumericType>
		NumericObject& operator>>=( const NumericObject<OtherNumericType>& other );


		
		// 入力演算子
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


	
	// 比較演算子
	
	// 等価(==)
	template<typename NumericType>
	template<typename OtherNumericType>
	const ns_standardType::StandardBoolean NumericObject<NumericType>::operator==( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator==( other.getValue<OtherNumericType>() );
	}


	
	// 非等値(!=)
	template<typename NumericType>
	template<typename OtherNumericType>
	const ns_standardType::StandardBoolean NumericObject<NumericType>::operator!=( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator!=( other.getValue<OtherNumericType>() );
	}


	
	// より小さい(<)
	template<typename NumericType>
	template<typename OtherNumericType>
	const ns_standardType::StandardBoolean NumericObject<NumericType>::operator<( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator<( other.getValue<OtherNumericType>() );
	}


	
	// より大きい(>)
	template<typename NumericType>
	template<typename OtherNumericType>
	const ns_standardType::StandardBoolean NumericObject<NumericType>::operator>( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator>( other.getValue<OtherNumericType>() );
	}


	
	// 以下(<=)
	template<typename NumericType>
	template<typename OtherNumericType>
	const ns_standardType::StandardBoolean NumericObject<NumericType>::operator<=( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator<=( other.getValue<OtherNumericType>() );
	}


	
	// 以上(>=)
	template<typename NumericType>
	template<typename OtherNumericType>
	const ns_standardType::StandardBoolean NumericObject<NumericType>::operator>=( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator>=( other.getValue<OtherNumericType>() );
	}


	
	// 算術演算子
	

	// 加算(+)
	template<typename NumericType>
	template<typename OtherNumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator+( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator+( other.getValue<OtherNumericType>() );
	}


	
	
	// 減算(-)
	template<typename NumericType>
	template<typename OtherNumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator-( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator+( other.negated() );
	}


	
	// 乗算(*)
	template<typename NumericType>
	template<typename OtherNumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator*( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator*( other.getValue<OtherNumericType>() );
	}


	
	// 除算(/)
	template<typename NumericType>
	template<typename OtherNumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator/( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator/( other.getValue<OtherNumericType>() );
	}


	
	// 剰余(%)
	template<typename NumericType>
	template<typename OtherNumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator%( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator%( other.getValue<OtherNumericType>() );
	}


	
	// 論理積(&)
	template<typename NumericType>
	template<typename OtherNumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator&( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator&( other.getValue<ns_standardType::ns_holderType::LargestSignedIntegerDataType>() );
	}


	
	// 論理和(|)
	template<typename NumericType>
	template<typename OtherNumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator|( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator|( other.getValue<ns_standardType::ns_holderType::LargestSignedIntegerDataType>() );
	}


	
	// 排他的論理和(^)
	template<typename NumericType>
	template<typename OtherNumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator^( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator^( other.getValue<ns_standardType::ns_holderType::LargestSignedIntegerDataType>() );
	}


	
	// 左シフト(<<)
	template<typename NumericType>
	template<typename OtherNumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator<<( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator<<( other.getValue<ns_standardType::ns_holderType::LargestSignedIntegerDataType>() );
	}


	
	// 右シフト(>>)
	template<typename NumericType>
	template<typename OtherNumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator>>( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator>>( other.getValue<ns_standardType::ns_holderType::LargestSignedIntegerDataType>() );
	}


	
	// 複合代入演算子
	
	// 加算代入(+=)
	template<typename NumericType>
	template<typename OtherNumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator+=( const NumericObject<OtherNumericType>& other )
	{
		return this->operator+=( other.getValue<OtherNumericType>() );
	}
	

	
	// 減算代入(-=)
	template<typename NumericType>
	template<typename OtherNumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator-=( const NumericObject<OtherNumericType>& other )
	{
		return this->operator-=( other.getValue<OtherNumericType>() );
	}
	

	
	// 乗算代入(*=)
	template<typename NumericType>
	template<typename OtherNumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator*=( const NumericObject<OtherNumericType>& other )
	{
		return this->operator*=( other.getValue<OtherNumericType>() );
	}
	

	
	// 除算代入(/=)
	template<typename NumericType>
	template<typename OtherNumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator/=( const NumericObject<OtherNumericType>& other )
	{
		return this->operator/=( other.getValue<OtherNumericType>() );
	}
	

	
	// 剰余代入(%=)
	template<typename NumericType>
	template<typename OtherNumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator%=( const NumericObject<OtherNumericType>& other )
	{
		return this->operator%=( other.getValue<OtherNumericType>() );
	}
	

	
	// 論理積代入(&=)
	template<typename NumericType>
	template<typename OtherNumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator&=( const NumericObject<OtherNumericType>& other )
	{
		return this->operator&=( other.getValue<ns_standardType::ns_holderType::LargestSignedIntegerDataType>() );
	}
	

	
	// 論理和代入(|=)
	template<typename NumericType>
	template<typename OtherNumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator|=( const NumericObject<OtherNumericType>& other )
	{
		return this->operator|=( other.getValue<ns_standardType::ns_holderType::LargestSignedIntegerDataType>() );
	}
	

	
	// 排他的論理和代入(^=)
	template<typename NumericType>
	template<typename OtherNumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator^=( const NumericObject<OtherNumericType>& other )
	{
		return this->operator^=( other.getValue<ns_standardType::ns_holderType::LargestSignedIntegerDataType>() );
	}
	

	
	// 左シフト代入(<<=)
	template<typename NumericType>
	template<typename OtherNumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator<<=( const NumericObject<OtherNumericType>& other )
	{
		return this->operator<<=( other.getValue<ns_standardType::ns_holderType::LargestSignedIntegerDataType>() );
	}
	

	
	// 右シフト代入(>>=)
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