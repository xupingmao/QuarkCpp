#pragma once

namespace QuarkCpp
{
	class Context : public BaseObject
	{
	public:
		Context();
		virtual ~Context() = 0;

		virtual void setHDC(HDC hdc) = 0;
		virtual void setRect(RECT* rect) = 0;

		virtual void startDraw() = 0;
		virtual void endDraw() = 0;
		virtual void draw(struct DisplayObject* target) = 0;
		virtual void transform(struct DisplayObject* target) = 0;
		virtual void remove(struct DisplayObject* target) = 0;
	};
}
