#ifndef _INCLUDE_GUARD_BASENUMERICOBJECT_H_
#define _INCLUDE_GUARD_BASENUMERICOBJECT_H_



#include <BasicObject.h>



namespace ns_myUtility 
{



namespace ns_typeUtil
{



namespace ns_basicObjectType
{



	class BaseNumericObject : public BasicObject
	{
	protected:

		using LargestFloatDataType = long double;

		using LargestSignedIntegerDataType = long long;

	public:

		virtual ~BaseNumericObject() { }

		virtual LargestFloatDataType _valueGetter() const = 0;
	};



}	// namespace ns_basicObjectType



}	// namespace ns_typeUtil



}	// namespace ns_myUtility



#endif	// #ifndef _INCLUDE_GUARD_BASENUMERICOBJECT_H_