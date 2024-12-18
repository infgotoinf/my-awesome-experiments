#include <iostream>
#include <windows.h>

int main() {
	POINT CursorPos;
	while (1) {
		GetCursorPos(&CursorPos);
		std::cout << CursorPos.x << CursorPos.y << ' ';
	}

	return 0;
}