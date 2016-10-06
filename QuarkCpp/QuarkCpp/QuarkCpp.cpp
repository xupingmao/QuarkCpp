// QuarkCpp.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

using namespace QuarkCpp;
using namespace std;

int main()
{
	BaseObject* obj = new Drawable;

	cout << "obj.type=" << obj->getType() << endl;

	delete obj;

	int pause;

	cin >> pause;
    return 0;
}

