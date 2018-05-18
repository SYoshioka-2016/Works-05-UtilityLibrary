#include <StringUtil.h>
#include <AssertUtil.h>

#include <sstream>
#include <atlstr.h>



namespace ns_myUtility 
{



namespace ns_stringUtil
{



	std::string replaceString( const std::string& src, const std::string& from, const std::string& to )
	{
		std::string ret = src;

		std::string::size_type pos( ret.find( from ) );

		while( pos != std::string::npos )
		{
			ret.replace( pos, from.length(), to );

			pos = ret.find( from, pos + to.length() );
		}

		return ret;
	}



	std::string numericToString( const double value )
	{
		std::stringstream ss;

		ss.precision( 14 );

		ss << value;

		return ss.str();
	}


/*
	std::string charToString( const char value )
	{
char buffer[10] = { };

sprintf_s( buffer, "%c", value );
	}
*/


	double stringToNumeric( const std::string& value )
	{
		double ret = 0;

		char* endp = nullptr;

		ret = strtod( value.c_str(), &endp );

		const bool isFailed = ( *endp != '\0' );

		if ( isFailed )
		{
			std::string str;
			str += "Žw’è‚Ì•¶Žš—ñ \"";
			str += value;
			str += "\" ‚ðŠ®‘S‚É•ÏŠ·‚Å‚«‚Ü‚¹‚ñ‚Å‚µ‚½B";

			HALT_APPLICATION( str );
		}

		return ret;
	}



	std::wstring stringToWString( const std::string& src )
	{
// http://vllv.us/Junk/_T/
		return std::wstring( CStringW( src.c_str() ) );
	}



	std::string wstringToString( const std::wstring& src )
	{
		return std::string( CStringA( src.c_str() ) );
	}



}	// namespace ns_stringUtil



}	// namespace ns_myUtility