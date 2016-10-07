#pragma once

#include "stdafx.h"

namespace QuarkCpp
{
	class DisplayObject : public BaseObject
	{


	public:

		string name;
		number x;
		number y;
		number regX;
		number regY;
		number width;
		number height;
		number alpha;
		number scaleX;
		number scaleY;
		number rotation = 0;

		bool visible;
		bool eventEnabled;
		bool transformEnabled;
		bool useHandleCursor = false;

		DisplayObject* mask = nullptr;

		Drawable* drawable = nullptr;
		DisplayObject* parent = nullptr;
		Context* context = nullptr;

		BaseObject* _cache;

		DisplayObject();
		~DisplayObject();

		const char* getType();

		Drawable* getDrawable(Context* ctx);
	};


}
