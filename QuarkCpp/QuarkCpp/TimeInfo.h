#pragma once
#include "BaseObject.h"
#include "stdafx.h"

namespace QuarkCpp
{
	class TimeInfo :
		public BaseObject
	{
	public:
		TimeInfo();
		~TimeInfo();

		static int64_t getTimeMillis();

		const char* getType()
		{
			return "TimeInfo";
		}
	};


}
