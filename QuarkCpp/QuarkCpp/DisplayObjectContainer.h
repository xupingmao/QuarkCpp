#pragma once

#include <vector>
#include <memory>
namespace QuarkCpp
{
	class DisplayObjectContainer : public DisplayObject
	{

	private:

		std::vector<shared_ptr<DisplayObject>> children;

	public:
		DisplayObjectContainer();
		~DisplayObjectContainer();

		// DisplayObjectContainer* addChildAt(DisplayObject* object, int index);
	};
}

