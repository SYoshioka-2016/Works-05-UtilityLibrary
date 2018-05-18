/*#ifndef _INCLUDE_GUARD_NUMERICADDERFUNCTION_H_
#define _INCLUDE_GUARD_NUMERICADDERFUNCTION_H_



#include <NumericObject.h>



namespace ns_myUtility
{



namespace ns_typeUtil
{



	class NumericAdderFunction
	{
	public:

		template<typename NumericType1, typename NumericType2>
		friend const ns_standardType::StandardNumeric<NumericType1> operator+(
			const ns_standardType::StandardNumeric<NumericType1>& other1,
			const ns_standardType::StandardNumeric<NumericType2>& other2
		)
		{
			return other1 + other2;
		}
	};



template<typename NumericType>
class NumericAdderFunction
{
public:

	const ns_basicObjectType::NumericObject<NumericType> operator+( const ns_standardType::ns_holderType::NumericHolder& value ) const;

	template<typename OtherNumericType>
	const ns_basicObjectType::NumericObject<NumericType> operator+( const ns_basicObjectType::NumericObject<OtherNumericType>& other ) const;
};



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_NUMERICADDERFUNCTION_H_*/