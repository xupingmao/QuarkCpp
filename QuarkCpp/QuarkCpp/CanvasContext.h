#pragma once

#include "stdafx.h"

namespace QuarkCpp
{
	// 画布上下文

	class CanvasContext : public Context
	{
	private:

		HDC hdc;
		RECT* rect;

	public:
		CanvasContext();
		~CanvasContext();

		virtual const char* getType()
		{
			return "CanvasContext";
		}

		virtual void setHDC(HDC hdc);
		virtual void setRect(RECT* rect);

		virtual void startDraw();
		virtual void endDraw();
		virtual void draw(DisplayObject* target);
		virtual void transform(DisplayObject* target);
		virtual void remove(DisplayObject* target);
	};


}
