#include <Random.h>

#include <AssertUtil.h>



namespace ns_myUtility
{



namespace ns_mathUtil
{



	std::random_device		Random::m_randomDevice;

	std::mt19937			Random::m_mt( m_randomDevice() );



	Random::Random()
	{
	
	}



	Random::~Random()
	{
	
	}



	bool Random::randomBoolean()
	{
		return ( Random::randomInt( 0, 1 ) == 1 ) ? true : false;
	}



	int Random::randomInt( const int min, const int max )
	{
		DEBUG_ASSERT( min <= max );



		std::uniform_int_distribution<int> uniformIntDistribution( min, max );

		return uniformIntDistribution( m_mt );
	}



	unsigned int Random::randomUInt( const unsigned int min, const unsigned int max )
	{
		DEBUG_ASSERT( min <= max );



		std::uniform_int_distribution<unsigned int>	uniformIntDistribution( min, max );

		return uniformIntDistribution( m_mt );
	}



	float Random::randomFloat( const float min, const float max )
	{
		DEBUG_ASSERT( min <= max );



		std::uniform_real_distribution<float> uniformRealDistribution( min, max );

		return uniformRealDistribution( m_mt );
	}



	double Random::randomDouble( const double min, const double max )
	{
		DEBUG_ASSERT( min <= max );



		std::uniform_real_distribution<double> uniformRealDistribution( min, max );

		return uniformRealDistribution( m_mt );
	}



}	// namespace ns_mathUtil



}	// namespace ns_myUtility