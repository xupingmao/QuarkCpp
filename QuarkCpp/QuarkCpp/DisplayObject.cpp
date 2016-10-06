#include "stdafx.h"
#include "DisplayObject.h"


DisplayObject::DisplayObject()
{
	// type = "DisplayObject";
}


DisplayObject::~DisplayObject()
{
}

const char* DisplayObject::getType()
{
	return "DisplayObject";
}

Drawable* DisplayObject::getDrawable(Context* context)
{
	return nullptr;
}