// QuarkCpp.cpp : �������̨Ӧ�ó������ڵ㡣
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

