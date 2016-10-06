#pragma once

#include "stdafx.h"

namespace QuarkCpp
{
	class Matrix : public BaseObject
	{
	public:

		number a;
		number b;
		number c;
		number d;
		number tx;
		number ty;

		Matrix();
		~Matrix();

		const char* getType();

		Matrix& concat(Matrix& mtx);
		Matrix& rotate(number angle);

		Matrix* clone();
		string toString();
	};


}
