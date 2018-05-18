#ifndef _INCLUDE_GUARD_VECTOR3_H_
#define _INCLUDE_GUARD_VECTOR3_H_



#include <VectorX.h>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



	template<typename T>
	struct Vector3 : public VectorX<T, 3>
	{
	public:

		static const Vector3 zero;

		static const Vector3 one;

		static const Vector3 right;

		static const Vector3 left;

		static const Vector3 up;

		static const Vector3 down;

		static const Vector3 forward;

		static const Vector3 back;

	public:

		Vector3();

		Vector3( const double n1, const double n2, const double n3 = 0 );

		template<typename otherT, unsigned int otherDimensionality>
		Vector3( const NumericBuffer<otherT, otherDimensionality>& other );

		virtual ~Vector3();
	


		template<typename otherT, unsigned int otherDimensionality>
		const NumericBuffer<T, 3>& operator=( const NumericBuffer<otherT, otherDimensionality>& other );



		template<typename NType = float, typename otherT>
		NType angle( const Vector3<otherT>& other ) const;

		template<typename NType = float, typename otherT1, typename otherT2>
		static NType angle( const Vector3<otherT1>& v1, const Vector3<otherT2>& v2 );

		template<typename otherT>
		Vector3 cross( const Vector3<otherT>& other ) const;

		template<typename otherT1, typename otherT2>
		static Vector3 cross( const Vector3<otherT1>& v1, const Vector3<otherT2>& v2 );
	};



	template<typename T>
	const Vector3<T> Vector3<T>::zero( 0, 0, 0 );

	template<typename T>
	const Vector3<T> Vector3<T>::one( 1, 1, 1 );

	template<typename T>
	const Vector3<T> Vector3<T>::right( 1, 0, 0 );

	template<typename T>
	const Vector3<T> Vector3<T>::left( -1, 0, 0 );

	template<typename T>
	const Vector3<T> Vector3<T>::up( 0, 1, 0 );

	template<typename T>
	const Vector3<T> Vector3<T>::down( 0, -1, 0 );

	template<typename T>
	const Vector3<T> Vector3<T>::forward( 0, 0, 1 );

	template<typename T>
	const Vector3<T> Vector3<T>::back( 0, 0, -1 );



	template<typename T>
	inline Vector3<T>::Vector3() : Vector3<T>( 0, 0, 0 )
	{

	}



	template<typename T>
	inline Vector3<T>::Vector3( const double n1, const double n2, const double n3 ) :
		Vector3( NumericBuffer<T, 3>( n1, n2, n3 ) )
	{

	}



	template<typename T>
	template<typename otherT, unsigned int otherDimensionality>
	inline Vector3<T>::Vector3( const NumericBuffer<otherT, otherDimensionality>& other ) :
		VectorX<T, 3>( other )
	{

	}



	template<typename T>
	inline Vector3<T>::~Vector3()
	{

	}



	template<typename T>
	template<typename otherT, unsigned int otherDimensionality>
	inline const NumericBuffer<T, 3>& Vector3<T>::operator=( const NumericBuffer<otherT, otherDimensionality>& other )
	{
		return this->operator()( other );
	}



	template<typename T>
	template<typename NType, typename otherT>
	inline NType Vector3<T>::angle( const Vector3<otherT>& other ) const
	{
		return angle( *this, other );
	}



	template<typename T>
	template<typename NType, typename otherT1, typename otherT2>
	inline NType Vector3<T>::angle( const Vector3<otherT1>& v1, const Vector3<otherT2>& v2 )
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
	template<typename otherT>
	inline Vector3<T> Vector3<T>::cross( const Vector3<otherT>& other ) const
	{
		return this->cross( *this, other );
	}



	template<typename T>
	template<typename otherT1, typename otherT2>
	inline Vector3<T> Vector3<T>::cross( const Vector3<otherT1>& v1, const Vector3<otherT2>& v2 )
	{
		return
			Vector3(
				v1.y * v2.z - v1.z * v2.y,
				v1.z * v2.x - v1.x * v2.z,
				v1.x * v2.y - v1.y * v2.x
			);
	}



	using Vector3I = Vector3<int>;

	using Vector3F = Vector3<float>;

	using Vector3D = Vector3<double>;



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_VECTOR3_H_