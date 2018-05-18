#include <BasicNumeric.h>



namespace ns_myUtility
{



namespace ns_typeUtil
{



namespace ns_standardType
{
	


	template<typename NumericType>
	BasicNumeric<NumericType>::BasicNumeric() :
		m_value( 0 )
	{
		this->setValue( 0 );
	}



	template<typename NumericType>
	BasicNumeric<NumericType>::BasicNumeric( const BasicNumeric& other ) :
		m_value( 0 )
	{
		this->setValue( other.getValue() );
	}


	
	template<typename NumericType>
	BasicNumeric<NumericType>::BasicNumeric( const ns_holderType::NumericHolder& value ) :
		m_value( 0 )
	{
		this->setValue( value.getValue<NumericType>() );
	}


	
	template<typename NumericType>
	BasicNumeric<NumericType>& BasicNumeric<NumericType>::operator()( const ns_holderType::NumericHolder& value )
	{
		this->setValue( value.getValue<NumericType>() );

		return *this;
	}


	
	template<typename NumericType>
	BasicNumeric<NumericType>& BasicNumeric<NumericType>::operator=( const BasicNumeric& other )
	{
		this->setValue( other.getValue() );

		return *this;
	}


	
	template<typename NumericType>
	BasicNumeric<NumericType>& BasicNumeric<NumericType>::operator=( const ns_holderType::NumericHolder& value )
	{
		return this->operator()( value );
	}



	template<typename NumericType>
	const NumericType& BasicNumeric<NumericType>::getValue() const
	{
		return this->m_value;
	}



	template<typename NumericType>
	void BasicNumeric<NumericType>::setValue( const NumericType value )
	{
		this->m_value = value;
	}


	
	template class BasicNumeric<char>;
	template class BasicNumeric<unsigned char>;
	template class BasicNumeric<short>;
	template class BasicNumeric<unsigned short>;
	template class BasicNumeric<int>;
	template class BasicNumeric<unsigned int>;
	template class BasicNumeric<long>;
	template class BasicNumeric<unsigned long>;
	template class BasicNumeric<float>;
	template class BasicNumeric<double>;
	template class BasicNumeric<long double>;



}	// namespace ns_standardType



}	// namespace ns_typeUtil



}	// namespace ns_myUtility