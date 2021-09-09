#include "safeHandle.h"

SafeHandle::SafeHandle(HANDLE &hProcess , HANDLE &hThread) {
	_hProcess = hProcess;
	_hThread = hThread;
}

SafeHandle::~SafeHandle() {
	if (!CloseHandle(_hThread)) {
		std::cout << "Failed close thread\n" << GetLastError();
	}
	if (!CloseHandle(_hProcess)) {
		std::cout << "Failed close process\n" << GetLastError();
	}
}

HANDLE& SafeHandle::getProcess() {
	return this->_hProcess;
}

HANDLE& SafeHandle::getThread() {
	return this->_hThread;
}