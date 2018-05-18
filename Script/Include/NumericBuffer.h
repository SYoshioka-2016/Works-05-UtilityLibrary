#ifndef _INCLUDE_GUARD_NUMERICBUFFER_H_
#define _INCLUDE_GUARD_NUMERICBUFFER_H_



#include <BasicObject.h>

#include <vector>
#include <memory>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



	template<typename NType, unsigned int dimensionality>
	struct NumericBuffer : public ns_basicObjectType::BasicObject
	{
	private:

		std::vector<NType> buffer;

	public:

		NumericBuffer();

		template <class... Args>
		explicit NumericBuffer( const Args&... args );
	
		template<typename otherNType>
		explicit NumericBuffer( const std::vector<otherNType>& data );
	
		template<typename otherNType, unsigned int otherDimensionality>
		explicit NumericBuffer( const NumericBuffer<otherNType, otherDimensionality>& other );

		virtual ~NumericBuffer();

	

		const NumericBuffer& operator+() const;

		NumericBuffer operator+( const double value ) const;

		template<typename otherT, unsigned int otherDimensionality>
		NumericBuffer operator+( const NumericBuffer<otherT, otherDimensionality>& other ) const;

		NumericBuffer operator-() const;

		NumericBuffer operator-( const double value ) const;

		template<typename otherT, unsigned int otherDimensionality>
		NumericBuffer operator-( const NumericBuffer<otherT, otherDimensionality>& other ) const;

		NumericBuffer operator*( const double value ) const;

		template<typename otherT, unsigned int otherDimensionality>
		NumericBuffer operator*( const NumericBuffer<otherT, otherDimensionality>& other ) const;

		NumericBuffer operator/( const double value ) const;

		template<typename otherT, unsigned int otherDimensionality>
		NumericBuffer operator/( const NumericBuffer<otherT, otherDimensionality>& other ) const;

		template<typename otherNType>
		const NumericBuffer& operator=( const std::vector<otherNType>& data );
	
		template<typename otherNType, unsigned int otherDimensionality>
		const NumericBuffer& operator=( const NumericBuffer<otherNType, otherDimensionality>& other );
	
		const NumericBuffer& operator+=( const double value );
	
		template<typename otherNType, unsigned int otherDimensionality>
		const NumericBuffer& operator+=( const NumericBuffer<otherNType, otherDimensionality>& other );
	
		const NumericBuffer& operator-=( const double value );
	
		template<typename otherNType, unsigned int otherDimensionality>
		const NumericBuffer& operator-=( const NumericBuffer<otherNType, otherDimensionality>& other );
	
		const NumericBuffer& operator*=( const double value );
	
		template<typename otherNType, unsigned int otherDimensionality>
		const NumericBuffer& operator*=( const NumericBuffer<otherNType, otherDimensionality>& other );
	
		const NumericBuffer& operator/=( const double value );
	
		template<typename otherNType, unsigned int otherDimensionality>
		const NumericBuffer& operator/=( const NumericBuffer<otherNType, otherDimensionality>& other );

		template<typename otherNType>
		const NumericBuffer& operator()( const std::vector<otherNType>& data );
	
		template<typename otherNType, unsigned int otherDimensionality>
		const NumericBuffer& operator()( const NumericBuffer<otherNType, otherDimensionality>& other );

		NType& operator[]( const unsigned int index );

		bool operator==( const NumericBuffer& other ) const;

		bool operator!=( const NumericBuffer& other ) const;
	
		template<typename otherNType = NType>
		operator std::vector<otherNType>() const
		{
			return this->toVector<otherNType>();
		}


	
		template<typename otherNType = NType>
		otherNType getElement( const unsigned int index ) const;

		unsigned int getDimensionality() const;



		void fill( const double value );

		NumericBuffer filled( const double value ) const;

		void zeroClear();

		NumericBuffer zeroCleared() const;



		ns_basicObjectType::BasicObject::String toString() const override;

	private:

		void argmentsToBuffer( std::vector<double>& data );

		template<class First, class... Rest>
		void argmentsToBuffer( std::vector<double>& data, const First& first, const Rest&... rest );

		void clearBuffer();

		void initializeBuffer();

		template<typename otherNType>
		void copyBuffer( const std::vector<otherNType>& data );

		template<typename otherNType = NType>
		std::vector<otherNType> toVector() const;
	};



	template<typename NType, unsigned int dimensionality>
	inline NumericBuffer<NType, dimensionality>::NumericBuffer() : NumericBuffer( std::vector<NType>( dimensionality ) )
	{

	}



	template<typename NType, unsigned int dimensionality>
	template<class... Args>
	inline NumericBuffer<NType, dimensionality>::NumericBuffer( const Args&... args ) : NumericBuffer()
	{
		std::vector<double> data;

		this->argmentsToBuffer( data, args... );

		this->initializeBuffer();

		this->copyBuffer( data );
	}



	template<typename NType, unsigned int dimensionality>
	template<typename otherNType>
	inline NumericBuffer<NType, dimensionality>::NumericBuffer( const std::vector<otherNType>& data ) :
		buffer()
	{
		this->initializeBuffer();

		this->copyBuffer( data );
	}



	template<typename NType, unsigned int dimensionality>
	template<typename otherNType, unsigned int otherDimensionality>
	inline NumericBuffer<NType, dimensionality>::NumericBuffer( const NumericBuffer<otherNType, otherDimensionality>& other ) :
		NumericBuffer( static_cast<std::vector<otherNType>>( other ) )
	{

	}



	template<typename NType, unsigned int dimensionality>
	inline NumericBuffer<NType, dimensionality>::~NumericBuffer()
	{
		this->clearBuffer();
	}



	template<typename NType, unsigned int dimensionality>
	inline const NumericBuffer<NType, dimensionality>& NumericBuffer<NType, dimensionality>::operator+() const
	{
		return *this;
	}



	template<typename NType, unsigned int dimensionality>
	inline NumericBuffer<NType, dimensionality> NumericBuffer<NType, dimensionality>::operator+( const double value ) const
	{
		auto ret = this->toVector<double>();

		for ( auto& e : ret )
		{
			e += value;
		}

		return NumericBuffer<NType, dimensionality>( ret );
	}



	template<typename NType, unsigned int dimensionality>
	template<typename otherT, unsigned int otherDimensionality>
	inline NumericBuffer<NType, dimensionality> NumericBuffer<NType, dimensionality>::operator+( const NumericBuffer<otherT, otherDimensionality>& other ) const
	{
		auto ret = this->toVector<double>();

		const auto count = ( dimensionality < otherDimensionality ) ? dimensionality : otherDimensionality;

		for ( unsigned int i = 0; i < count; i++ )
		{
			ret[i] = this->getElement( i ) + other.getElement( i );
		}

		return NumericBuffer<NType, dimensionality>( ret );
	}



	template<typename NType, unsigned int dimensionality>
	inline NumericBuffer<NType, dimensionality> NumericBuffer<NType, dimensionality>::operator-() const
	{
		auto ret = this->toVector();

		for ( auto& e : ret )
		{
			e *= -1;
		}

		return NumericBuffer<NType, dimensionality>( ret );
	}



	template<typename NType, unsigned int dimensionality>
	inline NumericBuffer<NType, dimensionality> NumericBuffer<NType, dimensionality>::operator-( const double value ) const
	{
		return this->operator+( -value );
	}



	template<typename NType, unsigned int dimensionality>
	template<typename otherT, unsigned int otherDimensionality>
	inline NumericBuffer<NType, dimensionality> NumericBuffer<NType, dimensionality>::operator-( const NumericBuffer<otherT, otherDimensionality>& other ) const
	{
		return this->operator+( -other );
	}



	template<typename NType, unsigned int dimensionality>
	inline NumericBuffer<NType, dimensionality> NumericBuffer<NType, dimensionality>::operator*( const double value ) const
	{
		auto ret = this->toVector<double>();

		for ( auto& e : ret )
		{
			e *= value;
		}

		return NumericBuffer<NType, dimensionality>( ret );
	}



	template<typename NType, unsigned int dimensionality>
	template<typename otherT, unsigned int otherDimensionality>
	inline NumericBuffer<NType, dimensionality> NumericBuffer<NType, dimensionality>::operator*( const NumericBuffer<otherT, otherDimensionality>& other ) const
	{
		auto ret = this->toVector<double>();

		const auto count = ( dimensionality < otherDimensionality ) ? dimensionality : otherDimensionality;

		for ( unsigned int i = 0; i < count; i++ )
		{
			ret[i] = this->getElement( i ) * other.getElement( i );
		}

		return NumericBuffer<NType, dimensionality>( ret );
	}



	template<typename NType, unsigned int dimensionality>
	inline NumericBuffer<NType, dimensionality> NumericBuffer<NType, dimensionality>::operator/( const double value ) const
	{
		return this->operator*( 1 / value );
	}



	template<typename NType, unsigned int dimensionality>
	template<typename otherT, unsigned int otherDimensionality>
	inline NumericBuffer<NType, dimensionality> NumericBuffer<NType, dimensionality>::operator/( const NumericBuffer<otherT, otherDimensionality>& other ) const
	{
		auto ret = this->toVector<double>();

		const auto count = ( dimensionality < otherDimensionality ) ? dimensionality : otherDimensionality;

		for ( unsigned int i = 0; i < count; i++ )
		{
			ret[i] = this->getElement( i ) / other.getElement( i );
		}

		return NumericBuffer<NType, dimensionality>( ret );
	}



	template<typename NType, unsigned int dimensionality>
	template<typename otherNType>
	inline const NumericBuffer<NType, dimensionality>& NumericBuffer<NType, dimensionality>::operator=( const std::vector<otherNType>& data )
	{
		return this->operator()( data );
	}



	template<typename NType, unsigned int dimensionality>
	template<typename otherNType, unsigned int otherDimensionality>
	inline const NumericBuffer<NType, dimensionality>& NumericBuffer<NType, dimensionality>::operator=( const NumericBuffer<otherNType, otherDimensionality>& other )
	{
		return this->operator()( other );
	}



	template<typename NType, unsigned int dimensionality>
	inline const NumericBuffer<NType, dimensionality>& NumericBuffer<NType, dimensionality>::operator+=( const double value )
	{
		return this->operator=( *this + value );
	}



	template<typename NType, unsigned int dimensionality>
	template<typename otherNType, unsigned int otherDimensionality>
	inline const NumericBuffer<NType, dimensionality>& NumericBuffer<NType, dimensionality>::operator+=( const NumericBuffer<otherNType, otherDimensionality>& other )
	{
		return this->operator=( *this + other );
	}



	template<typename NType, unsigned int dimensionality>
	inline const NumericBuffer<NType, dimensionality>& NumericBuffer<NType, dimensionality>::operator-=( const double value )
	{
		return this->operator+=( -value );
	}



	template<typename NType, unsigned int dimensionality>
	template<typename otherNType, unsigned int otherDimensionality>
	inline const NumericBuffer<NType, dimensionality>& NumericBuffer<NType, dimensionality>::operator-=( const NumericBuffer<otherNType, otherDimensionality>& other )
	{
		return this->operator+=( -other );
	}



	template<typename NType, unsigned int dimensionality>
	inline const NumericBuffer<NType, dimensionality>& NumericBuffer<NType, dimensionality>::operator*=( const double value )
	{
		return this->operator=( *this * value );
	}



	template<typename NType, unsigned int dimensionality>
	template<typename otherNType, unsigned int otherDimensionality>
	inline const NumericBuffer<NType, dimensionality>& NumericBuffer<NType, dimensionality>::operator*=( const NumericBuffer<otherNType, otherDimensionality>& other )
	{
		return this->operator=( *this * other );
	}



	template<typename NType, unsigned int dimensionality>
	inline const NumericBuffer<NType, dimensionality>& NumericBuffer<NType, dimensionality>::operator/=( const double value )
	{
		return this->operator*=( 1 / value );
	}



	template<typename NType, unsigned int dimensionality>
	template<typename otherNType, unsigned int otherDimensionality>
	inline const NumericBuffer<NType, dimensionality>& NumericBuffer<NType, dimensionality>::operator/=( const NumericBuffer<otherNType, otherDimensionality>& other )
	{
		return this->operator=( *this / other );
	}



	template<typename NType, unsigned int dimensionality>
	template<typename otherNType>
	inline const NumericBuffer<NType, dimensionality>& NumericBuffer<NType, dimensionality>::operator()( const std::vector<otherNType>& data )
	{
		this->copyBuffer( data );

		return *this;
	}



	template<typename NType, unsigned int dimensionality>
	template<typename otherNType, unsigned int otherDimensionality>
	inline const NumericBuffer<NType, dimensionality>& NumericBuffer<NType, dimensionality>::operator()( const NumericBuffer<otherNType, otherDimensionality>& other )
	{
		return this->operator()( static_cast<std::vector<otherNType>>( other ) );
	}



	template<typename NType, unsigned int dimensionality>
	inline NType& NumericBuffer<NType, dimensionality>::operator[]( const unsigned int index )
	{
		return this->buffer[ index ];
	}



	template<typename NType, unsigned int dimensionality>
	inline bool NumericBuffer<NType, dimensionality>::operator==( const NumericBuffer& other ) const
	{
		for ( unsigned int i = 0; i < dimensionality; i++ )
		{
			if ( this->getElement( i ) != other.getElement( i ) ) { return false; }
		}

		return true;
	}



	template<typename NType, unsigned int dimensionality>
	inline bool NumericBuffer<NType, dimensionality>::operator!=( const NumericBuffer& other ) const
	{
		return !this->operator==( other );
	}



	template<typename NType, unsigned int dimensionality>
	template<typename otherNType>
	inline otherNType NumericBuffer<NType, dimensionality>::getElement( const unsigned int index ) const
	{
		return static_cast<otherNType>( this->buffer.at( index ) );
	}



	template<typename NType, unsigned int dimensionality>
	inline unsigned int NumericBuffer<NType, dimensionality>::getDimensionality() const
	{
		return dimensionality;
	}



	template<typename NType, unsigned int dimensionality>
	inline void NumericBuffer<NType, dimensionality>::fill( const double value )
	{
	//	std::fill( this->buffer.begin(), this->buffer.end(), static_cast<T>( value ) );

		std::vector<NType> data( dimensionality );

		std::fill( data.begin(), data.end(), static_cast<NType>( value ) );

		this->copyBuffer( data );
	}



	template<typename NType, unsigned int dimensionality>
	inline NumericBuffer<NType, dimensionality> NumericBuffer<NType, dimensionality>::filled( const double value ) const
	{
		NumericBuffer<NType, dimensionality> ret;

		ret.fill( value );

		return ret;
	}



	template<typename NType, unsigned int dimensionality>
	inline void NumericBuffer<NType, dimensionality>::zeroClear()
	{
		this->fill( 0 );
	}



	template<typename NType, unsigned int dimensionality>
	inline NumericBuffer<NType, dimensionality> NumericBuffer<NType, dimensionality>::zeroCleared() const
	{
		return this->filled( 0 );
	}



	template<typename NType, unsigned int dimensionality>
	inline ns_basicObjectType::BasicObject::String NumericBuffer<NType, dimensionality>::toString() const
	{
	//	std::string ret = "";
		std::string ret = typeid( *this ).name();
		ret += "\n";

		for ( unsigned int i = 0; i < this->buffer.size(); i++ )
		{
			ret += "[" + std::to_string( i ) + "]" + " = " + std::to_string( this->getElement( i ) ) + " ";
		}

		return ret + "\n";
	}



	template<typename NType, unsigned int dimensionality>
	inline void NumericBuffer<NType, dimensionality>::argmentsToBuffer( std::vector<double>& data )
	{

	}



	template<typename NType, unsigned int dimensionality>
	template<class First, class... Rest>
	inline void NumericBuffer<NType, dimensionality>::argmentsToBuffer( std::vector<double>& data, const First & first, const Rest&... rest )
	{
	//http://daily.belltail.jp/?p=195

		data.push_back( first );

		this->argmentsToBuffer( data, rest... );
	}



	template<typename NType, unsigned int dimensionality>
	inline void NumericBuffer<NType, dimensionality>::clearBuffer()
	{
		this->buffer.clear();
	}



	template<typename NType, unsigned int dimensionality>
	inline void NumericBuffer<NType, dimensionality>::initializeBuffer()
	{
		this->clearBuffer();

		this->buffer.resize( dimensionality );
	}



	template<typename NType, unsigned int dimensionality>
	template<typename otherNType>
	inline void NumericBuffer<NType, dimensionality>::copyBuffer( const std::vector<otherNType>& data )
	{
		if ( data.empty() ) { return; }



		const auto count = ( this->buffer.size() < data.size() ) ? this->buffer.size() : data.size();

		for ( unsigned int i = 0; i < count; i++ )
		{
			this->operator[]( i ) = static_cast<NType>( data.at( i ) );
		}
	}



	template<typename NType, unsigned int dimensionality>
	template<typename otherNType>
	inline std::vector<otherNType> NumericBuffer<NType, dimensionality>::toVector() const
	{
		return std::vector<otherNType>( this->buffer.begin(), this->buffer.end() );
	}



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_NUMERICBUFFER_H_