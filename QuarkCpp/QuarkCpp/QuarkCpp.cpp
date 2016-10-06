// QuarkCpp.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

using namespace QuarkCpp;
using namespace std;

int main()
{
	BaseObject* obj = new Drawable;
	BaseObject* rectangle = new Rectangle(0, 0, 100, 100);
	BaseObject* displayObj = new DisplayObject;

	cout << "obj.type=" << obj->getType() << endl;

	cout << "obj.toString()=" << obj->toString() << endl;

	cout << "rectangle=" << rectangle->toString() << endl;

	cout << "isRectangle=" << rectangle->isInstanceof("Rectangle") << endl;

	cout << "displayObj=" << displayObj->toString() << endl;

	delete obj;
	delete rectangle;
	delete displayObj;

	int pause;

	cin >> pause;
    return 0;
}

