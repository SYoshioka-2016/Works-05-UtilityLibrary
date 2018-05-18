#ifndef _INCLUDE_GUARD_NUMERICHOLDER_H_
#define _INCLUDE_GUARD_NUMERICHOLDER_H_



#include <HolderBase.h>

#include <string>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



namespace ns_standardType
{



namespace ns_holderType
{



	class NumericHolder
	{
	public:

		NumericHolder();

		NumericHolder( const LargestFloatDataType value );

		NumericHolder( const std::string& value );

		NumericHolder( const std::wstring& value );

		explicit NumericHolder( const NumericHolder& other );

		~NumericHolder();
		


		NumericHolder& operator=( const NumericHolder& other ) = delete;



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


		
		template<typename NumericType = LargestFloatDataType>
		NumericType getValue() const;



		bool isInteger() const;

		bool isFloat() const;

	private:

		void setValue( const LargestFloatDataType value );

	private:

		LargestFloatDataType		m_value;

		bool						m_isInteger;
	};



}	// namespace ns_holderType
	


}	// namespace ns_standardType



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_NUMERICHOLDER_H_