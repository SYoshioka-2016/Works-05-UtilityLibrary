#include <BooleanObject.h>


namespace ns_myUtility 
{



namespace ns_typeUtil
{



namespace ns_basicObjectType
{
	


	BooleanObject::BooleanObject() :
		BooleanObject( false )
	{

	}



	BooleanObject::BooleanObject( const bool value ) :
		m_value( false )
	{
		this->setValue( value );
	}



	BooleanObject::BooleanObject( const BooleanObject& other ) :
		BooleanObject( other.toBool() )
	{

	}



	BooleanObject::~BooleanObject()
	{

	}



	BooleanObject& BooleanObject::operator=( const bool value )
	{
		return this->operator()( value );
	}
	


	BooleanObject& BooleanObject::operator=( const BooleanObject& other )
	{
		return this->operator=( other.toBool() );
	}
		

		
	BooleanObject& BooleanObject::operator()( const bool value )
	{
		this->setValue( value );

		return *this;
	}
	


	BooleanObject& BooleanObject::operator()( const BooleanObject& other )
	{
		return this->operator()( other.toBool() );
	}



	const BooleanObject BooleanObject::operator!() const
	{
		return BooleanObject( this->m_value == false );
	}


	
	const BooleanObject BooleanObject::operator==( const bool value ) const
	{
		return BooleanObject( this->m_value == value );
	}



	const BooleanObject operator==( const bool value, const BooleanObject& ref )
	{
		return ref.operator==( value );
	}


	
	const BooleanObject BooleanObject::operator!=( const bool value ) const
	{
		return !this->operator==( value );
	}



	const BooleanObject operator!=( const bool value, const BooleanObject& ref )
	{
		return ref.operator!=( value );
	}


	
	const BooleanObject BooleanObject::operator<( const bool value ) const
	{
		return BooleanObject( this->m_value < value );
	}


	
	const BooleanObject BooleanObject::operator>( const bool value ) const
	{
		return BooleanObject( this->m_value > value );
	}


	
	const BooleanObject BooleanObject::operator<=( const bool value ) const
	{
		return BooleanObject( this->m_value <= value );
	}


	
	const BooleanObject BooleanObject::operator>=( const bool value ) const
	{
		return BooleanObject( this->m_value >= value );
	}


	
	bool BooleanObject::toBool() const
	{
		return this->m_value;
	}
	


	int BooleanObject::toInt() const
	{
		return ( this->m_value ) ? 1 : 0;
	}



	BasicObject::String BooleanObject::toString() const
	{
		return ( this->m_value ) ? "true" : "false";
	}



	void BooleanObject::setValue( const bool value )
	{
		this->m_value = value;
	}



	BasicObject::String BooleanObject::toConsoleOutString() const
	{
		return "bool : value = " + this->toString();
	}



}	// namespace ns_basicObjectType



}	// namespace ns_typeUtil



}	// namespace ns_myUtility