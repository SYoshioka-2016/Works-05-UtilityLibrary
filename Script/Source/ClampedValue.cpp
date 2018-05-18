/*#include <ClampedValue.h>

#include <MathUtil.h>
#include <AssertUtil.h>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



	template<typename NType>
	ClampedValue<NType>::ClampedValue() :
		ClampedValue( 0, 0 )
	{

	}



	template<typename NType>
	ClampedValue<NType>::ClampedValue( const ClampedValue& other ) :
		ClampedValue( other.getLeftBoundary(), other.getRightBoundary(), other.getValue() )
	{

	}



	template<typename NType>
	ClampedValue<NType>::ClampedValue(
		const LargestFloatDataType leftBoundary,
		const LargestFloatDataType rightBoundary
	) :
		ClampedValue( leftBoundary, rightBoundary, 0 )
	{

	}



	template<typename NType>
	ClampedValue<NType>::ClampedValue(
		const LargestFloatDataType leftBoundary,
		const LargestFloatDataType rightBoundary,
		const LargestFloatDataType value
	) :
		NumericObject<NType>(),
		m_leftBoundary(),
		m_rightBoundary()
	{
		this->setRange( leftBoundary, rightBoundary );

		this->setValue( value );
	}



	template<typename NType>
	ClampedValue<NType>::~ClampedValue()
	{

	}



	template<typename NType>
	ClampedValue<NType>& ClampedValue<NType>::operator=( const LargestFloatDataType value )
	{
		this->setValue( value );

		return *this;
	}



	template<typename NType>
	ClampedValue<NType>& ClampedValue<NType>::operator=( const ClampedValue& other )
	{
		return this->operator=( other.getValue() );
	}



	template<typename NType>
	ClampedValue<NType>& ClampedValue<NType>::operator=( const BaseNumericObject& other )
	{
		return this->operator=( other._valueGetter() );
	}



	template<typename NType>
	void ClampedValue<NType>::setRange( const LargestFloatDataType leftBoundary, const LargestFloatDataType rightBoundary )
	{
		DEBUG_ASSERT( leftBoundary <= rightBoundary );



		this->m_leftBoundary	= leftBoundary;

		this->m_rightBoundary	= rightBoundary;
	}



	template<typename NType>
	ns_standardType::StandardString<char> ClampedValue<NType>::toString() const
	{
		return std::to_string( this->getValue() );
	}



	template<typename NType>
	void ClampedValue<NType>::setValue( const LargestFloatDataType value )
	{
		*(NType*)this->m_value =
			static_cast<NType>(
				ns_myUtility::ns_mathUtil::clamp(
					value,
					this->m_leftBoundary.getValue(),
					this->m_rightBoundary.getValue()
				)
			);
	}



	template<typename NType>
	ns_standardType::StandardString<char> ClampedValue<NType>::toConsoleOutString() const
	{
		ns_standardType::StandardString<char> ret;

		ret += this->toTypeNameString() + "\n";
		ret += "Left  Boundary = " + std::to_string( this->m_leftBoundary.getValue() ) + "\n";
		ret += "Right Boundary = " + std::to_string( this->m_rightBoundary.getValue() ) + "\n";
		ret += "Value          = " + this->toString();

		return ret;
	}



	template class ClampedValue<char>;
	template class ClampedValue<short>;
	template class ClampedValue<int>;
	template class ClampedValue<long>;
	template class ClampedValue<float>;
	template class ClampedValue<double>;
	template class ClampedValue<long double>;



}	// namespace ns_typeUtil



}	// namespace ns_myUtility*/