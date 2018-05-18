#ifndef _INCLUDE_GUARD_BOOLEANOBJECT_H_
#define _INCLUDE_GUARD_BOOLEANOBJECT_H_



#include <BasicObject.h>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



namespace ns_basicObjectType
{
	


	class BooleanObject : public BasicObject
	{
	public:

		BooleanObject();

		BooleanObject( const bool value );

		BooleanObject( const BooleanObject& other );

		virtual ~BooleanObject();



		BooleanObject& operator=( const bool value );
	
		BooleanObject& operator=( const BooleanObject& other );
		

		
		BooleanObject& operator()( const bool value );
	
		BooleanObject& operator()( const BooleanObject& other );



		const BooleanObject operator!() const;



		const BooleanObject operator==( const bool value ) const;
		
		friend const BooleanObject operator==( const bool value, const BooleanObject& ref );

		const BooleanObject operator!=( const bool value ) const;
		
		friend const BooleanObject operator!=( const bool value, const BooleanObject& ref );

		const BooleanObject operator<( const bool value ) const;

		const BooleanObject operator>( const bool value ) const;

		const BooleanObject operator<=( const bool value ) const;

		const BooleanObject operator>=( const bool value ) const;


		
		bool toBool() const;
		
		int toInt() const;

		virtual BasicObject::String toString() const override;

	protected:
		
		virtual void setValue( const bool value );

		virtual BasicObject::String toConsoleOutString() const override;

	private:

		bool m_value;
	};



}	// namespace ns_basicObjectType



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_BOOLEANOBJECT_H_