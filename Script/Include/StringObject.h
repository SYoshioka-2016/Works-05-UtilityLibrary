#ifndef _INCLUDE_GUARD_STRINGOBJECT_H_
#define _INCLUDE_GUARD_STRINGOBJECT_H_



#include <BasicObject.h>
#include <StringHolder.h>

#include <memory>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



namespace ns_basicObjectType
{



	class StringObject : public BasicObject
	{
	public:

		StringObject();

//		explicit StringObject( const StringObject& other );
		StringObject( const StringObject& other );

		StringObject( const ns_standardType::ns_holderType::StringHolder& value );
		
		virtual ~StringObject();



		StringObject& operator=( const StringObject& other );

		StringObject& operator=( const ns_standardType::ns_holderType::StringHolder& value );

		StringObject& operator()( const StringObject& other );

		StringObject& operator()( const ns_standardType::ns_holderType::StringHolder& value );
		
		

		const StringObject operator+( const StringObject& other ) const;

		const StringObject operator+( const ns_standardType::ns_holderType::StringHolder& value ) const;
		
		

		StringObject& operator+=( const StringObject& other );

		StringObject& operator+=( const ns_standardType::ns_holderType::StringHolder& value );


/*
		operator std::string() const;

		operator const char*() const;

		operator std::wstring() const;

		operator const wchar_t*() const;
*/


		std::string getString() const;

		std::wstring getWString() const;



		virtual ns_standardType::StandardString<char> toString() const override;

	protected:

		void releaseObject() override;

		virtual void setValue( const ns_standardType::ns_holderType::StringHolder& value );

		virtual ns_standardType::StandardString<char> toConsoleOutString() const override;

	private:
		
		std::unique_ptr<std::string> m_value;
	};



}	// namespace ns_basicObjectType



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_STRINGOBJECT_H_