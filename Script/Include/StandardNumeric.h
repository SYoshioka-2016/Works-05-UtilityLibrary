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


	
		// ������Z�q

		StandardNumeric& operator=( const ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		StandardNumeric& operator=( const StandardNumeric<OtherNumericType>& other );


	
		// �֐��Ăяo�����Z�q

		StandardNumeric& operator()( const ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		StandardNumeric& operator()( const StandardNumeric<OtherNumericType>& other );



		// ��r���Z�q
		
		// ����(==)
		bool operator==( const ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		bool operator==( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend bool operator==( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other );
		
		// �񓙒l(!=)
		bool operator!=( const ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		bool operator!=( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend bool operator!=( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other );
		
		// ��菬����(<)
		bool operator<( const ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		bool operator<( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend bool operator<( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other );
		
		// ���傫��(>)
		bool operator>( const ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		bool operator>( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend bool operator>( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other );
		
		// �ȉ�(<=)
		bool operator<=( const ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		bool operator<=( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend bool operator<=( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other );
		
		// �ȏ�(>=)
		bool operator>=( const ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		bool operator>=( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend bool operator>=( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other );




		// �P�����Z�q

		const StandardNumeric& operator+() const;

		const StandardNumeric operator-() const;

		StandardNumeric& operator++();

		const StandardNumeric operator++( int );

		StandardNumeric& operator--();

		const StandardNumeric operator--( int );

		const StandardNumeric operator~() const;

		bool operator!() const;



		// �Z�p���Z�q

		// ���Z(+)
		const StandardNumeric operator+( const ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const StandardNumeric operator+( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend const StandardNumeric<ns_holderType::LargestFloatDataType> operator+( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other );
		
		// ���Z(-)
		const StandardNumeric operator-( const ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const StandardNumeric operator-( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend const StandardNumeric<ns_holderType::LargestFloatDataType> operator-( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other );
		
		// ��Z(*)
		const StandardNumeric operator*( const ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const StandardNumeric operator*( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend const StandardNumeric<ns_holderType::LargestFloatDataType> operator*( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other );
		
		// ���Z(/)
		const StandardNumeric operator/( const ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const StandardNumeric operator/( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend const StandardNumeric<ns_holderType::LargestFloatDataType> operator/( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other );
		
		// ��](%)
		const StandardNumeric operator%( const ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const StandardNumeric operator%( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend const StandardNumeric<ns_holderType::LargestFloatDataType> operator%( const ns_holderType::NumericHolder& value, const StandardNumeric<OtherNumericType>& other );
		
		// �_����(&)
		const StandardNumeric operator&( const ns_holderType::LargestSignedIntegerDataType value ) const;
		
		template<typename OtherNumericType>
		const StandardNumeric operator&( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator&( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<OtherNumericType>& other );

		// �_���a(|)
		const StandardNumeric operator|( const ns_holderType::LargestSignedIntegerDataType value ) const;
		
		template<typename OtherNumericType>
		const StandardNumeric operator|( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator|( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<OtherNumericType>& other );
		
		// �r���I�_���a(^)
		const StandardNumeric operator^( const ns_holderType::LargestSignedIntegerDataType value ) const;
		
		template<typename OtherNumericType>
		const StandardNumeric operator^( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator^( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<OtherNumericType>& other );
		
		// ���V�t�g(<<)
		const StandardNumeric operator<<( const ns_holderType::LargestSignedIntegerDataType value ) const;
		
		template<typename OtherNumericType>
		const StandardNumeric operator<<( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator<<( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<OtherNumericType>& other );
		
		// �E�V�t�g(>>)
		const StandardNumeric operator>>( const ns_holderType::LargestSignedIntegerDataType value ) const;
		
		template<typename OtherNumericType>
		const StandardNumeric operator>>( const StandardNumeric<OtherNumericType>& other ) const;
		
		template<typename OtherNumericType>
		friend const StandardNumeric<ns_holderType::LargestSignedIntegerDataType> operator>>( const ns_holderType::LargestSignedIntegerDataType value, const StandardNumeric<OtherNumericType>& other );


		
		// ����������Z�q
		
		// ���Z���(+=)
		StandardNumeric& operator+=( const ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		StandardNumeric& operator+=( const StandardNumeric<OtherNumericType>& other );
		
		template<typename OtherNumericType1, typename OtherNumericType2>
		friend OtherNumericType1& operator+=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other );
		
		// ���Z���(-=)
		StandardNumeric& operator-=( const ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		StandardNumeric& operator-=( const StandardNumeric<OtherNumericType>& other );
		
		template<typename OtherNumericType1, typename OtherNumericType2>
		friend OtherNumericType1& operator-=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other );
		
		// ��Z���(*=)
		StandardNumeric& operator*=( const ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		StandardNumeric& operator*=( const StandardNumeric<OtherNumericType>& other );
		
		template<typename OtherNumericType1, typename OtherNumericType2>
		friend OtherNumericType1& operator*=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other );
		
		// ���Z���(/=)
		StandardNumeric& operator/=( const ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		StandardNumeric& operator/=( const StandardNumeric<OtherNumericType>& other );
		
		template<typename OtherNumericType1, typename OtherNumericType2>
		friend OtherNumericType1& operator/=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other );
		
		// ��]���(%=)
		StandardNumeric& operator%=( const ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		StandardNumeric& operator%=( const StandardNumeric<OtherNumericType>& other );
		
		template<typename OtherNumericType1, typename OtherNumericType2>
		friend OtherNumericType1& operator%=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other );
		
		// �_���ϑ��(&=)
		StandardNumeric& operator&=( const ns_holderType::LargestSignedIntegerDataType value );
		
		template<typename OtherNumericType>
		StandardNumeric& operator&=( const StandardNumeric<OtherNumericType>& other );
		
		template<typename OtherNumericType1, typename OtherNumericType2>
		friend OtherNumericType1& operator&=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other );
		
		// �_���a���(|=)
		StandardNumeric& operator|=( const ns_holderType::LargestSignedIntegerDataType value );
		
		template<typename OtherNumericType>
		StandardNumeric& operator|=( const StandardNumeric<OtherNumericType>& other );
		
		template<typename OtherNumericType1, typename OtherNumericType2>
		friend OtherNumericType1& operator|=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other );
		
		// �r���I�_���a���(^=)
		StandardNumeric& operator^=( const ns_holderType::LargestSignedIntegerDataType value );
		
		template<typename OtherNumericType>
		StandardNumeric& operator^=( const StandardNumeric<OtherNumericType>& other );
		
		template<typename OtherNumericType1, typename OtherNumericType2>
		friend OtherNumericType1& operator^=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other );
		
		// ���V�t�g���(<<=)
		StandardNumeric& operator<<=( const ns_holderType::LargestSignedIntegerDataType value );
		
		template<typename OtherNumericType>
		StandardNumeric& operator<<=( const StandardNumeric<OtherNumericType>& other );
		
		template<typename OtherNumericType1, typename OtherNumericType2>
		friend OtherNumericType1& operator<<=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other );
		
		// �E�V�t�g���(>>=)
		StandardNumeric& operator>>=( const ns_holderType::LargestSignedIntegerDataType value );
		
		template<typename OtherNumericType>
		StandardNumeric& operator>>=( const StandardNumeric<OtherNumericType>& other );
		
		template<typename OtherNumericType1, typename OtherNumericType2>
		friend OtherNumericType1& operator>>=( OtherNumericType1& value, const StandardNumeric<OtherNumericType2>& other );


		
		// ���͉��Z�q
		template<typename OtherNumericType>
		friend std::istream& operator>>( std::istream& in, StandardNumeric<OtherNumericType>& other );
		
		// �o�͉��Z�q
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


	
	// ��r���Z�q
	
	// ����(==)
	template<typename NumericType>
	template<typename OtherNumericType>
	bool StandardNumeric<NumericType>::operator==( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator==( other.getValue<OtherNumericType>() );
	}


	
	// �񓙒l(!=)
	template<typename NumericType>
	template<typename OtherNumericType>
	bool StandardNumeric<NumericType>::operator!=( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator!=( other.getValue<OtherNumericType>() );
	}


	
	// ��菬����(<)
	template<typename NumericType>
	template<typename OtherNumericType>
	bool StandardNumeric<NumericType>::operator<( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator<( other.getValue<OtherNumericType>() );
	}


	
	// ���傫��(>)
	template<typename NumericType>
	template<typename OtherNumericType>
	bool StandardNumeric<NumericType>::operator>( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator>( other.getValue<OtherNumericType>() );
	}


	
	// �ȉ�(<=)
	template<typename NumericType>
	template<typename OtherNumericType>
	bool StandardNumeric<NumericType>::operator<=( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator<=( other.getValue<OtherNumericType>() );
	}


	
	// �ȏ�(>=)
	template<typename NumericType>
	template<typename OtherNumericType>
	bool StandardNumeric<NumericType>::operator>=( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator>=( other.getValue<OtherNumericType>() );
	}


	
	// �Z�p���Z�q
	

	// ���Z(+)
	template<typename NumericType>
	template<typename OtherNumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator+( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator+( other.getValue<OtherNumericType>() );
	}


	
	// ���Z(-)
	template<typename NumericType>
	template<typename OtherNumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator-( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator+( other.negated() );
	}


	
	// ��Z(*)
	template<typename NumericType>
	template<typename OtherNumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator*( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator*( other.getValue<OtherNumericType>() );
	}


	
	// ���Z(/)
	template<typename NumericType>
	template<typename OtherNumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator/( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator/( other.getValue<OtherNumericType>() );
	}


	
	// ��](%)
	template<typename NumericType>
	template<typename OtherNumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator%( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator%( other.getValue<OtherNumericType>() );
	}


	
	// �_����(&)
	template<typename NumericType>
	template<typename OtherNumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator&( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator&( other.getValue<ns_holderType::LargestSignedIntegerDataType>() );
	}


	
	// �_���a(|)
	template<typename NumericType>
	template<typename OtherNumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator|( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator|( other.getValue<ns_holderType::LargestSignedIntegerDataType>() );
	}


	
	// �r���I�_���a(^)
	template<typename NumericType>
	template<typename OtherNumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator^( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator^( other.getValue<ns_holderType::LargestSignedIntegerDataType>() );
	}


	
	// ���V�t�g(<<)
	template<typename NumericType>
	template<typename OtherNumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator<<( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator<<( other.getValue<ns_holderType::LargestSignedIntegerDataType>() );
	}


	
	// �E�V�t�g(>>)
	template<typename NumericType>
	template<typename OtherNumericType>
	const StandardNumeric<NumericType> StandardNumeric<NumericType>::operator>>( const StandardNumeric<OtherNumericType>& other ) const
	{
		return this->operator>>( other.getValue<ns_holderType::LargestSignedIntegerDataType>() );
	}


	
	// ����������Z�q
	
	// ���Z���(+=)
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
	

	
	// ���Z���(-=)
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
	

	
	// ��Z���(*=)
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
	

	
	// ���Z���(/=)
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
	

	
	// ��]���(%=)
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
	

	
	// �_���ϑ��(&=)
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
	

	
	// �_���a���(|=)
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
	

	
	// �r���I�_���a���(^=)
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
	

	
	// ���V�t�g���(<<=)
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
	

	
	// �E�V�t�g���(>>=)
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