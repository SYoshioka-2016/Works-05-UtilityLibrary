#ifndef _INCLUDE_GUARD_RANDOM_H_
#define _INCLUDE_GUARD_RANDOM_H_



#include <Uncopyable.h>

#include <random>



namespace ns_myUtility
{


namespace ns_mathUtil
{



class Random : private ns_typeUtil::Uncopyable
{
public:

	static bool randomBoolean();

	static int randomInt( const int min, const int max );

	static unsigned int randomUInt( const unsigned int min, const unsigned int max );

	static float randomFloat( const float min, const float max );

	static double randomDouble( const double dMin, const double dMax );

private:

	Random();

	~Random();

private:

	static std::random_device		m_randomDevice;

	static std::mt19937				m_mt;
};



}	// namespace ns_mathUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_RANDOM_H_