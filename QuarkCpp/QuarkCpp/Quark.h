
#pragma once

#include "stdafx.h"

namespace QuarkCpp
{

	class Quark : public BaseObject
	{

	private:
		Context* context = nullptr;

		LPCWSTR pWindowText = TEXT("Hello,Windows");

	public:

		Quark()
		{
			context = new CanvasContext;
			
			//wchar_t buf[1024];
			//LPCWSTR fmt = TEXT("context.type=%s");
			//wchar_t type[50];
			//mbstowcs_s<50> (NULL, type, context->getType(), sizeof(type));
			//swprintf_s<1024> (buf, fmt, type);

			//Quark::trace(buf); // output context.type=CanvasContext
		}

		~Quark()
		{
			if (context != nullptr)
			{
				delete context;
			}
		}

		const char* getType()
		{
			return "QuarkCpp";
		}

		static void trace(LPCWSTR msg)
		{
			OutputDebugString(msg);
		}

		// �����¼�
		void OnKeyDown(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
		{

		}

		// ��ͼ����
		void OnPaint(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
		{

			PAINTSTRUCT ps;
			HDC         hdc;
			RECT        rc;
			hdc = BeginPaint(hwnd, &ps);

			GetClientRect(hwnd, &rc);

			if (context != nullptr)
			{
				context->setHDC(hdc);
				context->setRect(&rc); // �ѻ�ͼԭ�������Թ���Ⱦ

				// ����QuarkCpp�Ķ�ʱ��
			}

			SetTextColor(hdc, RGB(240, 240, 96));
			SetBkMode(hdc, TRANSPARENT);
			DrawText(hdc, pWindowText, -1, &rc, DT_CENTER | DT_SINGLELINE | DT_VCENTER);

			EndPaint(hwnd, &ps);


			if (context != nullptr)
			{
				// 
			}
		}
	};
}
#pragma once
