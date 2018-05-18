/*#ifndef _INCLUDE_GUARD_CLAMPEDVALUE_H_
#define _INCLUDE_GUARD_CLAMPEDVALUE_H_



#include <NumericObject.h>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



	template<typename NType>
	class ClampedValue : public ns_basicObjectType::NumericObject<NType>
	{
	public:
	
		ClampedValue();

		ClampedValue( const ClampedValue& other );
		
		template<typename otherNType>
		ClampedValue( const ClampedValue<otherNType>& other );

		ClampedValue(
			const LargestFloatDataType leftBoundary,
			const LargestFloatDataType rightBoundary
		);
	
		ClampedValue(
			const LargestFloatDataType leftBoundary,
			const LargestFloatDataType rightBoundary,
			const LargestFloatDataType value
		);
	
		~ClampedValue();


	
		ClampedValue& operator=( const LargestFloatDataType value );

		ClampedValue& operator=( const ClampedValue& other );
	
		ClampedValue& operator=( const BaseNumericObject& other );


	
		template<typename otherNType = NType>
		otherNType getLeftBoundary() const;
	
		template<typename otherNType = NType>
		otherNType getRightBoundary() const;
	
		void setRange( const LargestFloatDataType leftBoundary, const LargestFloatDataType rightBoundary );

		virtual ns_standardType::StandardString<char> toString() const override;

	private:
		
		void setValue( const LargestFloatDataType value ) override;

		virtual ns_standardType::StandardString<char> toConsoleOutString() const override;

	private:

		NumericObject<NType> m_leftBoundary;

		NumericObject<NType> m_rightBoundary;
	};

	

	using ClampedSignedChar			= ClampedValue<char>;

	using ClampedSignedShortInteger	= ClampedValue<short>;

	using ClampedSignedInteger		= ClampedValue<int>;

	using ClampedSignedLongInteger	= ClampedValue<long>;

	using ClampedFloat				= ClampedValue<float>;

	using ClampedDouble				= ClampedValue<double>;

	using ClampedLongDouble			= ClampedValue<long double>;



	template<typename NType>
	template<typename otherNType>
	ClampedValue<NType>::ClampedValue( const ClampedValue<otherNType>& other ) :
		ClampedValue( other.getLeftBoundary(), other.getRightBoundary(), other.getValue() )
	{

	}



	template<typename NType>
	template<typename otherNType>
	otherNType ClampedValue<NType>::getLeftBoundary() const
	{
		return this->m_leftBoundary.getValue<otherNType>();
	}



	template<typename NType>
	template<typename otherNType>
	otherNType ClampedValue<NType>::getRightBoundary() const
	{
		return this->m_rightBoundary.getValue<otherNType>();
	}




}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_CLAMPEDVALUE_H_*/