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


	
		// �֐��Ăяo�����Z�q

		NumericObject& operator()( const ns_standardType::ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		NumericObject& operator()( const NumericObject<OtherNumericType>& other );


	
		// ������Z�q

		NumericObject& operator=( const NumericObject<NumericType>& other );

		NumericObject& operator=( const ns_standardType::ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		NumericObject& operator=( const NumericObject<OtherNumericType>& other );



		// ��r���Z�q
		
		// ����(==)
		const ns_standardType::StandardBoolean operator==( const ns_standardType::ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const ns_standardType::StandardBoolean operator==( const NumericObject<OtherNumericType>& other ) const;
		
		// �񓙒l(!=)
		const ns_standardType::StandardBoolean operator!=( const ns_standardType::ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const ns_standardType::StandardBoolean operator!=( const NumericObject<OtherNumericType>& other ) const;
		
		// ��菬����(<)
		const ns_standardType::StandardBoolean operator<( const ns_standardType::ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const ns_standardType::StandardBoolean operator<( const NumericObject<OtherNumericType>& other ) const;
		
		// ���傫��(>)
		const ns_standardType::StandardBoolean operator>( const ns_standardType::ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const ns_standardType::StandardBoolean operator>( const NumericObject<OtherNumericType>& other ) const;
		
		// �ȉ�(<=)
		const ns_standardType::StandardBoolean operator<=( const ns_standardType::ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const ns_standardType::StandardBoolean operator<=( const NumericObject<OtherNumericType>& other ) const;
		
		// �ȏ�(>=)
		const ns_standardType::StandardBoolean operator>=( const ns_standardType::ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const ns_standardType::StandardBoolean operator>=( const NumericObject<OtherNumericType>& other ) const;



		// �P�����Z�q

		const NumericObject& operator+() const;

		const NumericObject operator-() const;

		NumericObject& operator++();

		const NumericObject operator++( int );

		NumericObject& operator--();

		const NumericObject operator--( int );

		const NumericObject operator~() const;

		bool operator!() const;



		// �Z�p���Z�q

		// ���Z(+)
		const NumericObject operator+( const ns_standardType::ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const NumericObject operator+( const NumericObject<OtherNumericType>& other ) const;
		
		// ���Z(-)
		const NumericObject operator-( const ns_standardType::ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const NumericObject operator-( const NumericObject<OtherNumericType>& other ) const;
		
		// ��Z(*)
		const NumericObject operator*( const ns_standardType::ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const NumericObject operator*( const NumericObject<OtherNumericType>& other ) const;
		
		// ���Z(/)
		const NumericObject operator/( const ns_standardType::ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const NumericObject operator/( const NumericObject<OtherNumericType>& other ) const;

		// ��](%)
		const NumericObject operator%( const ns_standardType::ns_holderType::NumericHolder& value ) const;
		
		template<typename OtherNumericType>
		const NumericObject operator%( const NumericObject<OtherNumericType>& other ) const;

		// �_����(&)
		const NumericObject operator&( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value ) const;
		
		template<typename OtherNumericType>
		const NumericObject operator&( const NumericObject<OtherNumericType>& other ) const;

		// �_���a(|)
		const NumericObject operator|( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value ) const;
		
		template<typename OtherNumericType>
		const NumericObject operator|( const NumericObject<OtherNumericType>& other ) const;

		// �r���I�_���a(^)
		const NumericObject operator^( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value ) const;
		
		template<typename OtherNumericType>
		const NumericObject operator^( const NumericObject<OtherNumericType>& other ) const;

		// ���V�t�g(<<)
		const NumericObject operator<<( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value ) const;
		
		template<typename OtherNumericType>
		const NumericObject operator<<( const NumericObject<OtherNumericType>& other ) const;

		// �E�V�t�g(>>)
		const NumericObject operator>>( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value ) const;
		
		template<typename OtherNumericType>
		const NumericObject operator>>( const NumericObject<OtherNumericType>& other ) const;


		
		// ����������Z�q
		
		// ���Z���(+=)
		NumericObject& operator+=( const ns_standardType::ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		NumericObject& operator+=( const NumericObject<OtherNumericType>& other );

		// ���Z���(-=)
		NumericObject& operator-=( const ns_standardType::ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		NumericObject& operator-=( const NumericObject<OtherNumericType>& other );

		// ��Z���(*=)
		NumericObject& operator*=( const ns_standardType::ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		NumericObject& operator*=( const NumericObject<OtherNumericType>& other );

		// ���Z���(/=)
		NumericObject& operator/=( const ns_standardType::ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		NumericObject& operator/=( const NumericObject<OtherNumericType>& other );

		// ��]���(%=)
		NumericObject& operator%=( const ns_standardType::ns_holderType::NumericHolder& value );
		
		template<typename OtherNumericType>
		NumericObject& operator%=( const NumericObject<OtherNumericType>& other );
		
		// �_���ϑ��(&=)
		NumericObject& operator&=( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value );
		
		template<typename OtherNumericType>
		NumericObject& operator&=( const NumericObject<OtherNumericType>& other );
		
		// �_���a���(|=)
		NumericObject& operator|=( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value );
		
		template<typename OtherNumericType>
		NumericObject& operator|=( const NumericObject<OtherNumericType>& other );
		
		// �r���I�_���a���(^=)
		NumericObject& operator^=( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value );
		
		template<typename OtherNumericType>
		NumericObject& operator^=( const NumericObject<OtherNumericType>& other );
		
		// ���V�t�g���(<<=)
		NumericObject& operator<<=( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value );
		
		template<typename OtherNumericType>
		NumericObject& operator<<=( const NumericObject<OtherNumericType>& other );
		
		// �E�V�t�g���(>>=)
		NumericObject& operator>>=( const ns_standardType::ns_holderType::LargestSignedIntegerDataType value );
		
		template<typename OtherNumericType>
		NumericObject& operator>>=( const NumericObject<OtherNumericType>& other );


		
		// ���͉��Z�q
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


	
	// ��r���Z�q
	
	// ����(==)
	template<typename NumericType>
	template<typename OtherNumericType>
	const ns_standardType::StandardBoolean NumericObject<NumericType>::operator==( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator==( other.getValue<OtherNumericType>() );
	}


	
	// �񓙒l(!=)
	template<typename NumericType>
	template<typename OtherNumericType>
	const ns_standardType::StandardBoolean NumericObject<NumericType>::operator!=( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator!=( other.getValue<OtherNumericType>() );
	}


	
	// ��菬����(<)
	template<typename NumericType>
	template<typename OtherNumericType>
	const ns_standardType::StandardBoolean NumericObject<NumericType>::operator<( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator<( other.getValue<OtherNumericType>() );
	}


	
	// ���傫��(>)
	template<typename NumericType>
	template<typename OtherNumericType>
	const ns_standardType::StandardBoolean NumericObject<NumericType>::operator>( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator>( other.getValue<OtherNumericType>() );
	}


	
	// �ȉ�(<=)
	template<typename NumericType>
	template<typename OtherNumericType>
	const ns_standardType::StandardBoolean NumericObject<NumericType>::operator<=( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator<=( other.getValue<OtherNumericType>() );
	}


	
	// �ȏ�(>=)
	template<typename NumericType>
	template<typename OtherNumericType>
	const ns_standardType::StandardBoolean NumericObject<NumericType>::operator>=( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator>=( other.getValue<OtherNumericType>() );
	}


	
	// �Z�p���Z�q
	

	// ���Z(+)
	template<typename NumericType>
	template<typename OtherNumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator+( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator+( other.getValue<OtherNumericType>() );
	}


	
	
	// ���Z(-)
	template<typename NumericType>
	template<typename OtherNumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator-( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator+( other.negated() );
	}


	
	// ��Z(*)
	template<typename NumericType>
	template<typename OtherNumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator*( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator*( other.getValue<OtherNumericType>() );
	}


	
	// ���Z(/)
	template<typename NumericType>
	template<typename OtherNumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator/( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator/( other.getValue<OtherNumericType>() );
	}


	
	// ��](%)
	template<typename NumericType>
	template<typename OtherNumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator%( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator%( other.getValue<OtherNumericType>() );
	}


	
	// �_����(&)
	template<typename NumericType>
	template<typename OtherNumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator&( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator&( other.getValue<ns_standardType::ns_holderType::LargestSignedIntegerDataType>() );
	}


	
	// �_���a(|)
	template<typename NumericType>
	template<typename OtherNumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator|( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator|( other.getValue<ns_standardType::ns_holderType::LargestSignedIntegerDataType>() );
	}


	
	// �r���I�_���a(^)
	template<typename NumericType>
	template<typename OtherNumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator^( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator^( other.getValue<ns_standardType::ns_holderType::LargestSignedIntegerDataType>() );
	}


	
	// ���V�t�g(<<)
	template<typename NumericType>
	template<typename OtherNumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator<<( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator<<( other.getValue<ns_standardType::ns_holderType::LargestSignedIntegerDataType>() );
	}


	
	// �E�V�t�g(>>)
	template<typename NumericType>
	template<typename OtherNumericType>
	const NumericObject<NumericType> NumericObject<NumericType>::operator>>( const NumericObject<OtherNumericType>& other ) const
	{
		return this->operator>>( other.getValue<ns_standardType::ns_holderType::LargestSignedIntegerDataType>() );
	}


	
	// ����������Z�q
	
	// ���Z���(+=)
	template<typename NumericType>
	template<typename OtherNumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator+=( const NumericObject<OtherNumericType>& other )
	{
		return this->operator+=( other.getValue<OtherNumericType>() );
	}
	

	
	// ���Z���(-=)
	template<typename NumericType>
	template<typename OtherNumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator-=( const NumericObject<OtherNumericType>& other )
	{
		return this->operator-=( other.getValue<OtherNumericType>() );
	}
	

	
	// ��Z���(*=)
	template<typename NumericType>
	template<typename OtherNumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator*=( const NumericObject<OtherNumericType>& other )
	{
		return this->operator*=( other.getValue<OtherNumericType>() );
	}
	

	
	// ���Z���(/=)
	template<typename NumericType>
	template<typename OtherNumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator/=( const NumericObject<OtherNumericType>& other )
	{
		return this->operator/=( other.getValue<OtherNumericType>() );
	}
	

	
	// ��]���(%=)
	template<typename NumericType>
	template<typename OtherNumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator%=( const NumericObject<OtherNumericType>& other )
	{
		return this->operator%=( other.getValue<OtherNumericType>() );
	}
	

	
	// �_���ϑ��(&=)
	template<typename NumericType>
	template<typename OtherNumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator&=( const NumericObject<OtherNumericType>& other )
	{
		return this->operator&=( other.getValue<ns_standardType::ns_holderType::LargestSignedIntegerDataType>() );
	}
	

	
	// �_���a���(|=)
	template<typename NumericType>
	template<typename OtherNumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator|=( const NumericObject<OtherNumericType>& other )
	{
		return this->operator|=( other.getValue<ns_standardType::ns_holderType::LargestSignedIntegerDataType>() );
	}
	

	
	// �r���I�_���a���(^=)
	template<typename NumericType>
	template<typename OtherNumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator^=( const NumericObject<OtherNumericType>& other )
	{
		return this->operator^=( other.getValue<ns_standardType::ns_holderType::LargestSignedIntegerDataType>() );
	}
	

	
	// ���V�t�g���(<<=)
	template<typename NumericType>
	template<typename OtherNumericType>
	NumericObject<NumericType>& NumericObject<NumericType>::operator<<=( const NumericObject<OtherNumericType>& other )
	{
		return this->operator<<=( other.getValue<ns_standardType::ns_holderType::LargestSignedIntegerDataType>() );
	}
	

	
	// �E�V�t�g���(>>=)
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