#ifndef _INCLUDE_GUARD_BOOLEANHOLDER_H_
#define _INCLUDE_GUARD_BOOLEANHOLDER_H_



#include <HolderBase.h>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



namespace ns_standardType
{



namespace ns_holderType
{



	class BooleanHolder
	{
	public:

		BooleanHolder();

		BooleanHolder( const LargestFloatDataType value );

		explicit BooleanHolder( const BooleanHolder& other );
		


		BooleanHolder& operator=( const BooleanHolder& other ) = delete;



		operator bool() const;
		
		operator char() const;

		operator unsigned char() const;

		operator short() const;

		operator unsigned short() const;

		operator int() const;

		operator unsigned int() const;

		operator long() const;

		operator unsigned long() const;

		operator float() const;

		operator double() const;

		operator long double() const;



		template<typename NumericType = int>
		NumericType getValue() const;

	private:

		void setValue( const long double value );

	private:

		bool m_value;
	};



}	// namespace ns_holderType



}	// namespace ns_standardType



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_BOOLEANHOLDER_H_