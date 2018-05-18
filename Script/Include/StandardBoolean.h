#ifndef _INCLUDE_GUARD_STANDARDBOOLEAN_H_
#define _INCLUDE_GUARD_STANDARDBOOLEAN_H_



#include <BooleanHolder.h>

#include <iostream>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



namespace ns_standardType
{



	class StandardBoolean
	{
	public:

		StandardBoolean();

		StandardBoolean( const ns_holderType::BooleanHolder& value );



		StandardBoolean& operator=( const ns_holderType::BooleanHolder& value );

		StandardBoolean& operator()( const ns_holderType::BooleanHolder& value );
		
		StandardBoolean& operator()( const StandardBoolean& other );



		const StandardBoolean operator==( const ns_holderType::BooleanHolder& value ) const;

		const StandardBoolean operator==( const StandardBoolean& other ) const;
		
		friend const StandardBoolean operator==( const ns_holderType::BooleanHolder& value, const StandardBoolean& other );

		const StandardBoolean operator!=( const ns_holderType::BooleanHolder& value ) const;

		const StandardBoolean operator!=( const StandardBoolean& other ) const;
		
		friend const StandardBoolean operator!=( const ns_holderType::BooleanHolder& value, const StandardBoolean& other );

		const StandardBoolean operator<( const ns_holderType::BooleanHolder& value ) const;

		const StandardBoolean operator<( const StandardBoolean& other ) const;
		
		friend const StandardBoolean operator<( const ns_holderType::BooleanHolder& value, const StandardBoolean& other );

		const StandardBoolean operator>( const ns_holderType::BooleanHolder& value ) const;

		const StandardBoolean operator>( const StandardBoolean& other ) const;
		
		friend const StandardBoolean operator>( const ns_holderType::BooleanHolder& value, const StandardBoolean& other );

		const StandardBoolean operator<=( const ns_holderType::BooleanHolder& value ) const;

		const StandardBoolean operator<=( const StandardBoolean& other ) const;
		
		friend const StandardBoolean operator<=( const ns_holderType::BooleanHolder& value, const StandardBoolean& other );

		const StandardBoolean operator>=( const ns_holderType::BooleanHolder& value ) const;

		const StandardBoolean operator>=( const StandardBoolean& other ) const;
		
		friend const StandardBoolean operator>=( const ns_holderType::BooleanHolder& value, const StandardBoolean& other );



		const StandardBoolean operator!() const;



		friend std::istream& operator>>( std::istream& in, StandardBoolean& other );
		
		friend std::ostream& operator<<( std::ostream& out, const StandardBoolean& other );

		const StandardBoolean& consoleIn();

		const StandardBoolean& consoleOut() const;
		

		
		template<typename OtherNumericType = bool>
		OtherNumericType getValue() const;
		
		const bool& toBool() const;
		
		char toChar() const;
		
		unsigned char toUnsignedChar() const;
		
		short toShort() const;
		
		unsigned short toUnsignedShort() const;
		
		int toInt() const;
		
		unsigned int toUnsignedInt() const;
		
		long toLong() const;
		
		unsigned long toUnsignedLong() const;
		
		long long toLongLong() const;
		
		unsigned long long toUnsignedLongLong() const;
		
		float toFloat() const;
		
		double toDouble() const;
		
		long double toLongDouble() const;

	private:

		bool m_value;
	};



}	// namespace ns_standardType



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_STANDARDBOOLEAN_H_