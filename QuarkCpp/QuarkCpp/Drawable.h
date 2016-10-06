#pragma once

#include "BaseObject.h"

namespace QuarkCpp
{
	class Drawable : public BaseObject
	{
	public:
		Drawable();
		virtual ~Drawable();

		void             set(BaseObject* drawable, bool isDOM = false);
		Drawable*        get(BaseObject* obj, BaseObject* context);
		bool             isDrawable(BaseObject* drawable);
	};

}


