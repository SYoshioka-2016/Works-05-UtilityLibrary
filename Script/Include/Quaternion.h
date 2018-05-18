#ifndef _INCLUDE_GUARD_QUATERNION_H_
#define _INCLUDE_GUARD_QUATERNION_H_



#include <Vector3.h>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



	template<typename T>
	struct Quaternion : public VectorX<T, 4>
	{
	public:

		static const Quaternion identity;

	public:

		Quaternion();

		template<typename otherT, unsigned int otherDimensionality>
		Quaternion( const double t, const NumericBuffer<otherT, 3>& other );

		template<typename otherT, unsigned int otherDimensionality>
		Quaternion( const NumericBuffer<otherT, 3>& other, const double t );

		Quaternion( const double t, const double x, const double y, const double z );

		template<typename otherT>
		Quaternion( const NumericBuffer<otherT, 4>& other );

		virtual ~Quaternion();



		template<typename otherT>
		const NumericBuffer<T, 4>& operator=( const Quaternion<otherT>& other );

		template<typename otherT>
		const NumericBuffer<T, 4>& operator()( const Quaternion<otherT>& other );

		template<typename otherT>
		Quaternion operator*( const Quaternion<otherT>& other ) const;

		template<typename otherT>
		const Quaternion& operator*=( const Quaternion<otherT>& other );



		void conjugate();

		Quaternion conjugated() const;
	};



	template<typename T>
	const Quaternion<T> Quaternion<T>::identity( 1, 0, 0, 0 );



	template<typename T>
	inline Quaternion<T>::Quaternion() : Quaternion<T>( Quaternion::identity )
	{

	}



	template<typename T>
	template<typename otherT, unsigned int otherDimensionality>
	inline Quaternion<T>::Quaternion( const double t, const NumericBuffer<otherT, 3>& other ) :
		Quaternion( other, t )
	{

	}



	template<typename T>
	template<typename otherT, unsigned int otherDimensionality>
	inline Quaternion<T>::Quaternion( const NumericBuffer<otherT, 3>& other, const double t ) :
		Quaternion( t, other.x, other.y, other.z )
	{

	}



	template<typename T>
	inline Quaternion<T>::Quaternion( const double t, const double x, const double y, const double z ) :
		Quaternion( NumericBuffer<T, 4>( x, y, z, t ) )
	{

	}



	template<typename T>
	template<typename otherT>
	inline Quaternion<T>::Quaternion( const NumericBuffer<otherT, 4>& other ) :
		VectorX<T, 4>( other )
	{

	}



	template<typename T>
	inline Quaternion<T>::~Quaternion()
	{

	}



	template<typename T>
	template<typename otherT>
	inline const NumericBuffer<T, 4>& Quaternion<T>::operator=( const Quaternion<otherT>& other )
	{
		return this->operator()( other );
	}



	template<typename T>
	template<typename otherT>
	inline const NumericBuffer<T, 4>& Quaternion<T>::operator()( const Quaternion<otherT>& other )
	{
		return NumericBuffer<T, 4>::operator()( other );
	}



	template<typename T>
	template<typename otherT>
	inline Quaternion<T> Quaternion<T>::operator*( const Quaternion<otherT>& other ) const
	{
		const Vector3D v1( *this );
		const Vector3D v2( other );

		const auto w = ( this->getElement( 3 ) * other.w ) - Vector3D::dot( v1, v2 );

		const auto vXYZ = ( v2 * this->getElement( 3 ) ) + ( v1 * other.w ) + Vector3D::cross( v1, v2 );



		return Quaternion( w, vXYZ );
	}



	template<typename T>
	template<typename otherT>
	inline const Quaternion<T>& Quaternion<T>::operator*=( const Quaternion<otherT>& other )
	{
		this->operator=( this->operator*( other ) );
	}



	template<typename T>
	inline void Quaternion<T>::conjugate()
	{
		this->operator=( this->conjugated() );
	}



	template<typename T>
	inline Quaternion<T> Quaternion<T>::conjugated() const
	{
		return Quaternion( w, -x, -y, -z );
	}



	using QuaternionF = Quaternion<float>;

	using QuaternionD = Quaternion<double>;



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_QUATERNION_H_