#ifndef _INCLUDE_GUARD_VECTOR2_H_
#define _INCLUDE_GUARD_VECTOR2_H_



#include <VectorX.h>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



	template<typename T>
	struct Vector2 : public VectorX<T, 2>
	{
	public:

		static const Vector2 zero;

		static const Vector2 one;

		static const Vector2 right;

		static const Vector2 left;

		static const Vector2 up;

		static const Vector2 down;

	public:

		Vector2();

		Vector2( const double n1, const double n2 );

		template<typename otherT, unsigned int otherDimensionality>
		Vector2( const NumericBuffer<otherT, otherDimensionality>& other );

		virtual ~Vector2();
	


		template<typename otherT, unsigned int otherDimensionality>
		const NumericBuffer<T, 2>& operator=( const NumericBuffer<otherT, otherDimensionality>& other );

		

		template<typename NType = float>
		NType angle() const;

		template<typename NType = float, typename otherT>
		NType angle( const Vector2<otherT>& other ) const;

		template<typename NType = float, typename otherT1, typename otherT2>
		static NType angle( const Vector2<otherT1>& v1, const Vector2<otherT2>& v2 );

		template<typename NType = float, typename otherT>
		NType cross( const Vector2<otherT>& other ) const;

		template<typename NType = float, typename otherT1, typename otherT2>
		static NType cross( const Vector2<otherT1>& v1, const Vector2<otherT2>& v2 );
	};



	template<typename T>
	const Vector2<T> Vector2<T>::zero( 0, 0 );

	template<typename T>
	const Vector2<T> Vector2<T>::one( 1, 1 );

	template<typename T>
	const Vector2<T> Vector2<T>::right( 1, 0 );

	template<typename T>
	const Vector2<T> Vector2<T>::left( -1, 0 );

	template<typename T>
	const Vector2<T> Vector2<T>::up( 0, 1 );

	template<typename T>
	const Vector2<T> Vector2<T>::down( 0, -1 );



	template<typename T>
	inline Vector2<T>::Vector2() : Vector2<T>( 0, 0 )
	{

	}



	template<typename T>
	inline Vector2<T>::Vector2( const double n1, const double n2 ) :
		Vector2( NumericBuffer<T, 2>( n1, n2 ) )
	{

	}



	template<typename T>
	template<typename otherT, unsigned int otherDimensionality>
	inline Vector2<T>::Vector2( const NumericBuffer<otherT, otherDimensionality>& other ) :
		VectorX<T, 2>( other )
	{

	}



	template<typename T>
	inline Vector2<T>::~Vector2()
	{

	}



	template<typename T>
	template<typename otherT, unsigned int otherDimensionality>
	inline const NumericBuffer<T, 2>& Vector2<T>::operator=( const NumericBuffer<otherT, otherDimensionality>& other )
	{
		return this->operator()( other );
	}



	template<typename T>
	template<typename NType>
	inline NType Vector2<T>::angle() const
	{
		const auto length = this->length();

		if ( length <= 0 ) { return 0; }



		const auto cosTheta = this->getElement( 0 ) / length;

		const auto radAngle = std::acos( cosTheta );

		const auto degAngle = ns_mathUtil::rad2Deg( radAngle ) - ( ( this->getElement( 1 ) < 0 ) ? 360 : 0 );



		return static_cast<NType>( degAngle );
	}



	template<typename T>
	template<typename NType, typename otherT>
	inline NType Vector2<T>::angle( const Vector2<otherT>& other ) const
	{
		return angle( *this, other );
	}



	template<typename T>
	template<typename NType, typename otherT1, typename otherT2>
	inline NType Vector2<T>::angle( const Vector2<otherT1>& v1, const Vector2<otherT2>& v2 )
	{
		const auto v1Length = v1.length();

		if ( v1Length <= 0 ) { return 0; }

		const auto v2Length = v2.length();

		if ( v2Length <= 0 ) { return 0; }



		const auto cosTheta = dot<double>( v1, v2 ) / ( v1Length * v2Length );

		const auto radAngle = std::acos( cosTheta );

		const auto degAngle = ns_mathUtil::rad2Deg( radAngle );



		return static_cast<NType>( degAngle );
	}



	template<typename T>
	template<typename NType, typename otherT>
	inline NType Vector2<T>::cross( const Vector2<otherT>& other ) const
	{
		return this->cross( *this, other );
	}



	template<typename T>
	template<typename NType, typename otherT1, typename otherT2>
	inline NType Vector2<T>::cross( const Vector2<otherT1>& v1, const Vector2<otherT2>& v2 )
	{
		return v1.x * v2.y - v1.y * v2.x;
	}



	using Vector2I = Vector2<int>;

	using Vector2F = Vector2<float>;

	using Vector2D = Vector2<double>;



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_VECTOR2_H_