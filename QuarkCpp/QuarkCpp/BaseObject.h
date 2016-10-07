#pragma once

#include <string>

namespace QuarkCpp
{
	using namespace std;
	typedef float number;

	class BaseObject
	{

	public:
		BaseObject();

		virtual const char* getType() = 0; // TODO 强制要求实现

		// 声明为虚函数时才会调用派生类的方法
		virtual string toString();

		bool isInstanceof(const char* type);
		virtual ~BaseObject();
	};
}
