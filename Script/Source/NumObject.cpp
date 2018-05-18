/*#include <NumObject.h>

	#include <StringUtil.h>



namespace ns_myUtility
{



namespace ns_typeUtil
{



namespace ns_basicObjectType
{


	
	template<typename NumericType>
	NumObject<NumericType>::NumObject()
	{

	}

	

	template<typename NumericType>
	NumObject<NumericType>::NumObject( const NumObject& other ) :
		m_value()
	{
		this->setValue( other.getValue() );
	}
		

	
	template<typename NumericType>
	NumObject<NumericType>::NumObject( const ns_standardType::ns_holderType::NumericHolder& value ) :
		m_value()
	{
		this->setValue( value.getValue<NumericType>() );
	}
		

	
	template<typename NumericType>
	NumObject<NumericType>& NumObject<NumericType>::operator()( const ns_standardType::ns_holderType::NumericHolder& value )
	{
		this->setValue( value.getValue<NumericType>() );

		return *this;
	}



	template<typename NumericType>
	NumObject<NumericType>& NumObject<NumericType>::operator=( const NumObject& other )
	{
		this->setValue( other.getValue() );

		return *this;
	}


	
	template<typename NumericType>
	NumObject<NumericType>& NumObject<NumericType>::operator=( const ns_standardType::ns_holderType::NumericHolder& value )
	{
		return this->operator()( value );
	}


	
	template<typename NumericType>
	const NumericType& NumObject<NumericType>::getValue() const
	{
		return this->m_value.getValue();
	}


	
	template<typename NumericType>
	void NumObject<NumericType>::setValue( const NumericType value )
	{
		this->m_value = value;
	}


	
	template<typename NumericType>
	ns_standardType::StandardString<char> NumObject<NumericType>::toString() const
	{
		return ns_stringUtil::numericToString( this->m_value.getValue() );
	}


	
	template<typename NumericType>
	const NumericType& NumObject<NumericType>::_getValueToNumericEqualityCompareFunction() const
	{
		return this->getValue();
	}


	
	template class NumObject<char>;
	template class NumObject<unsigned char>;
	template class NumObject<short>;
	template class NumObject<unsigned short>;
	template class NumObject<int>;
	template class NumObject<unsigned int>;
	template class NumObject<long>;
	template class NumObject<unsigned long>;
	template class NumObject<float>;
	template class NumObject<double>;
	template class NumObject<long double>;



}	// namespace ns_basicObjectType



}	// namespace ns_typeUtil



}	// namespace ns_myUtility*/