#include <StandardString.h>

#include <StringUtil.h>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



namespace ns_standardType
{


	
	template<typename CharacterType>
	StandardString<CharacterType>::StandardString() :
		m_value()
	{

	}


	
	template<typename CharacterType>
	template<typename OtherCharacterType>
	StandardString<CharacterType>::StandardString( const StandardString<OtherCharacterType>& other ) :
		StandardString( other.getValue() )
	{

	}


	
	template<typename CharacterType>
	StandardString<CharacterType>::StandardString( const ns_holderType::StringHolder& value ) :
		StandardString()
	{
		this->operator()( value );
	}


	
	template<typename CharacterType>
	StandardString<CharacterType>::~StandardString()
	{
		this->m_value.clear();
	}



	template<typename CharacterType>
	StandardString<CharacterType>& StandardString<CharacterType>::operator=( const StandardString& other )
	{
		return this->operator()( other );
	}



	template<typename CharacterType>
	template<typename OtherCharacterType>
	StandardString<CharacterType>& StandardString<CharacterType>::operator=( const StandardString<OtherCharacterType>& other )
	{
		return this->operator()( other );
	}



	template<typename CharacterType>
	StandardString<CharacterType>& StandardString<CharacterType>::operator=( const ns_holderType::StringHolder& value )
	{
		return this->operator()( value );
	}



	template<typename CharacterType>
	template<typename OtherCharacterType>
	StandardString<CharacterType>& StandardString<CharacterType>::operator()( const StandardString<OtherCharacterType>& other )
	{
		this->setValue( other.getValue() );

		return *this;
	}



	template<typename CharacterType>
	StandardString<CharacterType>& StandardString<CharacterType>::operator()( const ns_holderType::StringHolder& value )
	{
		this->setValue( value );

		return *this;
	}



	template<typename CharacterType>
	template<typename OtherCharacterType>
	const StandardString<CharacterType> StandardString<CharacterType>::operator+( const StandardString<OtherCharacterType>& other ) const
	{
		return this->m_value + other.toString<CharacterType>();
	}



	template<typename CharacterType>
	const StandardString<CharacterType> StandardString<CharacterType>::operator+( const ns_holderType::StringHolder& value ) const
	{
		return this->m_value + static_cast<std::basic_string<CharacterType>>( value );
	}

	

	template<typename OtherCharacterType>
	const StandardString<OtherCharacterType> operator+( const ns_holderType::StringHolder& value, const StandardString<OtherCharacterType>& other )
	{
		return static_cast<std::basic_string<OtherCharacterType>>( value ) + other.getValue();
	}



	template<typename CharacterType>
	template<typename OtherCharacterType>
	StandardString<CharacterType>& StandardString<CharacterType>::operator+=( const StandardString<OtherCharacterType>& other )
	{
		return this->operator=( this->operator+( other ) );
	}



	template<typename CharacterType>
	StandardString<CharacterType>& StandardString<CharacterType>::operator+=( const ns_holderType::StringHolder& value )
	{
		return this->operator=( this->operator+( value ) );
	}



	template<typename CharacterType>
	CharacterType& StandardString<CharacterType>::operator[]( const unsigned int index )
	{
		return this->m_value.at( index );
	}



	template<typename OtherCharacterType>
	std::istream& operator>>( std::istream& in, StandardString<OtherCharacterType>& other )
	{
		std::string tmp;

		in >> tmp;

		other( tmp );

		return in;
	}


	
	template<typename OtherCharacterType>
	std::ostream& operator<<( std::ostream& out, const StandardString<OtherCharacterType>& other )
	{
		out << other.toStringA();

		return out;
	}


	
	template<typename CharacterType>
	const StandardString<CharacterType>& StandardString<CharacterType>::consoleIn()
	{
		std::cin >> *this;

		return *this;
	}


	
	template<typename CharacterType>
	const StandardString<CharacterType>& StandardString<CharacterType>::consoleOut() const
	{
		std::cout << *this << std::endl;

		return *this;
	}



	template<typename CharacterType>
	const std::basic_string<CharacterType>& StandardString<CharacterType>::getValue() const
	{
		return this->m_value;
	}



	template<typename CharacterType>
	template<typename OtherCharacterType>
	std::basic_string<OtherCharacterType> StandardString<CharacterType>::toString() const
	{
		return static_cast<std::basic_string<OtherCharacterType>>( this->toStringHolder() );
	}



	template<typename CharacterType>
	std::string StandardString<CharacterType>::toStringA() const
	{
		return this->toStringHolder().getString();
	}



	template<typename CharacterType>
	std::wstring StandardString<CharacterType>::toWString() const
	{
		return this->toStringHolder().getWString();
	}



	template<typename CharacterType>
	size_t StandardString<CharacterType>::size() const
	{
		return this->m_value.size();
	}



	template<typename CharacterType>
	bool StandardString<CharacterType>::empty() const
	{
		return this->m_value.empty();
	}


/*
	template<typename CharacterType>
	template<typename OtherCharacterType>
	std::basic_string<OtherCharacterType> StandardString<CharacterType>::toString() const
	{
		return ns_stringUtil::convertString<OtherCharacterType>( this->m_value );
	}
*/


	template<typename CharacterType>
	void StandardString<CharacterType>::setValue( const ns_holderType::StringHolder& value )
	{
		if ( typeid( CharacterType ) == typeid( char ) )
		{
			this->setValue( value.getString() );
		}

		else if ( typeid( CharacterType ) == typeid( wchar_t ) )
		{
			this->setValue( value.getWString() );
		}
	}


	
	template<typename CharacterType>
	void StandardString<CharacterType>::setValue( const std::basic_string<CharacterType>& value )
	{
		this->m_value = value;
	}



	template<typename CharacterType>
	const ns_holderType::StringHolder StandardString<CharacterType>::toStringHolder() const
	{
		return this->m_value;
	}



	template class StandardString<char>;
	template class StandardString<wchar_t>;



	template StandardString<char>::StandardString( const StandardString<char>& other );
	template StandardString<char>::StandardString( const StandardString<wchar_t>& other );

	template StandardString<wchar_t>::StandardString( const StandardString<char>& other );
	template StandardString<wchar_t>::StandardString( const StandardString<wchar_t>& other );
	


	template StandardString<char>& StandardString<char>::operator=( const StandardString<char>& other );
	template StandardString<char>& StandardString<char>::operator=( const StandardString<wchar_t>& other );

	template StandardString<wchar_t>& StandardString<wchar_t>::operator=( const StandardString<char>& other );
	template StandardString<wchar_t>& StandardString<wchar_t>::operator=( const StandardString<wchar_t>& other );
	


	template StandardString<char>& StandardString<char>::operator()( const StandardString<char>& other );
	template StandardString<char>& StandardString<char>::operator()( const StandardString<wchar_t>& other );

	template StandardString<wchar_t>& StandardString<wchar_t>::operator()( const StandardString<char>& other );
	template StandardString<wchar_t>& StandardString<wchar_t>::operator()( const StandardString<wchar_t>& other );
	


	template const StandardString<char> StandardString<char>::operator+( const StandardString<char>& other ) const;
	template const StandardString<char> StandardString<char>::operator+( const StandardString<wchar_t>& other ) const;
	
	template const StandardString<wchar_t> StandardString<wchar_t>::operator+( const StandardString<char>& other ) const;
	template const StandardString<wchar_t> StandardString<wchar_t>::operator+( const StandardString<wchar_t>& other ) const;
	


	template StandardString<char>& StandardString<char>::operator+=( const StandardString<char>& other );
	template StandardString<char>& StandardString<char>::operator+=( const StandardString<wchar_t>& other );

	template StandardString<wchar_t>& StandardString<wchar_t>::operator+=( const StandardString<char>& other );
	template StandardString<wchar_t>& StandardString<wchar_t>::operator+=( const StandardString<wchar_t>& other );



	template const StandardString<char> operator+( const ns_holderType::StringHolder& value, const StandardString<char>& other );
	template const StandardString<wchar_t> operator+( const ns_holderType::StringHolder& value, const StandardString<wchar_t>& other );


	
	template std::istream& operator>>( std::istream& in, StandardString<char>& other );
	template std::istream& operator>>( std::istream& in, StandardString<wchar_t>& other );


	
	template std::ostream& operator<<( std::ostream& out, const StandardString<char>& other );
	template std::ostream& operator<<( std::ostream& out, const StandardString<wchar_t>& other );

	

	template std::basic_string<char> StandardString<char>::toString() const;
	template std::basic_string<wchar_t> StandardString<char>::toString() const;

	template std::basic_string<char> StandardString<wchar_t>::toString() const;
	template std::basic_string<wchar_t> StandardString<wchar_t>::toString() const;



}	// namespace ns_standardType



}	// namespace ns_typeUtil



}	// namespace ns_myUtility