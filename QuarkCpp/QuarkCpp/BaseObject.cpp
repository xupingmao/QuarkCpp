#include "stdafx.h"
#include "BaseObject.h"

using namespace QuarkCpp;

BaseObject::BaseObject()
{
	type = "BaseObject";

}

BaseObject::~BaseObject()
{
}


const char* BaseObject::getType() {
	return type;
}

bool BaseObject::isInstanceof(const char* type) {
	// ensure is the same char
	return this->type == type;
}