#include <MathUtil.h>

#define _USE_MATH_DEFINES
#include <math.h>

#include <algorithm>
#include <AssertUtil.h>



namespace ns_myUtility
{



namespace ns_mathUtil
{



	bool isPositiveNumber( const double value )
	{
		return value > 0;
	}



	bool isNegativeNumber( const double value )
	{
		return value < 0;
	}



	bool isInteger( const double value )
	{
		//http://ameblo.jp/ameblo-prue/entry-10017189139.html
		return ceil( value ) == floor( value );
	}



	bool isDecimal( const double value )
	{
		return !isInteger( value );
	}



	double integerPart( const double value )
	{
		double iptr;
    
		modf( value, &iptr );

		return iptr;
	}



	double decimalPart( const double value )
	{
		double iptr;
    
		return modf( value, &iptr );
	}



	double clamp( const double value, const double min, const double max )
	{
		DEBUG_ASSERT( min <= max );

		// C2589エラー対策としてminやmaxを含む式を括弧でくくり、
		// 関数形式マクロ( function-like macro )として扱われないようにする。
		// http://d.hatena.ne.jp/yohhoy/20120115/p1
		return (std::min)( (std::max)( value, min ), max );
	}


	// ラップの範囲は dMin 以上 dMax 未満
	double loop( const double value, const double min, const double max ) 
	{
		DEBUG_ASSERT( min <= max );



		const double ret = std::fmod( value - min, max - min );

		return ( ret >= 0 ) ? ( ret + min ) : ( ret + max );
	}



	double rad2Deg( const double radians )
	{
		return radians * ( 180.0 / pi() );
	}



	double deg2Rad( const double degrees )
	{
		return degrees * ( pi() / 180.0 );
	}



	double convertDegreesBetween0To360( const double degrees )
	{
		return loop( degrees, 0, 360 );
	}

	double convertDegreesBetweenMinus180To180( const double degrees )
	{
		return loop( degrees, -180, 180 );
	}



	double pi()
	{
		return M_PI;
	}



	int sign( const double v )
	{
		return ( v >= 0 ) ? 1 : -1;
	}



}	// namespace ns_mathUtil



}	// namespace ns_myUtility