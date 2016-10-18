#include "stdafx.h"
#include "Quark.h"
#include "TimeInfo.h"

using namespace QuarkCpp;

Quark::Quark()
{
	context = new CanvasContext;
}

Quark::~Quark()
{
	if (context != nullptr)
	{
		delete context;
	}

	for (auto listener : m_listeners)
	{
		delete listener; // �ͷż�����
	}
}

void Quark::trace(wstring msg)
{
	LPCWSTR winStr = msg.c_str();
	OutputDebugString(winStr);
}

// �����¼�
void Quark::OnKeyDown(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{

}


// ��ͼ����
void Quark::OnPaint(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
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
		for (auto listener : m_listeners)
		{
			listener->step();
		}
	}

	SetTextColor(hdc, RGB(240, 240, 96));
	SetBkMode(hdc, TRANSPARENT);
	
	wstring text = L"hello, the time is %I64d";
	wchar_t buf[1024];
	// LPWSTR buf = &buf;
	wsprintf(buf, text.c_str(), TimeInfo::getTimeMillis());
	DrawText(hdc, buf, -1, &rc, DT_CENTER | DT_SINGLELINE | DT_VCENTER);

	EndPaint(hwnd, &ps);


	if (context != nullptr)
	{
		// 
	}
	//wstring msg = L"hello";
	//msg += L"\n";
	//this->trace(msg);
}

Context* Quark::getContext()
{
	return context;
}