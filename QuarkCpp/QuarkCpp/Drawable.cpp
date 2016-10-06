#include "stdafx.h"
#include "Drawable.h"

using namespace QuarkCpp;

Drawable::Drawable()
{
	type = "Drawable";
}


Drawable::~Drawable()
{
}

Drawable* Drawable::get(BaseObject* obj, BaseObject* context)
{
	return nullptr;
}

void Drawable::set(BaseObject* drawable, bool isDOM)
{

}

bool Drawable::isDrawable(BaseObject* obj) 
{
	return false;
}