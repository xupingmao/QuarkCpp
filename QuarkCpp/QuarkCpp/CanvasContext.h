#pragma once

#include "stdafx.h"

namespace QuarkCpp
{
	// ����������

	class CanvasContext : public Context
	{
	public:
		CanvasContext();
		~CanvasContext();

		virtual void startDraw();
		virtual void endDraw();
		virtual void draw(DisplayObject* target);
		virtual void transform(DisplayObject* target);
		virtual void remove(DisplayObject* target);
	};


}
