#ifndef _INCLUDE_GUARD_VECTORX_H_
#define _INCLUDE_GUARD_VECTORX_H_



#include <NumericX.h>
#include <MathUtil.h>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



	template<typename T, unsigned int dimensionality>
	struct VectorX : public NumericX<T, dimensionality>
	{
	public:

		VectorX();
	
		template<typename otherT, unsigned int otherDimensionality>
		VectorX( const NumericBuffer<otherT, otherDimensionality>& other );
	


		template<typename otherT, unsigned int otherDimensionality>
		const NumericBuffer& operator=( const NumericBuffer<otherT, otherDimensionality>& other );


	
		VectorX filled( const double value ) const;

		VectorX zeroCleared() const;

		void normalize();

		VectorX normalized() const;

		template<typename NType = float>
		NType length() const;
	
		template<typename NType = float>
		NType distance( const VectorX<T, dimensionality>& other ) const;
	
		template<typename NType = float>
		static NType distance( const VectorX<T, dimensionality>& v1, const VectorX<T, dimensionality>& v2 );
	
		template<typename NType = float>
		NType dot( const VectorX<T, dimensionality>& other ) const;
		
		template<typename NType = float, typename otherT1, typename otherT2>
		static NType dot( const VectorX<otherT1, dimensionality>& v1, const VectorX<otherT2, dimensionality>& v2 );

		static VectorX lerp( const VectorX& from, const VectorX& to, const double t );
	};



	template<typename T, unsigned int dimensionality>
	inline VectorX<T, dimensionality>::VectorX() : VectorX<T, dimensionality>( NumericBuffer<T, dimensionality>() )
	{

	}



	template<typename T, unsigned int dimensionality>
	template<typename otherT, unsigned int otherDimensionality>
	inline VectorX<T, dimensionality>::VectorX( const NumericBuffer<otherT, otherDimensionality>& other ) : NumericX<T, dimensionality>( other )
	{

	}



	template<typename T, unsigned int dimensionality>
	template<typename otherT, unsigned int otherDimensionality>
	inline const NumericBuffer<T, dimensionality>& VectorX<T, dimensionality>::operator=( const NumericBuffer<otherT, otherDimensionality>& other )
	{
		return this->operator()( other );
	}



	template<typename T, unsigned int dimensionality>
	inline VectorX<T, dimensionality> VectorX<T, dimensionality>::filled( const double value ) const
	{
		VectorX<T, dimensionality> ret( *this );

		ret.fill( value );

		return ret;
	}



	template<typename T, unsigned int dimensionality>
	inline VectorX<T, dimensionality> VectorX<T, dimensionality>::zeroCleared() const
	{
		return this->filled( 0 );
	}



	template<typename T, unsigned int dimensionality>
	inline void VectorX<T, dimensionality>::normalize()
	{
		const T length = this->length();

		if ( length > 0 ) 
		{
			*this /= length;
		}
	}



	template<typename T, unsigned int dimensionality>
	inline VectorX<T, dimensionality> VectorX<T, dimensionality>::normalized() const
	{
		VectorX<T, dimensionality> ret = *this;

		ret.normalize();

		return ret;
	}



	template<typename T, unsigned int dimensionality>
	template<typename NType>
	inline NType VectorX<T, dimensionality>::length() const
	{
		double d = 0;

		for ( int i = 0; i < dimensionality; i++ )
		{
			d += std::pow( this->getElement( i ), 2 );
		}

		return static_cast<NType>( std::sqrt( d ) );
	}



	template<typename T, unsigned int dimensionality>
	template<typename NType>
	inline NType VectorX<T, dimensionality>::distance( const VectorX<T, dimensionality>& other ) const
	{
		return this->distance( *this, other );
	}



	template<typename T, unsigned int dimensionality>
	template<typename NType>
	inline NType VectorX<T, dimensionality>::distance( const VectorX<T, dimensionality>& v1, const VectorX<T, dimensionality>& v2 )
	{
		return VectorX<T, dimensionality>( v2 - v1 ).length();
	}



	template<typename T, unsigned int dimensionality>
	template<typename NType>
	inline NType VectorX<T, dimensionality>::dot( const VectorX<T, dimensionality>& other ) const
	{
		return this->dot( *this, other );
	}



	template<typename T, unsigned int dimensionality>
	template<typename NType, typename otherT1, typename otherT2>
	inline NType VectorX<T, dimensionality>::dot( const VectorX<otherT1, dimensionality>& v1, const VectorX<otherT2, dimensionality>& v2 )
	{
		double d = 0;

		for ( int i = 0; i < dimensionality; i++ )
		{
			d += v1.getElement( i ) * v2.getElement( i );
		}

		return static_cast<NType>( d );
	}



	template<typename T, unsigned int dimensionality>
	inline VectorX<T, dimensionality> VectorX<T, dimensionality>::lerp( const VectorX & from, const VectorX & to, const double t )
	{
		return from + ( ( to - from ) * t );
	}



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_VECTORX_H_