#pragma once

#include "stdafx.h"

namespace QuarkCpp 
{
	class Rectangle : public BaseObject
	{
	public:
		

		number x;
		number y;
		number width;
		number height;

		Rectangle();
		Rectangle(number x, number y, number width, number height);
		~Rectangle();

		const char* getType();

		bool intersects(Rect& rect);

		Rectangle* intersection(Rect& rect);

		Rectangle* union_(Rect& rect, bool returnNew = false);

		bool containsPoint(number x, number y);

		virtual string toString();

		// DONE
	};

}
