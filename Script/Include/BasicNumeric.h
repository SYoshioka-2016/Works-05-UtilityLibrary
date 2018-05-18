#ifndef _INCLUDE_GUARD_BASICNUMERIC_H_
#define _INCLUDE_GUARD_BASICNUMERIC_H_



#include <NumericHolder.h>



namespace ns_myUtility
{



namespace ns_typeUtil
{



namespace ns_standardType
{



	template<typename NumericType>
	class BasicNumeric
	{
	public:

		BasicNumeric();

		BasicNumeric( const BasicNumeric& other );
		
		template<typename OtherNumericType>
		BasicNumeric( const BasicNumeric<OtherNumericType>& other );

		BasicNumeric( const ns_holderType::NumericHolder& value );
		


		template<typename OtherNumericType>
		BasicNumeric& operator()( const BasicNumeric<OtherNumericType>& other );
		
		BasicNumeric& operator()( const ns_holderType::NumericHolder& value );



		BasicNumeric& operator=( const BasicNumeric& other );

		template<typename OtherNumericType>
		BasicNumeric& operator=( const BasicNumeric<OtherNumericType>& other );

		BasicNumeric& operator=( const ns_holderType::NumericHolder& value );



		const NumericType& getValue() const;
		
		template<typename OtherNumericType>
		OtherNumericType toNumeric() const;

	protected:

		virtual void setValue( const NumericType value );

	private:

		NumericType m_value;
	};
		


	template<typename NumericType>
	template<typename OtherNumericType>
	BasicNumeric<NumericType>::BasicNumeric( const BasicNumeric<OtherNumericType>& other ) :
		m_value( 0 )
	{
		this->setValue( other.toNumeric<NumericType>() );
	}



	template<typename NumericType>
	template<typename OtherNumericType>
	BasicNumeric<NumericType>& BasicNumeric<NumericType>::operator()( const BasicNumeric<OtherNumericType>& other )
	{
		this->setValue( other.toNumeric<NumericType>() );

		return *this;
	}
	


	template<typename NumericType>
	template<typename OtherNumericType>
	BasicNumeric<NumericType>& BasicNumeric<NumericType>::operator=( const BasicNumeric<OtherNumericType>& other )
	{
		return this->operator()( other );
	}



	template<typename NumericType>
	template<typename OtherNumericType>
	OtherNumericType BasicNumeric<NumericType>::toNumeric() const
	{
		return static_cast<NumericType>( this->m_value );
	}



}	// namespace ns_standardType



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_BASICNUMERIC_H_