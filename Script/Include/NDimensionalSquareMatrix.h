#ifndef _INCLUDE_GUARD_NDIMENSIONALSQUAREMATRIX_H_
#define _INCLUDE_GUARD_NDIMENSIONALSQUAREMATRIX_H_



#include <NumericXByX.h>



namespace ns_myUtility 
{



namespace ns_typeUtil
{

	

	template<typename T, unsigned int dimensionality>
	struct NDimensionalSquareMatrix : NumericXByX<T, dimensionality, dimensionality>
	{
	public:

		static const NDimensionalSquareMatrix identity;

	public:

		NDimensionalSquareMatrix();

		template<typename otherT, unsigned int otherRow, unsigned int otherColumn>
		explicit NDimensionalSquareMatrix( const NumericBuffer2D<otherT, otherRow, otherColumn>& other );

		virtual ~NDimensionalSquareMatrix();

		
		
		template<typename otherT, unsigned int otherRow, unsigned int otherColumn>
		NumericBuffer2D<T, dimensionality, dimensionality>& operator=( const NumericBuffer2D<otherT, otherRow, otherColumn>& other );



		template<typename otherT = float>
		otherT determinant() const;

		void inverse();

		NDimensionalSquareMatrix inversed() const;

	private:

		static NDimensionalSquareMatrix<T, dimensionality> identityMatrix();
	};
	

	
	template<typename T, unsigned int dimensionality>
	const NDimensionalSquareMatrix<T, dimensionality> NDimensionalSquareMatrix<T, dimensionality>::identity( NDimensionalSquareMatrix<T, dimensionality>::identityMatrix() );



	template<typename T, unsigned int dimensionality>
	inline NDimensionalSquareMatrix<T, dimensionality>::NDimensionalSquareMatrix() : NumericXByX<T, dimensionality, dimensionality>()
	{

	}



	template<typename T, unsigned int dimensionality>
	template<typename otherT, unsigned int otherRow, unsigned int otherColumn>
	inline NDimensionalSquareMatrix<T, dimensionality>::NDimensionalSquareMatrix( const NumericBuffer2D<otherT, otherRow, otherColumn>& other ) : NumericXByX<T, dimensionality, dimensionality>( other )
	{

	}



	template<typename T, unsigned int dimensionality>
	inline NDimensionalSquareMatrix<T, dimensionality>::~NDimensionalSquareMatrix()
	{

	}



	template<typename T, unsigned int dimensionality>
	template<typename otherT, unsigned int otherRow, unsigned int otherColumn>
	inline NumericBuffer2D<T, dimensionality, dimensionality>& NDimensionalSquareMatrix<T, dimensionality>::operator=(const NumericBuffer2D<otherT, otherRow, otherColumn>& other)
	{
		return this->operator()( other );
	}


	
	template<typename T, unsigned int dimensionality>
	template<typename otherT>
	inline otherT NDimensionalSquareMatrix<T, dimensionality>::determinant() const
	{
//http://thira.plavox.info/blog/2008/06/_c.html
		Matrix4By4<double> mat( *this );
		double det = 1.0;
		double buf = 0;

		const unsigned int dimension = 4;

		for ( unsigned int i = 0; i < dimension; i++ )
		{
			for ( unsigned int j = 0; j < dimension; j++ )
			{
				if ( i >= j ) { continue; }

				buf = mat.getElement( j, i ) / mat.getElement( i, i );

				for ( unsigned int k = 0; k < dimension; k++ )
				{
					mat[j][k] -= mat.getElement( i, k ) * buf;
				}
			}
		}

		for ( unsigned int i = 0; i < dimension; i++ )
		{
			det *= mat.getElement( i, i );
		}

		return static_cast<T>( det );
	}


	
	template<typename T, unsigned int dimensionality>
	inline void NDimensionalSquareMatrix<T, dimensionality>::inverse()
	{
		if ( this->determinant() == 0 ) { return; }



		this->operator()( this->inversed() );
	}


	
	template<typename T, unsigned int dimensionality>
	inline NDimensionalSquareMatrix<T, dimensionality> NDimensionalSquareMatrix<T, dimensionality>::inversed() const
	{
//http://thira.plavox.info/blog/2008/06/_c.html



		if ( this->determinant() == 0 ) { return Matrix4By4<T>(); }



		Matrix4By4<double> matIn( *this );

		Matrix4By4<double> matOut( this->identity );

		double buf = 0;

		const unsigned int dimension = 4;
 


		for ( unsigned int i = 0; i < dimension; i++ )
		{
			buf = 1 / matIn.getElement( i, i );

			for ( unsigned int j = 0; j < dimension; j++ )
			{
				matIn[i][j] *= buf;

				matOut[i][j] *= buf;
			}

			for ( unsigned int j = 0; j < dimension; j++ )
			{
				if ( i == j ) { continue; }

				buf = matIn.getElement( j, i );

				for ( unsigned int k = 0; k < dimension; k++ )
				{
					matIn[j][k] -= matIn.getElement( i, k ) * buf;

					matOut[j][k] -= matOut.getElement( i, k ) * buf;
				}
			}
		}



		return static_cast<Matrix4By4<T>>( matOut );
	}



	template<typename T, unsigned int dimensionality>
	inline NDimensionalSquareMatrix<T, dimensionality> NDimensionalSquareMatrix<T, dimensionality>::identityMatrix()
	{
		NDimensionalSquareMatrix<T, dimensionality> ret;

		for ( unsigned int i = 0; i < dimensionality; i++ )
		{
			for ( unsigned int j = 0; j < dimensionality; j++ )
			{
				ret[i][j] = static_cast<T>( ( i == j ) ? 1 : 0 );
			}
		}

		return ret;
	}



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_NDIMENSIONALSQUAREMATRIX_H_