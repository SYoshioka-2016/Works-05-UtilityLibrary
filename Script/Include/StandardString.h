#ifndef _INCLUDE_GUARD_STANDARDSTRING_H_
#define _INCLUDE_GUARD_STANDARDSTRING_H_



#include <StringHolder.h>

#include <iostream>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



namespace ns_standardType
{


	
	template<typename CharacterType>
	class StandardString
	{
	public:

		StandardString();
		
		template<typename OtherCharacterType>
		StandardString( const StandardString<OtherCharacterType>& other );

		StandardString( const ns_holderType::StringHolder& value );

		~StandardString();
		
	

		StandardString& operator=( const StandardString& other );
		
		template<typename OtherCharacterType>
		StandardString& operator=( const StandardString<OtherCharacterType>& other );

		StandardString& operator=( const ns_holderType::StringHolder& value );
		
		template<typename OtherCharacterType>
		StandardString& operator()( const StandardString<OtherCharacterType>& other );
		
		StandardString& operator()( const ns_holderType::StringHolder& value );


		
		template<typename OtherCharacterType>
		const StandardString operator+( const StandardString<OtherCharacterType>& other ) const;
		
		const StandardString operator+( const ns_holderType::StringHolder& value ) const;
		
		template<typename OtherCharacterType>
		friend const StandardString<OtherCharacterType> operator+( const ns_holderType::StringHolder& value, const StandardString<OtherCharacterType>& other );
		


		template<typename OtherCharacterType>
		StandardString& operator+=( const StandardString<OtherCharacterType>& other );
		
		StandardString& operator+=( const ns_holderType::StringHolder& value );



		CharacterType& operator[]( const unsigned int index );
		

		
		template<typename OtherCharacterType>
		friend std::istream& operator>>( std::istream& in, StandardString& other );
		
		template<typename OtherCharacterType>
		friend std::ostream& operator<<( std::ostream& out, const StandardString& other );

		const StandardString& consoleIn();

		const StandardString& consoleOut() const;



		const std::basic_string<CharacterType>& getValue() const;
	
		template<typename OtherCharacterType>
		std::basic_string<OtherCharacterType> toString() const;

		std::string toStringA() const;

		std::wstring toWString() const;



		size_t size() const;

		bool empty() const;

	private:

		void setValue( const ns_holderType::StringHolder& value );

		void setValue( const std::basic_string<CharacterType>& value );
		
		const ns_holderType::StringHolder toStringHolder() const;

	private:
		
		std::basic_string<CharacterType> m_value;
	};



	using StandardMultibyteString		= StandardString<char>;

	using StandardWideString			= StandardString<wchar_t>;



}	// namespace ns_standardType



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_STANDARDSTRING_H_