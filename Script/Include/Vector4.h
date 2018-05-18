#ifndef _INCLUDE_GUARD_VECTOR4_H_
#define _INCLUDE_GUARD_VECTOR4_H_



#include <VectorX.h>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



	template<typename T>
	struct Vector4 : public VectorX<T, 4>
	{
	public:

		static const Vector4 zero;

		static const Vector4 one;

	public:

		Vector4();

		Vector4( const double n1, const double n2, const double n3 = 0, const double n4 = 0 );

		template<typename otherT, unsigned int otherDimensionality>
		Vector4( const NumericBuffer<otherT, otherDimensionality>& other );

		virtual ~Vector4();



		template<typename otherT, unsigned int otherDimensionality>
		const NumericBuffer<T, 4>& operator=( const NumericBuffer<otherT, otherDimensionality>& other );
	};



	template<typename T>
	const Vector4<T> Vector4<T>::zero( 0, 0, 0, 0 );

	template<typename T>
	const Vector4<T> Vector4<T>::one( 1, 1, 1, 1 );



	template<typename T>
	inline Vector4<T>::Vector4() : Vector4<T>( 0, 0, 0, 0 )
	{

	}



	template<typename T>
	inline Vector4<T>::Vector4( const double n1, const double n2, const double n3, const double n4 ) :
		Vector4( NumericBuffer<T, 4>( n1, n2, n3, n4 ) )
	{

	}



	template<typename T>
	template<typename otherT, unsigned int otherDimensionality>
	inline Vector4<T>::Vector4( const NumericBuffer<otherT, otherDimensionality>& other ) :
		VectorX<T, 4>( other )
	{

	}



	template<typename T>
	inline Vector4<T>::~Vector4()
	{

	}



	template<typename T>
	template<typename otherT, unsigned int otherDimensionality>
	inline const NumericBuffer<T, 4>& Vector4<T>::operator=( const NumericBuffer<otherT, otherDimensionality>& other )
	{
		return this->operator()( other );
	}



	using Vector4I = Vector4<int>;

	using Vector4F = Vector4<float>;

	using Vector4D = Vector4<double>;



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_VECTOR4_H_