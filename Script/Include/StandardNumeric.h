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


	
		// 代入演算子

		StandardNumeric& operator=( const ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		StandardNumeric& operator=( const StandardNumeric<OtherNumericType>& other );


	
		// 関数呼び出し演算子

		StandardNumeric& operator()( const ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		StandardNumeric& operator()( const StandardNumeric<OtherNumericType>& other );



		// 比較演算子
		
		// 等価(==)
		bool operator==( const ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		bool operator==( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend bool operator==( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other );
		
		// 非等値(!=)
		bool operator!=( const ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		bool operator!=( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend bool operator!=( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other );
		
		// より小さい(<)
		bool operator<( const ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		bool operator<( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend bool operator<( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other );
		
		// より大きい(>)
		bool operator>( const ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		bool operator>( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend bool operator>( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other );
		
		// 以下(<=)
		bool operator<=( const ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		bool operator<=( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend bool operator<=( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other );
		
		// 以上(>=)
		bool operator>=( const ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		bool operator>=( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend bool operator>=( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other );




		// 単項演算子

		const StandardNumeric& operator+() const;

		const StandardNumeric operator-() const;

		StandardNumeric& operator++();

		const StandardNumeric operator++( int );

		StandardNumeric& operator--();

		const StandardNumeric operator--( int );

		const StandardNumeric operator~() const;

		bool operator!() const;



		// 算術演算子

		// 加算(+)
		const StandardNumeric operator+( const ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const StandardNumeric operator+( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend const StandardNumeric<ns_holderType::LargestFloatDataType> operator+( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other );
		
		// 減算(-)
		const StandardNumeric operator-( const ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const StandardNumeric operator-( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend const StandardNumeric<ns_holderType::LargestFloatDataType> operator-( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other );
		
		// 乗算(*)
		const StandardNumeric operator*( const ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const StandardNumeric operator*( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend const StandardNumeric<ns_holderType::LargestFloatDataType> operator*( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other );
		
		// 除算(/)
		const StandardNumeric operator/( const ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const StandardNumeric operator/( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend const StandardNumeric<ns_holderType::LargestFloatDataType> operator/( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other );
		
		// 剰余(%)
		const StandardNumeric operator%( const ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const StandardNumeric operator%( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend const StandardNumeric<ns_holderType::LargestFloatDataType> operator%( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other );
		
		// 論理積(&)
		const StandardNumeric operator&( const ns_holderType::LargestSignedIntegerDataType value ) const;
		
		template<typename OtherNumericType>
		const StandardNumeric operator&( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator&( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<OtherNumericType>& other );

		// 論理和(|)
		const StandardNumeric operator|( const ns_holderType::LargestSignedIntegerDataType value ) const;
		
		template<typename OtherNumericType>
		const StandardNumeric operator|( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator|( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<OtherNumericType>& other );
		
		// 排他的論理和(^)
		const StandardNumeric operator^( const ns_holderType::LargestSignedIntegerDataType value ) const;
		
		template<typename OtherNumericType>
		const StandardNumeric operator^( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator^( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<OtherNumericType>& other );
		
		// 左シフト(<<)
		const StandardNumeric operator<<( const ns_holderType::LargestSignedIntegerDataType value ) const;
		
		template<typename OtherNumericType>
		const StandardNumeric operator<<( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator<<( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<OtherNumericType>& other );
		
		// 右シフト(>>)
		const StandardNumeric operator>>( const ns_holderType::LargestSignedIntegerDataType value ) const;
		
		template<typename OtherNumericType>
		const StandardNumeric operator>>( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator>>( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<OtherNumericType>& other );


		
		// 複合代入演算子
		
		// 加算代入(+=)
		StandardNumeric& operator+=( const ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		StandardNumeric& operator+=( const StandardNumeric<OtherNumericType>& other );
		
		template<typename OtherNumericType1, typename OtherNumericType2>
		friend OtherNumericType1& operator+=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other );
		
		// 減算代入(-=)
		StandardNumeric& operator-=( const ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		StandardNumeric& operator-=( const StandardNumeric<OtherNumericType>& other );
		
		template<typename OtherNumericType1, typename OtherNumericType2>
		friend OtherNumericType1& operator-=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other );
		
		// 乗算代入(*=)
		StandardNumeric& operator*=( const ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		StandardNumeric& operator*=( const StandardNumeric<OtherNumericType>& other );
		
		template<typename OtherNumericType1, typename OtherNumericType2>
		friend OtherNumericType1& operator*=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other );
		
		// 除算代入(/=)
		StandardNumeric& operator/=( const ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		StandardNumeric& operator/=( const StandardNumeric<OtherNumericType>& other );
		
		template<typename OtherNumericType1, typename OtherNumericType2>
		friend OtherNumericType1& operator/=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other );
		
		// 剰余代入(%=)
		StandardNumeric& operator%=( const ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		StandardNumeric& operator%=( const StandardNumeric<OtherNumericType>& other );
		
		template<typename OtherNumericType1, typename OtherNumericType2>
		friend OtherNumericType1& operator%=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other );
		
		// 論理積代入(&=)
		StandardNumeric& operator&=( const ns_holderType::LargestSignedIntegerDataType value );
		
		template<typename OtherNumericType>
		StandardNumeric& operator&=( const StandardNumeric<OtherNumericType>& other );
		
		template<typename OtherNumericType1, typename OtherNumericType2>
		friend OtherNumericType1& operator&=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other );
		
		// 論理和代入(|=)
		StandardNumeric& operator|=( const ns_holderType::LargestSignedIntegerDataType value );
		
		template<typename OtherNumericType>
		StandardNumeric& operator|=( const StandardNumeric<OtherNumericType>& other );
		
		template<typename OtherNumericType1, typename OtherNumericType2>
		friend OtherNumericType1& operator|=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other );
		
		// 排他的論理和代入(^=)
		StandardNumeric& operator^=( const ns_holderType::LargestSignedIntegerDataType value );
		
		template<typename OtherNumericType>
		StandardNumeric& operator^=( const StandardNumeric<OtherNumericType>& other );
		
		template<typename OtherNumericType1, typename OtherNumericType2>
		friend OtherNumericType1& operator^=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other );
		
		// 左シフト代入(<<=)
		StandardNumeric& operator<<=( const ns_holderType::LargestSignedIntegerDataType value );
		
		template<typename OtherNumericType>
		StandardNumeric& operator<<=( const StandardNumeric<OtherNumericType>& other );
		
		template<typename OtherNumericType1, typename OtherNumericType2>
		friend OtherNumericType1& operator<<=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other );
		
		// 右シフト代入(>>=)
		StandardNumeric& operator>>=( const ns_holderType::LargestSignedIntegerDataType value );
		
		template<typename OtherNumericType>
		StandardNumeric& operator>>=( const StandardNumeric<OtherNumericType>& other );
		
		template<typename OtherNumericType1, typename OtherNumericType2>
		friend OtherNumericType1& operator>>=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other );


		
		// 入力演算子
		template<typename OtherNumericType>
		friend std::istream& operator>>( std::istream& in, StandardNumeric<OtherNumericType>& other );
		
		// 出力演算子
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


	
	// 比較演算子
	
	// 等価(==)
	template<typename NumericType>
	template<typename OtherNumericType>
	bool StandardNumeric<NumericType>::operator==( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator==( other.getValue<OtherNumericType>() );
	}


	
	// 非等値(!=)
	template<typename NumericType>
	template<typename OtherNumericType>
	bool StandardNumeric<NumericType>::operator!=( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator!=( other.getValue<OtherNumericType>() );
	}


	
	// より小さい(<)
	template<typename NumericType>
	template<typename OtherNumericType>
	bool StandardNumeric<NumericType>::operator<( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator<( other.getValue<OtherNumericType>() );
	}


	
	// より大きい(>)
	template<typename NumericType>
	template<typename OtherNumericType>
	bool StandardNumeric<NumericType>::operator>( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator>( other.getValue<OtherNumericType>() );
	}


	
	// 以下(<=)
	template<typename NumericType>
	template<typename OtherNumericType>
	bool StandardNumeric<NumericType>::operator<=( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator<=( other.getValue<OtherNumericType>() );
	}


	
	// 以上(>=)
	template<typename NumericType>
	template<typename OtherNumericType>
	bool StandardNumeric<NumericType>::operator>=( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator>=( other.getValue<OtherNumericType>() );
	}


	
	// 算術演算子
	

	// 加算(+)
	template<typename NumericType>
	template<typename OtherNumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator+( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator+( other.getValue<OtherNumericType>() );
	}


	
	// 減算(-)
	template<typename NumericType>
	template<typename OtherNumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator-( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator+( other.negated() );
	}


	
	// 乗算(*)
	template<typename NumericType>
	template<typename OtherNumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator*( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator*( other.getValue<OtherNumericType>() );
	}


	
	// 除算(/)
	template<typename NumericType>
	template<typename OtherNumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator/( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator/( other.getValue<OtherNumericType>() );
	}


	
	// 剰余(%)
	template<typename NumericType>
	template<typename OtherNumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator%( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator%( other.getValue<OtherNumericType>() );
	}


	
	// 論理積(&)
	template<typename NumericType>
	template<typename OtherNumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator&( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator&( other.getValue<ns_holderType::LargestSignedIntegerDataType>() );
	}


	
	// 論理和(|)
	template<typename NumericType>
	template<typename OtherNumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator|( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator|( other.getValue<ns_holderType::LargestSignedIntegerDataType>() );
	}


	
	// 排他的論理和(^)
	template<typename NumericType>
	template<typename OtherNumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator^( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator^( other.getValue<ns_holderType::LargestSignedIntegerDataType>() );
	}


	
	// 左シフト(<<)
	template<typename NumericType>
	template<typename OtherNumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator<<( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator<<( other.getValue<ns_holderType::LargestSignedIntegerDataType>() );
	}


	
	// 右シフト(>>)
	template<typename NumericType>
	template<typename OtherNumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator>>( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator>>( other.getValue<ns_holderType::LargestSignedIntegerDataType>() );
	}


	
	// 複合代入演算子
	
	// 加算代入(+=)
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
	

	
	// 減算代入(-=)
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
	

	
	// 乗算代入(*=)
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
	

	
	// 除算代入(/=)
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
	

	
	// 剰余代入(%=)
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
	

	
	// 論理積代入(&=)
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
	

	
	// 論理和代入(|=)
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
	

	
	// 排他的論理和代入(^=)
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
	

	
	// 左シフト代入(<<=)
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
	

	
	// 右シフト代入(>>=)
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