#ifndef _INCLUDE_GUARD_MATRIX4BY4_H_
#define _INCLUDE_GUARD_MATRIX4BY4_H_



#include <NDimensionalSquareMatrix.h>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



	template<typename T>
	struct Matrix4By4 : public NDimensionalSquareMatrix<T, 4>
	{
	public:

		Matrix4By4();

		Matrix4By4(
			const double n11, const double n12, const double n13, const double n14,
			const double n21, const double n22, const double n23, const double n24,
			const double n31, const double n32, const double n33, const double n34,
			const double n41, const double n42, const double n43, const double n44
		);

		template<typename otherT, unsigned int otherRow, unsigned int otherColumn>
		explicit Matrix4By4( const NumericBuffer2D<otherT, otherRow, otherColumn>& other );

		virtual ~Matrix4By4();

		
		
		template<typename otherT, unsigned int otherRow, unsigned int otherColumn>
		const NumericBuffer2D<T, 4, 4>& operator=( const NumericBuffer2D<otherT, otherRow, otherColumn>& other );
	};



	using Matrix4By4F = Matrix4By4<float>;

	using Matrix4By4D = Matrix4By4<double>;



	template<typename T>
	inline Matrix4By4<T>::Matrix4By4() : NDimensionalSquareMatrix<T, 4>()
	{

	}



	template<typename T>
	inline Matrix4By4<T>::Matrix4By4(
		const double n11, const double n12, const double n13, const double n14,
		const double n21, const double n22, const double n23, const double n24,
		const double n31, const double n32, const double n33, const double n34,
		const double n41, const double n42, const double n43, const double n44
	) : 
		Matrix4By4( NumericBuffer2D<T, 4, 4>( n11, n12, n13, n14, n21, n22, n23, n24, n31, n32, n33, n34, n41, n42, n43, n44 ) )
	{

	}



	template<typename T>
	template<typename otherT, unsigned int otherRow, unsigned int otherColumn>
	inline Matrix4By4<T>::Matrix4By4( const NumericBuffer2D<otherT, otherRow, otherColumn>& other ) : NDimensionalSquareMatrix<T, 4>( other )
	{

	}



	template<typename T>
	inline Matrix4By4<T>::~Matrix4By4()
	{

	}



	template<typename T>
	template<typename otherT, unsigned int otherRow, unsigned int otherColumn>
	inline const NumericBuffer2D<T, 4, 4>& Matrix4By4<T>::operator=( const NumericBuffer2D<otherT, otherRow, otherColumn>& other )
	{
		return this->operator()( other );
	}



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_MATRIX4BY4_H_