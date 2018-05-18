#ifndef _INCLUDE_GUARD_NUMERICEQUALITYCOMPAREFUNCTION_H_
#define _INCLUDE_GUARD_NUMERICEQUALITYCOMPAREFUNCTION_H_



#include <StandardBoolean.h>
#include <StandardNumeric.h>



namespace ns_myUtility
{



namespace ns_typeUtil
{



namespace ns_basicObjectType
{


	
	template<typename NumericType>
	class NumericEqualityCompareFunction
	{
	public:

		template< typename OtherNumericType>
		const ns_standardType::StandardBoolean operator==( const ns_standardType::StandardNumeric<OtherNumericType>& value ) const;
		
//		const ns_standardType::StandardBoolean operator==( const ns_standardType::ns_holderType::NumericHolder& value ) const;

	protected:

		virtual const NumericType& _getValueToNumericEqualityCompareFunction() const = 0;
	};



	template<typename NumericType>
	template<typename OtherNumericType>
	const ns_standardType::StandardBoolean NumericEqualityCompareFunction<NumericType>::operator==( const ns_standardType::StandardNumeric<OtherNumericType>& value ) const
	{
		auto v1 = static_cast<ns_standardType::ns_holderType::LargestFloatDataType>()( this->_getValueToNumericEqualityCompareFunction() );
		auto v2 = value.toNumeric<ns_standardType::ns_holderType::LargestFloatDataType>();

		return v1 == v2;
	}



}	// namespace ns_basicObjectType



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_NUMERICEQUALITYCOMPAREFUNCTION_H_*/