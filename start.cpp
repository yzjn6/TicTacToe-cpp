#include "TicTacToe.h"

void start_meau()//
{
    while (true) {
        //COLOR_PRINT("Welcome to Tic-Tac-Toe\n                          \n", 3, 4, 2);
        COLOR_PRINT("      - Press any key -      ", 6, 1, 5);
        COLOR_PRINT("          to start           ", 6, 1, 6);
        Sleep(500);
        COLOR_PRINT("        Press any key        ", 6, 1, 5);
        COLOR_PRINT("      -   to start    -      ", 6, 1, 6);
        Sleep(500);
        if (_kbhit()) {
            int x = _getch();
            system("cls");
            break;
        }
    }
}
void play_border(int type) {//print game's border
    switch (type) {
    case 2:
        for (int i = 0; i < 12; i++) {
            COLOR_PRINT("|", COLOR_BORDER, 19, i);
        }

    case 1:
        for (int i = 0; i < 33; i++) {
            COLOR_PRINT("=", COLOR_BORDER, i, 0);
        }
        for (int i = 0; i < 33; i++) {
            COLOR_PRINT("=", COLOR_BORDER, i, 12);
        }
        for (int i = 1; i < 12; i++) {
            COLOR_PRINT("|", COLOR_BORDER, 0, i);
        }
        for (int i = 1; i < 12; i++) {
            COLOR_PRINT("|", COLOR_BORDER, 32, i);
        }
        break;
    case 3:
        COLOR_PRINT("   |   |   ", COLOR_GAME, GAME_X, GAME_Y + 0);
        COLOR_PRINT("---|---|---", COLOR_GAME, GAME_X, GAME_Y + 1);
        COLOR_PRINT("   |   |   ", COLOR_GAME, GAME_X, GAME_Y + 2);
        COLOR_PRINT("---|---|---", COLOR_GAME, GAME_X, GAME_Y + 3);
        COLOR_PRINT("   |   |   ", COLOR_GAME, GAME_X, GAME_Y + 4);
       
        break;
    }
}
void author()
{
    COLOR_PRINT("BY:Yinzhijun", 2, 20, 10);
    COLOR_PRINT("8008120196", 2, 20, 11);
}