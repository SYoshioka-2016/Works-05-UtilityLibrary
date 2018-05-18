#ifndef _INCLUDE_GUARD_MATRIX3BY3_H_
#define _INCLUDE_GUARD_MATRIX3BY3_H_



#include <NDimensionalSquareMatrix.h>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



	template<typename T>
	struct Matrix3By3 : public NDimensionalSquareMatrix<T, 3>
	{
	public:

		Matrix3By3();

		Matrix3By3(
			const double n11, const double n12, const double n13,
			const double n21, const double n22, const double n23,
			const double n31, const double n32, const double n33
		);

		template<typename otherT, unsigned int otherRow, unsigned int otherColumn>
		explicit Matrix3By3( const NumericBuffer2D<otherT, otherRow, otherColumn>& other );

		virtual ~Matrix3By3();

		
		
		template<typename otherT, unsigned int otherRow, unsigned int otherColumn>
		const NumericBuffer2D<T, 3, 3>& operator=( const NumericBuffer2D<otherT, otherRow, otherColumn>& other );
	};



	using Matrix3By3F = Matrix3By3<float>;

	using Matrix3By3D = Matrix3By3<double>;



	template<typename T>
	inline Matrix3By3<T>::Matrix3By3() : NDimensionalSquareMatrix<T, 3>()
	{

	}



	template<typename T>
	inline Matrix3By3<T>::Matrix3By3(
		const double n11, const double n12, const double n13,
		const double n21, const double n22, const double n23,
		const double n31, const double n32, const double n33
	) : 
		Matrix3By3( NumericBuffer2D<T, 3, 3>( n11, n12, n13, n21, n22, n23, n31, n32, n33 ) )
	{

	}



	template<typename T>
	template<typename otherT, unsigned int otherRow, unsigned int otherColumn>
	inline Matrix3By3<T>::Matrix3By3( const NumericBuffer2D<otherT, otherRow, otherColumn>& other ) : NDimensionalSquareMatrix<T, 3>( other )
	{

	}



	template<typename T>
	inline Matrix3By3<T>::~Matrix3By3()
	{

	}



	template<typename T>
	template<typename otherT, unsigned int otherRow, unsigned int otherColumn>
	inline const NumericBuffer2D<T, 3, 3>& Matrix3By3<T>::operator=( const NumericBuffer2D<otherT, otherRow, otherColumn>& other )
	{
		return this->operator()( other );
	}



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_MATRIX3BY3_H_