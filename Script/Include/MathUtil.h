#ifndef _INCLUDE_GUARD_MATHUTIL_H_
#define _INCLUDE_GUARD_MATHUTIL_H_



namespace ns_myUtility 
{



namespace ns_mathUtil
{

	

	bool isPositiveNumber( const double value );

	bool isNegativeNumber( const double value );

	bool isInteger( const double value );

	bool isDecimal( const double value );

	double integerPart( const double value );

	double decimalPart( const double value );
	
	double clamp( const double value, const double min, const double max );

	double loop( const double value, const double min, const double max );

	double rad2Deg( const double radians );

	double deg2Rad( const double degrees );

	double convertDegreesBetween0To360( const double degrees );

	double convertDegreesBetweenMinus180To180( const double degrees );

	double pi();

	int sign( const double v );



}	// namespace ns_mathUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_MATHUTIL_H_