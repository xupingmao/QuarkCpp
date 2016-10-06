#pragma once

#include <string>
using namespace std;

namespace QuarkCpp
{
	class BaseObject
	{
	protected:
		const char* type; // 记录运行时的对象类型

	public:
		BaseObject();

		const char* getType();
		bool isInstanceof(const char* type);
		virtual ~BaseObject();
	};
}
