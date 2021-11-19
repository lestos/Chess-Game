#pragma once
#include <iostream>
#include <GLFW/glfw3.h>

#if PLATFORM_WINDOWS
#include "Win32Window.h"

int main(int argc, char** argv)
{
	std::cout << "Creating Window\n";

	Win32Window* pWindow = new Win32Window();

	bool running = true;
	while (running)
	{
		if (!pWindow->ProcessMessages())
		{
			std::cout << "Closing Window";
			running = false;
		}

		// Render


		Sleep(10);
	}

	delete pWindow;

}

#endif