#include "stdafx.h"
#include "Rectangle.h"
#include <algorithm>

using namespace QuarkCpp;

namespace QuarkCpp
{
	Rectangle::Rectangle()
	{
		// type = "Rectangle";
	}

	Rectangle::Rectangle(number x, number y, number width, number height)
	{
		// type = "Rectangle";
		this->x = x;
		this->y = y;
		this->width = width;
		this->height = height;
	}

	Rectangle::~Rectangle()
	{
	}

	const char* Rectangle::getType()
	{
		return "Rectangle";
	}


	bool Rectangle::intersects(Rect& rect)
	{
		return (this->x <= rect.x + rect.width && rect.x <= this->x + this->width &&
			this->y <= rect.y + rect.height && rect.y <= this->y + this->height);
	}

	Rectangle* Rectangle::intersection(Rect& rect)
	{
		number x0 = max(this->x, rect.x);
		number x1 = min(this->x + this->width, rect.x + rect.width);

		if (x0 <= x1)
		{
			number y0 = max(this->y, rect.y);
			number y1 = min(this->y + this->height, rect.y + rect.height);

			if (y0 <= y1)
			{
				return new Rectangle(x0, y0, x1 - x0, y1 - y0);
			}
		}
		return nullptr;
	}

	Rectangle* Rectangle::union_(Rect& rect, bool returnNew)
	{
		number right = max(this->x + this->width, rect.x + rect.width);
		number bottom = max(this->y + this->height, rect.y + rect.height);

		number x = min(this->x, rect.x);
		number y = min(this->y, rect.y);
		number width = right - x;
		number height = bottom - y;
		if (returnNew)
		{
			return new Rectangle(x, y, width, height);
		}
		else
		{
			this->x = x;
			this->y = y;
			this->width = width;
			this->height = height;
		}
	}

	bool Rectangle::containsPoint(number x, number y)
	{
		return (this->x <= x && x <= this->x + this->width && this->y <= y && y <= this->y + this->height);
	}

	string Rectangle::toString()
	{
		char buf[1024];
		sprintf_s(buf, "x=%f,y=%f,width=%f,height=%f", x, y, width, height);
		return buf;
	}
}
