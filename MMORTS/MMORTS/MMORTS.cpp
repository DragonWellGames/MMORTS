// MMORTS.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>
#include <iostream>
#include <sstream>


int main()
{
	
	std::cerr << "Hello World" << std::endl;
	for (int i = 0; i < 50; ++i) {
		OutputDebugString(_T("Hello World!\n"));
	}
    return 0;
}

