#ifndef _INCLUDE_GUARD_NUMERICX_H_
#define _INCLUDE_GUARD_NUMERICX_H_



#include <NumericBuffer2D.h>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



	template<typename T, unsigned int dimensionality>
	struct NumericX : public NumericBuffer<T, dimensionality>
	{
	public:

		NumericX();

		template<typename otherT, unsigned int otherDimensionality>
		NumericX( const NumericBuffer<otherT, otherDimensionality>& other );
	
		virtual ~NumericX();

		
		
		template<typename otherT, unsigned int otherColumn>
		NumericBuffer<T, otherColumn> operator*( const NumericBuffer2D<otherT, dimensionality, otherColumn>& other ) const;

		template<typename otherT, unsigned int otherDimensionality>
		const NumericBuffer& operator=( const NumericBuffer<otherT, otherDimensionality>& other );
		
		template<typename otherT, unsigned int otherColumn>
		const NumericBuffer<T, otherColumn>& operator*=( const NumericBuffer2D<otherT, dimensionality, otherColumn>& other );



		const T _getX() const;

		void _setX( const T& n );

		const T _getY() const;

		void _setY( const T& n );

		const T _getZ() const;

		void _setZ( const T& n );

		const T _getW() const;

		void _setW( const T& n );



		NumericX<T, 2> _getXY() const;

		template<typename otherT, unsigned int otherDimensionality>
		void _setXY( const NumericX<otherT, otherDimensionality>& other );

		NumericX<T, 3> _getXYZ() const;

		template<typename otherT, unsigned int otherDimensionality>
		void _setXYZ( const NumericX<otherT, otherDimensionality>& other );

		NumericX<T, 4> _getXYZW();

		template<typename otherT, unsigned int otherDimensionality>
		void _setXYZW( const NumericX<otherT, otherDimensionality>& other );



		__declspec( property( get = _getX, put = _setX ) ) T x;
		__declspec( property( get = _getX, put = _setX ) ) T s;
		__declspec( property( get = _getX, put = _setX ) ) T r;

		__declspec( property( get = _getY, put = _setY ) ) T y;
		__declspec( property( get = _getY, put = _setY ) ) T t;
		__declspec( property( get = _getY, put = _setY ) ) T g;

		__declspec( property( get = _getZ, put = _setZ ) ) T z;
		__declspec( property( get = _getZ, put = _setZ ) ) T u;
		__declspec( property( get = _getZ, put = _setZ ) ) T b;

		__declspec( property( get = _getW, put = _setW ) ) T w;
		__declspec( property( get = _getW, put = _setW ) ) T v;
		__declspec( property( get = _getW, put = _setW ) ) T a;

		__declspec( property( get = _getXY, put = _setXY ) ) NumericX<T, 2> xy;
		__declspec( property( get = _getXY, put = _setXY ) ) NumericX<T, 2> st;
		__declspec( property( get = _getXY, put = _setXY ) ) NumericX<T, 2> rg;

		__declspec( property( get = _getXYZ, put = _setXYZ ) ) NumericX<T, 3> xyz;
		__declspec( property( get = _getXYZ, put = _setXYZ ) ) NumericX<T, 3> stu;
		__declspec( property( get = _getXYZ, put = _setXYZ ) ) NumericX<T, 3> rgb;

		__declspec( property( get = _getXYZW, put = _setXYZW ) ) NumericX<T, 4> xyzw;
		__declspec( property( get = _getXYZW, put = _setXYZW ) ) NumericX<T, 4> stuv;
		__declspec( property( get = _getXYZW, put = _setXYZW ) ) NumericX<T, 4> rgba;
	};



	template<typename T, unsigned int dimensionality>
	inline NumericX<T, dimensionality>::NumericX() : NumericBuffer<T, dimensionality>()
	{

	}



	template<typename T, unsigned int dimensionality>
	template<typename otherT, unsigned int otherDimensionality>
	inline NumericX<T, dimensionality>::NumericX( const NumericBuffer<otherT, otherDimensionality>& other ) : NumericBuffer<T, dimensionality>( other )
	{

	}
	



	template<typename T, unsigned int dimensionality>
	inline NumericX<T, dimensionality>::~NumericX()
	{

	}



	template<typename T, unsigned int dimensionality>
	template<typename otherT, unsigned int otherColumn>
	inline NumericBuffer<T, otherColumn> NumericX<T, dimensionality>::operator*( const NumericBuffer2D<otherT, dimensionality, otherColumn>& other ) const
	{
		NumericBuffer<T, otherColumn> ret;

		for ( unsigned int i = 0; i < otherColumn; i++ )
		{
			for ( unsigned int j = 0; j < dimensionality; j++ )
			{
				ret[i] += static_cast<T>( this->getElement( j ) * other.getElement( j, i ) );
			}
		}

		return ret;
	}



	template<typename T, unsigned int dimensionality>
	template<typename otherT, unsigned int otherDimensionality>
	inline const NumericBuffer<T, dimensionality>& NumericX<T, dimensionality>::operator=( const NumericBuffer<otherT, otherDimensionality>& other )
	{
		return this->operator()( other );
	}



	template<typename T, unsigned int dimensionality>
	template<typename otherT, unsigned int otherColumn>
	inline const NumericBuffer<T, otherColumn>& NumericX<T, dimensionality>::operator*=( const NumericBuffer2D<otherT, dimensionality, otherColumn>& other )
	{
		return this->operator=( *this * other );
	}



	template<typename T, unsigned int dimensionality>
	inline const T NumericX<T, dimensionality>::_getX() const
	{
		return this->getElement( 0 );
	}



	template<typename T, unsigned int dimensionality>
	inline void NumericX<T, dimensionality>::_setX( const T & n )
	{
		this->operator[]( 0 ) = n;
	}



	template<typename T, unsigned int dimensionality>
	inline const T NumericX<T, dimensionality>::_getY() const
	{
		return this->getElement( 1 );
	}



	template<typename T, unsigned int dimensionality>
	inline void NumericX<T, dimensionality>::_setY( const T & n )
	{
		this->operator[]( 1 ) = n;
	}



	template<typename T, unsigned int dimensionality>
	inline const T NumericX<T, dimensionality>::_getZ() const
	{
		return this->getElement( 2 );
	}



	template<typename T, unsigned int dimensionality>
	inline void NumericX<T, dimensionality>::_setZ( const T & n )
	{
		this->operator[]( 2 ) = n;
	}



	template<typename T, unsigned int dimensionality>
	inline const T NumericX<T, dimensionality>::_getW() const
	{
		return this->getElement( 3 );
	}



	template<typename T, unsigned int dimensionality>
	inline void NumericX<T, dimensionality>::_setW( const T & n )
	{
		this->operator[]( 3 ) = n;
	}



	template<typename T, unsigned int dimensionality>
	inline NumericX<T, 2> NumericX<T, dimensionality>::_getXY() const
	{
		return NumericX<T, 2>( { static_cast<double>( this->_getX() ), static_cast<double>( this->_getY() ) } );
	}



	template<typename T, unsigned int dimensionality>
	template<typename otherT, unsigned int otherDimensionality>
	inline void NumericX<T, dimensionality>::_setXY( const NumericX<otherT, otherDimensionality>& other )
	{
		this->operator()( static_cast<NumericX<T, 2>>( other ) );
	}



	template<typename T, unsigned int dimensionality>
	inline NumericX<T, 3> NumericX<T, dimensionality>::_getXYZ() const
	{
		return NumericX<T, 3>( { static_cast<double>( this->_getX() ), static_cast<double>( this->_getY() ), static_cast<double>( this->_getZ() ) } );
	}



	template<typename T, unsigned int dimensionality>
	template<typename otherT, unsigned int otherDimensionality>
	inline void NumericX<T, dimensionality>::_setXYZ( const NumericX<otherT, otherDimensionality>& other )
	{
		this->operator()( static_cast<NumericX<T, 3>>( other ) );
	}



	template<typename T, unsigned int dimensionality>
	inline NumericX<T, 4> NumericX<T, dimensionality>::_getXYZW()
	{
		return NumericX<T, 4>( { static_cast<double>( this->_getX() ), static_cast<double>( this->_getY() ), static_cast<double>( this->_getZ() ), static_cast<double>( this->_getW() ) } );
	}



	template<typename T, unsigned int dimensionality>
	template<typename otherT, unsigned int otherDimensionality>
	inline void NumericX<T, dimensionality>::_setXYZW(const NumericX<otherT, otherDimensionality>& other)
	{
		this->operator()( static_cast<NumericX<T, 4>>( other ) );
	}



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_NUMERICX_H_