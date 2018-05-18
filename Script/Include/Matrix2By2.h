#ifndef _INCLUDE_GUARD_MATRIX2BY2_H_
#define _INCLUDE_GUARD_MATRIX2BY2_H_



#include <NDimensionalSquareMatrix.h>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



	template<typename T>
	struct Matrix2By2 : public NDimensionalSquareMatrix<T, 2>
	{
	public:

		Matrix2By2();

		Matrix2By2(
			const double n11, const double n12,
			const double n21, const double n22
		);

		template<typename otherT, unsigned int otherRow, unsigned int otherColumn>
		explicit Matrix2By2( const NumericBuffer2D<otherT, otherRow, otherColumn>& other );

		virtual ~Matrix2By2();

		
		
		template<typename otherT, unsigned int otherRow, unsigned int otherColumn>
		const NumericBuffer2D<T, 2, 2>& operator=( const NumericBuffer2D<otherT, otherRow, otherColumn>& other );
	};



	using Matrix2By2F = Matrix2By2<float>;

	using Matrix2By2D = Matrix2By2<double>;



	template<typename T>
	inline Matrix2By2<T>::Matrix2By2() : NDimensionalSquareMatrix<T, 2>()
	{

	}



	template<typename T>
	inline Matrix2By2<T>::Matrix2By2(
		const double n11, const double n12,
		const double n21, const double n22
	) : 
		Matrix2By2( NumericBuffer2D<T, 2, 2>( n11, n12, n21, n22 ) )
	{

	}



	template<typename T>
	template<typename otherT, unsigned int otherRow, unsigned int otherColumn>
	inline Matrix2By2<T>::Matrix2By2( const NumericBuffer2D<otherT, otherRow, otherColumn>& other ) : NDimensionalSquareMatrix<T, 2>( other )
	{

	}



	template<typename T>
	inline Matrix2By2<T>::~Matrix2By2()
	{

	}



	template<typename T>
	template<typename otherT, unsigned int otherRow, unsigned int otherColumn>
	inline const NumericBuffer2D<T, 2, 2>& Matrix2By2<T>::operator=( const NumericBuffer2D<otherT, otherRow, otherColumn>& other )
	{
		return this->operator()( other );
	}



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_MATRIX2BY2_H_