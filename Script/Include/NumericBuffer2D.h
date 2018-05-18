#ifndef _INCLUDE_GUARD_NUMERICBUFFER2D_H_
#define _INCLUDE_GUARD_NUMERICBUFFER2D_H_



#include <NumericBuffer.h>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



	template<typename NType, unsigned int row, unsigned int column>
	struct NumericBuffer2D : public BasicObject
	{
	private:
		
		std::vector<NumericBuffer<NType, column>> buffer;

	public:

		NumericBuffer2D();
	
		template <class... Args>
		explicit NumericBuffer2D( const Args&... args );
	
		template<typename otherNType>
		explicit NumericBuffer2D( const std::vector<otherNType>& data );
	
		template<typename otherNType>
		explicit NumericBuffer2D( const std::vector<std::vector<otherNType>>& data );

		template<typename otherNType, unsigned int otherRow, unsigned int otherColumn>
		explicit NumericBuffer2D( const NumericBuffer2D<otherNType, otherRow, otherColumn>& other );

		virtual ~NumericBuffer2D();



		const NumericBuffer2D& operator+() const;

		NumericBuffer2D operator+( const double value ) const;

		template<typename otherNType, unsigned int otherRow, unsigned int otherColumn>
		NumericBuffer2D operator+( const NumericBuffer2D<otherNType, otherRow, otherColumn>& other ) const;
	
		NumericBuffer2D operator-() const;

		NumericBuffer2D operator-( const double value ) const;

		template<typename otherNType, unsigned int otherRow, unsigned int otherColumn>
		NumericBuffer2D operator-( const NumericBuffer2D<otherNType, otherRow, otherColumn>& other ) const;

		NumericBuffer2D operator*( const double value ) const;

		template<typename otherNType, unsigned int otherRow, unsigned int otherColumn>
		NumericBuffer2D operator*( const NumericBuffer2D<otherNType, otherRow, otherColumn>& other ) const;

		NumericBuffer2D operator/( const double value ) const;

		template<typename otherNType, unsigned int otherRow, unsigned int otherColumn>
		NumericBuffer2D operator/( const NumericBuffer2D<otherNType, otherRow, otherColumn>& other ) const;

		template<typename otherNType, unsigned int otherRow, unsigned int otherColumn>
		NumericBuffer2D& operator=( const NumericBuffer2D<otherNType, otherRow, otherColumn>& other );
	
		const NumericBuffer2D& operator+=( const double value );
		
		template<typename otherNType, unsigned int otherRow, unsigned int otherColumn>
		const NumericBuffer2D& operator+=( const NumericBuffer2D<otherNType, otherRow, otherColumn>& other );
	
		const NumericBuffer2D& operator-=( const double value );
		
		template<typename otherNType, unsigned int otherRow, unsigned int otherColumn>
		const NumericBuffer2D& operator-=( const NumericBuffer2D<otherNType, otherRow, otherColumn>& other );
	
		const NumericBuffer2D& operator*=( const double value );
		
		template<typename otherNType, unsigned int otherRow, unsigned int otherColumn>
		const NumericBuffer2D& operator*=( const NumericBuffer2D<otherNType, otherRow, otherColumn>& other );
	
		const NumericBuffer2D& operator/=( const double value );
		
		template<typename otherNType, unsigned int otherRow, unsigned int otherColumn>
		const NumericBuffer2D& operator/=( const NumericBuffer2D<otherNType, otherRow, otherColumn>& other );

		template<typename otherNType, unsigned int otherRow, unsigned int otherColumn>
		const NumericBuffer2D& operator()( const NumericBuffer2D<otherNType, otherRow, otherColumn>& other );

		NumericBuffer<NType, column>& operator[]( const unsigned int index );
	
		template<typename otherNType = NType>
		operator std::vector<std::vector<otherNType>>() const
		{
			return this->to2DVector<otherNType>();
		}

	

		template<typename otherNType = NType>
		NumericBuffer<otherNType, column> getElement( const unsigned int index ) const;
		
		template<typename otherNType = NType>
		otherNType getElement( const unsigned int rowIndex, const unsigned int columnIndex ) const;



		void fill( const double value );

		NumericBuffer2D filled( const double value ) const;

		void zeroClear();

		NumericBuffer2D zeroCleared() const;



		std::string toString() const override;

	private:

		void argmentsToBuffer( std::vector<double>& data );

		template<class First, class... Rest>
		void argmentsToBuffer( std::vector<double>& data, const First& first, const Rest&... rest );

		void clearBuffer();

		void initializeBuffer();

		template<typename otherNType>
		void copyBuffer( const std::vector<otherNType>& data );

		template<typename otherNType>
		void copyBuffer( const std::vector<std::vector<otherNType>>& data );

		template<typename otherNType = NType>
		std::vector<std::vector<otherNType>> to2DVector() const;
	};



	template<typename NType, unsigned int row, unsigned int column>
	inline NumericBuffer2D<NType, row, column>::NumericBuffer2D() : NumericBuffer2D( std::vector<NType>() )
	{

	}



	template<typename NType, unsigned int row, unsigned int column>
	template<class ...Args>
	inline NumericBuffer2D<NType, row, column>::NumericBuffer2D( const Args&... args ) : NumericBuffer2D()
	{
		std::vector<double> data;

		argmentsToBuffer( data, args... );

		this->initializeBuffer();

		this->copyBuffer( data );
	}



	template<typename NType, unsigned int row, unsigned int column>
	template<typename otherNType>
	inline NumericBuffer2D<NType, row, column>::NumericBuffer2D( const std::vector<otherNType>& data ) :
		buffer()
	{
		this->initializeBuffer();

		this->copyBuffer( data );
	}



	template<typename NType, unsigned int row, unsigned int column>
	template<typename otherNType>
	inline NumericBuffer2D<NType, row, column>::NumericBuffer2D( const std::vector<std::vector<otherNType>>& data ) :
		buffer()
	{
		this->initializeBuffer();

		this->copyBuffer( data );
	}



	template<typename NType, unsigned int row, unsigned int column>
	template<typename otherNType, unsigned int otherRow, unsigned int otherColumn>
	inline NumericBuffer2D<NType, row, column>::NumericBuffer2D( const NumericBuffer2D<otherNType, otherRow, otherColumn>& other ) :
		NumericBuffer2D( static_cast<std::vector<std::vector<otherNType>>>( other ) )
	{

	}



	template<typename NType, unsigned int row, unsigned int column>
	inline NumericBuffer2D<NType, row, column>::~NumericBuffer2D()
	{
		this->clearBuffer();
	}



	template<typename NType, unsigned int row, unsigned int column>
	inline const NumericBuffer2D<NType, row, column>& NumericBuffer2D<NType, row, column>::operator+() const
	{
		return *this;
	}



	template<typename NType, unsigned int row, unsigned int column>
	inline NumericBuffer2D<NType, row, column> NumericBuffer2D<NType, row, column>::operator+( const double value ) const
	{
		NumericBuffer2D<NType, row, column> ret( *this );

		for ( unsigned int i = 0; i < row; i++ )
		{
			ret.operator[]( i ) += value;
		}

		return ret;
	}



	template<typename NType, unsigned int row, unsigned int column>
	template<typename otherNType, unsigned int otherRow, unsigned int otherColumn>
	inline NumericBuffer2D<NType, row, column> NumericBuffer2D<NType, row, column>::operator+( const NumericBuffer2D<otherNType, otherRow, otherColumn>& other ) const
	{
		NumericBuffer2D<NType, row, column> ret( *this );

		const auto count = ( row < otherRow ) ? row : otherRow;

		for ( unsigned int i = 0; i < count; i++ )
		{
			ret.operator[]( i ) += other.getElement( i );
		}

		return ret;
	}



	template<typename NType, unsigned int row, unsigned int column>
	inline NumericBuffer2D<NType, row, column> NumericBuffer2D<NType, row, column>::operator-() const
	{
		NumericBuffer2D<NType, row, column> ret( *this );

		for ( unsigned int i = 0; i < row; i++ )
		{
			ret.operator[]( i ) *= -1;
		}

		return ret;
	}



	template<typename NType, unsigned int row, unsigned int column>
	inline NumericBuffer2D<NType, row, column> NumericBuffer2D<NType, row, column>::operator-( const double value ) const
	{
		return this->operator+( -value );
	}



	template<typename NType, unsigned int row, unsigned int column>
	template<typename otherNType, unsigned int otherRow, unsigned int otherColumn>
	inline NumericBuffer2D<NType, row, column> NumericBuffer2D<NType, row, column>::operator-( const NumericBuffer2D<otherNType, otherRow, otherColumn>& other ) const
	{
		return this->operator+( -other );
	}



	template<typename NType, unsigned int row, unsigned int column>
	inline NumericBuffer2D<NType, row, column> NumericBuffer2D<NType, row, column>::operator*( const double value ) const
	{
		NumericBuffer2D<NType, row, column> ret( *this );

		for ( unsigned int i = 0; i < row; i++ )
		{
			ret.operator[]( i ) *= static_cast<NType>( value );
		}

		return ret;
	}



	template<typename NType, unsigned int row, unsigned int column>
	template<typename otherNType, unsigned int otherRow, unsigned int otherColumn>
	inline NumericBuffer2D<NType, row, column> NumericBuffer2D<NType, row, column>::operator*( const NumericBuffer2D<otherNType, otherRow, otherColumn>& other ) const
	{
		NumericBuffer2D<NType, row, column> ret( *this );

		const auto count = ( row < otherRow ) ? row : otherRow;

		for ( unsigned int i = 0; i < count; i++ )
		{
			ret.operator[]( i ) *= other.getElement( i );
		}

		return ret;
	}



	template<typename NType, unsigned int row, unsigned int column>
	inline NumericBuffer2D<NType, row, column> NumericBuffer2D<NType, row, column>::operator/( const double value ) const
	{
		return this->operator*( 1 / value );
	}



	template<typename NType, unsigned int row, unsigned int column>
	template<typename otherNType, unsigned int otherRow, unsigned int otherColumn>
	inline NumericBuffer2D<NType, row, column> NumericBuffer2D<NType, row, column>::operator/( const NumericBuffer2D<otherNType, otherRow, otherColumn>& other ) const
	{
		NumericBuffer2D<NType, row, column> ret( *this );

		const auto count = ( row < otherRow ) ? row : otherRow;

		for ( unsigned int i = 0; i < count; i++ )
		{
			ret.operator[]( i ) /= other.getElement( i );
		}

		return ret;
	}



	template<typename NType, unsigned int row, unsigned int column>
	template<typename otherNType, unsigned int otherRow, unsigned int otherColumn>
	inline NumericBuffer2D<NType, row, column>& NumericBuffer2D<NType, row, column>::operator=( const NumericBuffer2D<otherNType, otherRow, otherColumn>& other )
	{
		return this->operator()( other );
	}



	template<typename NType, unsigned int row, unsigned int column>
	inline const NumericBuffer2D<NType, row, column>& NumericBuffer2D<NType, row, column>::operator+=( const double value )
	{
		return this->operator=( this->operator+( value ) );
	}



	template<typename NType, unsigned int row, unsigned int column>
	template<typename otherNType, unsigned int otherRow, unsigned int otherColumn>
	inline const NumericBuffer2D<NType, row, column>& NumericBuffer2D<NType, row, column>::operator+=( const NumericBuffer2D<otherNType, otherRow, otherColumn>& other )
	{
		return this->operator=( this->operator+( other ) );
	}



	template<typename NType, unsigned int row, unsigned int column>
	inline const NumericBuffer2D<NType, row, column>& NumericBuffer2D<NType, row, column>::operator-=( const double value )
	{
		return this->operator+=( -value );
	}



	template<typename NType, unsigned int row, unsigned int column>
	template<typename otherNType, unsigned int otherRow, unsigned int otherColumn>
	inline const NumericBuffer2D<NType, row, column>& NumericBuffer2D<NType, row, column>::operator-=( const NumericBuffer2D<otherNType, otherRow, otherColumn>& other )
	{
		return this->operator+=( -other );
	}



	template<typename NType, unsigned int row, unsigned int column>
	inline const NumericBuffer2D<NType, row, column>& NumericBuffer2D<NType, row, column>::operator*=( const double value )
	{
		return this->operator=( this->operator*( value ) );
	}



	template<typename NType, unsigned int row, unsigned int column>
	template<typename otherNType, unsigned int otherRow, unsigned int otherColumn>
	inline const NumericBuffer2D<NType, row, column>& NumericBuffer2D<NType, row, column>::operator*=( const NumericBuffer2D<otherNType, otherRow, otherColumn>& other )
	{
		return this->operator=( this->operator*( other ) );
	}



	template<typename NType, unsigned int row, unsigned int column>
	inline const NumericBuffer2D<NType, row, column>& NumericBuffer2D<NType, row, column>::operator/=( const double value )
	{
		return this->operator*=( 1 / value );
	}



	template<typename NType, unsigned int row, unsigned int column>
	template<typename otherNType, unsigned int otherRow, unsigned int otherColumn>
	inline const NumericBuffer2D<NType, row, column>& NumericBuffer2D<NType, row, column>::operator/=( const NumericBuffer2D<otherNType, otherRow, otherColumn>& other )
	{
		return this->operator=( *this / other );
	}



	template<typename NType, unsigned int row, unsigned int column>
	template<typename otherNType, unsigned int otherRow, unsigned int otherColumn>
	inline const NumericBuffer2D<NType, row, column>& NumericBuffer2D<NType, row, column>::operator()( const NumericBuffer2D<otherNType, otherRow, otherColumn>& other )
	{
		this->copyBuffer( static_cast<std::vector<std::vector<otherNType>>>( other ) );

		return *this;
	}



	template<typename NType, unsigned int row, unsigned int column>
	inline NumericBuffer<NType, column>& NumericBuffer2D<NType, row, column>::operator[]( const unsigned int index )
	{
		return this->buffer[ index ];
	}



	template<typename NType, unsigned int row, unsigned int column>
	template<typename otherNType>
	inline NumericBuffer<otherNType, column> NumericBuffer2D<NType, row, column>::getElement( const unsigned int index ) const
	{
		return NumericBuffer<otherNType, column>( this->buffer.at( index ) );
	}



	template<typename NType, unsigned int row, unsigned int column>
	template<typename otherNType>
	inline otherNType NumericBuffer2D<NType, row, column>::getElement( const unsigned int rowIndex, const unsigned int columnIndex ) const
	{
		return static_cast<otherNType>( this->getElement( rowIndex ).getElement( columnIndex ) );
	}



	template<typename NType, unsigned int row, unsigned int column>
	inline void NumericBuffer2D<NType, row, column>::fill( const double value )
	{
		for ( auto& e : this->buffer )
		{
			e.fill( value );
		}
	}



	template<typename NType, unsigned int row, unsigned int column>
	inline NumericBuffer2D<NType, row, column> NumericBuffer2D<NType, row, column>::filled( const double value ) const
	{
		NumericBuffer2D<NType, row, column> ret;

		ret.fill( value );

		return ret;
	}



	template<typename NType, unsigned int row, unsigned int column>
	inline void NumericBuffer2D<NType, row, column>::zeroClear()
	{
		this->fill( 0 );
	}



	template<typename NType, unsigned int row, unsigned int column>
	inline NumericBuffer2D<NType, row, column> NumericBuffer2D<NType, row, column>::zeroCleared() const
	{
		return this->filled( 0 );
	}



	template<typename NType, unsigned int row, unsigned int column>
	inline std::string NumericBuffer2D<NType, row, column>::toString() const
	{
	//	std::string ret = "";
		std::string ret = typeid( *this ).name();
		ret += "\n";

		for ( unsigned int i = 0; i < this->buffer.size(); i++ )
		{
			for ( unsigned int j = 0; j < this->getElement( i ).getDimensionality(); j++ )
			{
				ret += "[" + std::to_string( i ) + "]" + "[" + std::to_string( j ) + "] = " + std::to_string( this->getElement( i ).getElement( j ) ) + " ";
			}

			ret += "\n";
		}

		return ret;
	}



	template<typename NType, unsigned int row, unsigned int column>
	inline void NumericBuffer2D<NType, row, column>::argmentsToBuffer( std::vector<double>& data )
	{

	}



	template<typename NType, unsigned int row, unsigned int column>
	template<class First, class ...Rest>
	inline void NumericBuffer2D<NType, row, column>::argmentsToBuffer(std::vector<double>& data, const First & first, const Rest & ...rest)
	{
		data.push_back( first );

		argmentsToBuffer( data, rest... );
	}



	template<typename NType, unsigned int row, unsigned int column>
	inline void NumericBuffer2D<NType, row, column>::clearBuffer()
	{
		this->buffer.clear();
	}



	template<typename NType, unsigned int row, unsigned int column>
	inline void NumericBuffer2D<NType, row, column>::initializeBuffer()
	{
		this->clearBuffer();

		this->buffer.resize( row );
	}



	template<typename NType, unsigned int row, unsigned int column>
	template<typename otherNType>
	inline void NumericBuffer2D<NType, row, column>::copyBuffer( const std::vector<otherNType>& data )
	{
		if ( data.empty() ) { return; }



		const unsigned int elementCount = row * column;
		const unsigned int loopCount	= ( elementCount < data.size() ) ? elementCount : data.size();

		for ( unsigned int i = 0; i < loopCount; i++ )
		{
			this->operator[]( i / column ).operator[]( i % column ) = static_cast<NType>( data.at( i ) );
		}
	}



	template<typename NType, unsigned int row, unsigned int column>
	template<typename otherNType>
	inline void NumericBuffer2D<NType, row, column>::copyBuffer( const std::vector<std::vector<otherNType>>& data )
	{
		if ( data.empty() ) { return; }



		const unsigned int count = ( row < data.size() ) ? row : data.size();

		for ( unsigned int i = 0; i < count; i++ )
		{
			this->operator[]( i ).operator()( data.at( i ) );
		}
	}



	template<typename NType, unsigned int row, unsigned int column>
	template<typename otherNType>
	inline std::vector<std::vector<otherNType>> NumericBuffer2D<NType, row, column>::to2DVector() const
	{
		std::vector<std::vector<otherNType>> ret( row );

		for ( unsigned int i = 0; i < ret.size(); i++ )
		{
			ret.at( i ) = this->getElement( i );
		}

		return ret;
	}



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_NUMERICBUFFER2D_H_