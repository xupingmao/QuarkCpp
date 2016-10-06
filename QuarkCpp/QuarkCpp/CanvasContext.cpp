#include "stdafx.h"
#include "CanvasContext.h"

CanvasContext::CanvasContext()
{
	// type = "CanvasContext";
}


CanvasContext::~CanvasContext()
{
}

void CanvasContext::startDraw()
{

}

void CanvasContext::endDraw()
{

}

void CanvasContext::draw(DisplayObject* target)
{
	if (target->parent != nullptr && target->parent->mask != nullptr)
	{
		return;
	}

	if (target->mask != nullptr)
	{

	}
	else if (target->_cache != nullptr) 
	{
		// 把缓存画到画布上
	}
	else if (target->isInstanceof("Graphics") || target->isInstanceof("Text"))
	{

	}
	else
	{
		// 绘制drawable
		Drawable* drawable = target->getDrawable(this);
	}
}

void CanvasContext::transform(DisplayObject* target)
{

}

void CanvasContext::remove(DisplayObject* target)
{

}
