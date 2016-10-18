
#pragma once

#include "stdafx.h"
#include <vector>
#include <string>

namespace QuarkCpp
{

	class Quark : public BaseObject
	{

	private:
		Context* context = nullptr;

		LPCWSTR pWindowText = TEXT("Hello,Windows");

		std::vector<TimerListener*> m_listeners;

	public:

		Quark();
		~Quark();

		Context* getContext();

		static void trace(wstring msg);

		// �����¼�
		void OnKeyDown(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);

		const char* getType()
		{
			return "QuarkCpp";
		}

		// ��ͼ����
		void OnPaint(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam);
	};
}
#pragma once
