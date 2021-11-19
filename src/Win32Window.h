#pragma once
#include <Windows.h>

LRESULT CALLBACK WindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

class Win32Window
{
public:
	Win32Window();
	Win32Window(const Win32Window&) = delete;
	Win32Window& operator = (const Win32Window&) = delete;
	~Win32Window();

	bool ProcessMessages();
private:
	HINSTANCE m_hInstance;
	HWND m_hWnd;
};