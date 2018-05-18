/*#ifndef _INCLUDE_GUARD_NUMOBJECT_H_
#define _INCLUDE_GUARD_NUMOBJECT_H_



#include <BasicObject.h>
#include <NumericEqualityCompareFunction.h>
#include <StandardNumeric.h>



namespace ns_myUtility
{



namespace ns_typeUtil
{



namespace ns_basicObjectType
{



	template<typename NumericType>
	class NumObject : public BasicObject, public NumericEqualityCompareFunction
	{
	public:

		NumObject();

		NumObject( const NumObject& other );
		
		template<typename OtherNumericType>
		NumObject( const NumObject<OtherNumericType>& other );
		
		template<typename OtherNumericType>
		NumObject( const ns_standardType::StandardNumeric<OtherNumericType>& value );

		NumObject( const ns_standardType::ns_holderType::NumericHolder& value );

		

		template<typename OtherNumericType>
		NumObject& operator()( const NumObject<OtherNumericType>& other );

		template<typename OtherNumericType>
		NumObject& operator()( const ns_standardType::StandardNumeric<OtherNumericType>& value );
		
		NumObject& operator()( const ns_standardType::ns_holderType::NumericHolder& value );



		NumObject& operator=( const NumObject& other );

		template<typename OtherNumericType>
		NumObject& operator=( const NumObject<OtherNumericType>& other );

		template<typename OtherNumericType>
		NumObject& operator=( const ns_standardType::StandardNumeric<OtherNumericType>& value );

		NumObject& operator=( const ns_standardType::ns_holderType::NumericHolder& value );


		
		template<typename OtherNumericType>
		operator ns_standardType::StandardNumeric<OtherNumericType>() const;


	
		const NumericType& getValue() const;
		
		template<typename OtherNumericType>
		OtherNumericType toNumeric() const;

	protected:

		virtual void setValue( const NumericType value );
		
		virtual ns_standardType::StandardString<char> toString() const override;

		const NumericType& _getValueToNumericEqualityCompareFunction() const override;

	private:

		ns_standardType::StandardNumeric<NumericType> m_value;
	};


	
	template<typename NumericType>
	template<typename OtherNumericType>
	NumObject<NumericType>::NumObject( const NumObject<OtherNumericType>& other ) :
		m_value()
	{
		this->setValue( other.toNumeric<NumericType>() );
	}
		

	
	template<typename NumericType>
	template<typename OtherNumericType>
	NumObject<NumericType>::NumObject( const ns_standardType::StandardNumeric<OtherNumericType>& value ) :
		m_value()
	{
		this->setValue( value.toNumeric<NumericType>() );
	}


	
	template<typename NumericType>
	template<typename OtherNumericType>
	NumObject<NumericType>& NumObject<NumericType>::operator()( const NumObject<OtherNumericType>& other )
	{
		this->setValue( other.toNumeric<NumericType>() );

		return *this;
	}


	
	template<typename NumericType>
	template<typename OtherNumericType>
	NumObject<NumericType>& NumObject<NumericType>::operator()( const ns_standardType::StandardNumeric<OtherNumericType>& value )
	{
		this->setValue( value.toNumeric<NumericType>() );

		return *this;
	}


	
	template<typename NumericType>
	template<typename OtherNumericType>
	NumObject<NumericType>& NumObject<NumericType>::operator=( const NumObject<OtherNumericType>& other )
	{
		return this->operator()( other );
	}


	
	template<typename NumericType>
	template<typename OtherNumericType>
	NumObject<NumericType>& NumObject<NumericType>::operator=( const ns_standardType::StandardNumeric<OtherNumericType>& value )
	{
		return this->operator()( value );
	}


	
	template<typename NumericType>
	template<typename OtherNumericType>
	NumObject<NumericType>::operator ns_standardType::StandardNumeric<OtherNumericType>() const
	{
		return this->getValue();
	}



	template<typename NumericType>
	template<typename OtherNumericType>
	OtherNumericType NumObject<NumericType>::toNumeric() const
	{
		return this->m_value.toNumeric<OtherNumericType>();
	}



}	// namespace ns_basicObjectType



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_NUMOBJECT_H_*/