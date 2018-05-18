#ifndef _INCLUDE_GUARD_STRINGUTIL_H_
#define _INCLUDE_GUARD_STRINGUTIL_H_



#include <string>



namespace ns_myUtility 
{



namespace ns_stringUtil
{



	std::string replaceString(
		const std::string& src,
		const std::string& from,
		const std::string& to
	);



	std::string numericToString( const double value );



	std::string charToString( const char value );



	double stringToNumeric( const std::string& value );



	std::wstring stringToWString( const std::string& src );


	
	std::string wstringToString( const std::wstring& src );



}	// namespace ns_stringUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_STRINGUTIL_H_