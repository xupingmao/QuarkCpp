#include "stdafx.h"
#include "BaseObject.h"

using namespace QuarkCpp;

BaseObject::BaseObject()
{

}

BaseObject::~BaseObject()
{
}


const char* BaseObject::getType() {
	return "BaseObject";
}

bool BaseObject::isInstanceof(const char* type) {
	// ensure is the same char
	return getType() == type;
}

string BaseObject::toString()
{
	return getType();
}