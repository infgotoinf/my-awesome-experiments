#include <iostream>
#include <windows.h>

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

int main() {
	POINT CursorPos;
	COORD CursorCoord, OldCoord = { 0, 0 };
	while (1) {
		system("cls");
		GetCursorPos(&CursorPos);
		CursorCoord.X = CursorPos.x / 8;
		CursorCoord.Y = CursorPos.y / 16;

		SetConsoleCursorPosition(console, OldCoord);
		std::cout << "\033[40m  ";
		OldCoord = CursorCoord;
		//std::cout << CursorPos.x << CursorPos.y << ' ';
		SetConsoleCursorPosition(console, CursorCoord);
		std::cout << "\033[107m  \033[40m";
		Sleep(5);
	}

	return 0;
}