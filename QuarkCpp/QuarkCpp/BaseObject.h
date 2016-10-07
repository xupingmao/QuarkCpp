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

		virtual const char* getType() = 0; // TODO ǿ��Ҫ��ʵ��

		// ����Ϊ�麯��ʱ�Ż����������ķ���
		virtual string toString();

		bool isInstanceof(const char* type);
		virtual ~BaseObject();
	};
}
