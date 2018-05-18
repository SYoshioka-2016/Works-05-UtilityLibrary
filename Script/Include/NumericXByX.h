#ifndef _INCLUDE_GUARD_NUMERICXBYX_H_
#define _INCLUDE_GUARD_NUMERICXBYX_H_



#include <NumericBuffer2D.h>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



	template<typename T, unsigned int row, unsigned int column>
	struct NumericXByX : NumericBuffer2D<T, row, column>
	{
	public:

		static const NumericBuffer2D zero;

	public:

		NumericXByX();

		template<typename otherT, unsigned int otherRow, unsigned int otherColumn>
		explicit NumericXByX( const NumericBuffer2D<otherT, otherRow, otherColumn>& other );

		virtual ~NumericXByX();

		
		
		template<typename otherT>
		NumericBuffer2D<T, row, 1> operator*( const NumericBuffer<otherT, column>& other ) const;
		
		template<typename otherT, unsigned int otherColumn>
		NumericBuffer2D<T, row, otherColumn> operator*( const NumericBuffer2D<otherT, column, otherColumn>& other ) const;

		template<typename otherT, unsigned int otherRow, unsigned int otherColumn>
		NumericBuffer2D& operator=( const NumericBuffer2D<otherT, otherRow, otherColumn>& other );
		
		template<typename otherT>
		const NumericBuffer2D& operator*=( const NumericBuffer<otherT, column>& other );

		template<typename otherT, unsigned int otherRow, unsigned int otherColumn>
		const NumericBuffer2D& operator*=( const NumericBuffer2D<otherT, otherRow, otherColumn>& other );



		void transpose();

		NumericBuffer2D transposed() const;

	private:

		static NumericBuffer2D zeroMatrix();
	};
	

	
	template<typename T, unsigned int row, unsigned int column>
	const NumericBuffer2D<T, row, column> NumericXByX<T, row, column>::zero( NumericXByX<T, row, column>::zeroMatrix() );



	template<typename T, unsigned int row, unsigned int column>
	inline NumericXByX<T, row, column>::NumericXByX() : NumericXByX<T, row, column>( NumericBuffer2D<T, row, column>() )
	{

	}



	template<typename T, unsigned int row, unsigned int column>
	template<typename otherT, unsigned int otherRow, unsigned int otherColumn>
	inline NumericXByX<T, row, column>::NumericXByX( const NumericBuffer2D<otherT, otherRow, otherColumn>& other ) : NumericBuffer2D<T, row, column>( other )
	{

	}



	template<typename T, unsigned int row, unsigned int column>
	inline NumericXByX<T, row, column>::~NumericXByX()
	{

	}



	template<typename T, unsigned int row, unsigned int column>
	template<typename otherT>
	inline NumericBuffer2D<T, row, 1> NumericXByX<T, row, column>::operator*( const NumericBuffer<otherT, column>& other ) const
	{
		return this->operator*( NumericBuffer2D<otherT, column, 1>( other.toVector() ) );
	}



	template<typename T, unsigned int row, unsigned int column>
	template<typename otherT, unsigned int otherColumn>
	inline NumericBuffer2D<T, row, otherColumn> NumericXByX<T, row, column>::operator*( const NumericBuffer2D<otherT, column, otherColumn>& other ) const
	{
		NumericBuffer2D<T, row, otherColumn> ret;

		for ( unsigned int i = 0; i < row; i++ )
		{
			for ( unsigned int j = 0; j < otherColumn; j++ )
			{
				for ( unsigned int k = 0; k < column; k++ )
				{
					ret[i][j] += static_cast<T>( this->getElement( i, k ) * other.getElement( k, j ) );
				}
			}
		}

		return ret;
	}



	template<typename T, unsigned int row, unsigned int column>
	template<typename otherT, unsigned int otherRow, unsigned int otherColumn>
	inline NumericBuffer2D<T, row, column>& NumericXByX<T, row, column>::operator=( const NumericBuffer2D<otherT, otherRow, otherColumn>& other )
	{
		return this->operator()( other );
	}



	template<typename T, unsigned int row, unsigned int column>
	template<typename otherT>
	inline const NumericBuffer2D<T, row, column>& NumericXByX<T, row, column>::operator*=( const NumericBuffer<otherT, column>& other )
	{
		return this->operator=( *this * other );
	}



	template<typename T, unsigned int row, unsigned int column>
	template<typename otherT, unsigned int otherRow, unsigned int otherColumn>
	inline const NumericBuffer2D<T, row, column>& NumericXByX<T, row, column>::operator*=( const NumericBuffer2D<otherT, otherRow, otherColumn>& other )
	{
		return this->operator=( *this * other );
	}



	template<typename T, unsigned int row, unsigned int column>
	inline void NumericXByX<T, row, column>::transpose()
	{
		int iOffset = 0;

		for ( int i = 0; i < row - 1; i++ ) 
		{
			for ( int j = 1 + iOffset; j < column; j++ ) 
			{
				T tmp						= this->operator[]( i )[j];
				this->operator[]( i )[j]	= this->operator[]( j )[i];
				this->operator[]( j )[i]	= tmp;
			}

			iOffset++;
		}
	}



	template<typename T, unsigned int row, unsigned int column>
	inline NumericBuffer2D<T, row, column> NumericXByX<T, row, column>::transposed() const
	{
		auto ret = *this;

		ret.transpose();

		return ret;
	}



	template<typename T, unsigned int row, unsigned int column>
	inline NumericBuffer2D<T, row, column> NumericXByX<T, row, column>::zeroMatrix()
	{
		return NumericBuffer2D<T, row, column>().zeroCleared();
	}



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_NUMERICXBYX_H_