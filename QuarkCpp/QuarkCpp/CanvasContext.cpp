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
		// �ѻ��滭��������
	}
	else if (target->isInstanceof("Graphics") || target->isInstanceof("Text"))
	{

	}
	else
	{
		// ����drawable
		Drawable* drawable = target->getDrawable(this);
	}
}

void CanvasContext::transform(DisplayObject* target)
{

}

void CanvasContext::remove(DisplayObject* target)
{

}
