#ifndef _INCLUDE_GUARD_CRTPUNCOPYABLE_H_
#define _INCLUDE_GUARD_CRTPUNCOPYABLE_H_



namespace ns_myUtility 
{



namespace ns_typeUtil
{

//http://d.hatena.ne.jp/murank/20101031/1288528759

	template <class T>
	class CRTPUncopyable
	{
	protected:

		CRTPUncopyable() { }

		~CRTPUncopyable() { }

	private:

		CRTPUncopyable( const CRTPUncopyable& ) = delete;

		CRTPUncopyable& operator=( const CRTPUncopyable& ) = delete;
	};



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_CRTPUNCOPYABLE_H_