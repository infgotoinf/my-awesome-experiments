#include <iostream>
#include <windows.h>

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

int main() {
	POINT CursorPos;
	COORD CursorCoord;
	while (1) {
		GetCursorPos(&CursorPos);
		CursorCoord.X = CursorPos.x / 8;
		CursorCoord.Y = CursorPos.y / 16;
		//std::cout << CursorPos.x << CursorPos.y << ' ';
		SetConsoleCursorPosition(console, CursorCoord);
	}

	return 0;
}