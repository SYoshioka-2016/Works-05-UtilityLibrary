#ifndef _INCLUDE_GUARD_UNCOPYABLE_H_
#define _INCLUDE_GUARD_UNCOPYABLE_H_



namespace ns_myUtility 
{



namespace ns_typeUtil
{



	class Uncopyable
	{
	protected:

		Uncopyable() { }

		~Uncopyable() { }

	private:

		Uncopyable( const Uncopyable& ) = delete;

		Uncopyable& operator=( const Uncopyable& ) = delete;
	};



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_UNCOPYABLE_H_