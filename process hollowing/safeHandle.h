#pragma once
#include <memory>
#include <windows.h>
#include <iostream>

class SafeHandle {
public:	
	SafeHandle(HANDLE &_hProcess, HANDLE &_hThread);
	HANDLE& getProcess();
	HANDLE& getThread();
	~SafeHandle();
private:
	HANDLE _hProcess = NULL;
	HANDLE _hThread = NULL;
};