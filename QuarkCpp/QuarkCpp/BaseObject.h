#pragma once

#include <string>
using namespace std;

namespace QuarkCpp
{
	class BaseObject
	{
	protected:
		const char* type; // ��¼����ʱ�Ķ�������

	public:
		BaseObject();

		const char* getType();
		bool isInstanceof(const char* type);
		virtual ~BaseObject();
	};
}
