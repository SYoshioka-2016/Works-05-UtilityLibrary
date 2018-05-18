#include <BasicObject.h>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



namespace ns_basicObjectType
{



	BasicObject::~BasicObject()
	{
		this->releaseObject();
	}



	BasicObject::String BasicObject::toString() const
	{
		return this->toTypeNameString();
	}



	void BasicObject::consoleOut() const
	{
		std::cout << *this << std::endl;
	}



	std::ostream& operator<<( std::ostream& out, const BasicObject& ref )
	{
		out << ref.toConsoleOutString().toStringA();

		return out;
	}



	BasicObject::String BasicObject::toTypeNameString() const
	{
		return typeid( *this ).name();
	}



	BasicObject::String BasicObject::toConsoleOutString() const
	{
		return this->toString();
	}



	void BasicObject::releaseObject()
	{

	}



}	// namespace ns_basicObjectType



}	// namespace ns_typeUtil



}	// namespace ns_myUtility