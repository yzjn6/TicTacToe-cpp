#include "TicTacToe.h"

void gotoxy(int x, int y)
{
    COORD p;
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    p.X = x;
    p.Y = y;
    SetConsoleCursorPosition(handle, p);
}
void HideCursor()

{
    CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}
void COLOR_PRINT(const char* s, int color,int x,int y)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    gotoxy(x,y);
    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | color);
    cout<<s;
    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | 7);
}
void COLOR_PRINT(int s, int color, int x, int y)
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    gotoxy(x, y);
    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | color);
    cout << s;
    SetConsoleTextAttribute(handle, FOREGROUND_INTENSITY | 7);
}
void SetConsoleWindowSize(SHORT width, SHORT height)
{
    HANDLE hStdOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT wrt = { 0, 0, width - 1, height - 1 };
    SetConsoleWindowInfo(hStdOutput, TRUE, &wrt); // ÉèÖÃ´°Ìå³ß´ç
    COORD coord = { width, height };
    SetConsoleScreenBufferSize(hStdOutput, coord); // ÉèÖÃ»º³å³ß´ç
}