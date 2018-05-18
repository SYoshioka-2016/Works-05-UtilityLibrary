#ifndef _INCLUDE_GUARD_BASICOBJECT_H_
#define _INCLUDE_GUARD_BASICOBJECT_H_



#include <StandardString.h>




namespace ns_myUtility 
{



namespace ns_typeUtil
{



namespace ns_basicObjectType
{



	class BasicObject
	{
	public:

		using String = ns_standardType::StandardMultibyteString;

	public:

		virtual ~BasicObject();



		virtual String toString() const;

		void consoleOut() const;



		friend std::ostream& operator<<( std::ostream& out, const BasicObject& ref );

	protected:

		String toTypeNameString() const;

		virtual String toConsoleOutString() const;

		virtual void releaseObject();

	private:

//		static std::vector<BasicObject*> m_objects;
	};



}	// namespace ns_basicObjectType



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_BASICOBJECT_H_