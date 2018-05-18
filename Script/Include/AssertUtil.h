#ifndef _INCLUDE_GUARD_ASSERTUTIL_H_
#define _INCLUDE_GUARD_ASSERTUTIL_H_



#include <Windows.h>
#include <string>



#define STRONG_ASSERT( exp, ... ) ( ( !!( exp ) ) || ( ns_myUtility::ns_AssertUtil::quit( __FILE__, __LINE__, #exp, "Assertion Failed!!!", __VA_ARGS__ ), 0 ) )



#ifndef NDEBUG
#define DEBUG_ASSERT( exp, ... ) ( ( !!( exp ) ) || ( ns_myUtility::ns_AssertUtil::quit( __FILE__, __LINE__, #exp, "Assertion Failed!!!", __VA_ARGS__ ), 0 ) )
#else
#define DEBUG_ASSERT( exp, ... )
#endif	// #ifndef NDEBUG



#define HALT_APPLICATION( ... ) ( ns_myUtility::ns_AssertUtil::halt( __FILE__, __LINE__, __VA_ARGS__ ), 0 )



namespace ns_myUtility
{



namespace ns_AssertUtil
{

	

	void quit(
		const std::string& filename,
		const unsigned int line,
		const std::string& expression,
		const std::string& windowTitle,
		const std::string& messageText = ""
	);



	void halt(
		const std::string& filename,
		const unsigned int line,
		const std::string& messageText = ""
	);



}	// namespace ns_AssertUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_ASSERTUTIL_H_