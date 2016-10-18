#pragma once

# include "BaseObject.h"

namespace QuarkCpp
{
	class TimerListener : public BaseObject
	{

	public:

		virtual void step() = 0;
	};
}