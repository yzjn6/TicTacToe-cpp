#pragma once
#include <iostream>
#include <fstream>
#include< conio.h >
#include <vector>
#include<Windows.h>
//#include "score.cpp"
#define GAME_X 5
#define GAME_Y 4
#define PLAYER_NOW_X 4
#define PLAYER_NOW_Y 11
class score {
private:
public:
    int* winer = new int[3];
    int p1 = 0;
    int p2 = 0;
    int draw = 0;
    score()
    {
        p1 = 0;
        p2 = 0;
        draw = 0;
        *winer = { 0 };
    }
    void wins(int, int, int);
    void ip1();
    void ip2();
    void idraw();
    int* getwins();
    int* grades();
};
class save;
#define COLOR_WIN 4
#define COLOR_NORMAL 7
#define COLOR_GAME 7
#define COLOR_Game_over 9
#define COLOR_SCORE 7
#define COLOR_PLAYER 7
#define COLOR_BORDER 7
#define COLOR_PLAYER_NOW 9
#define COLOR_PLAYER_NOW_WHO 6
#define COLOR_SCORE 7
#define COLOR_SCORE 7

using namespace std;

void play_border(int type);

void start_meau();

void show_Game();
void gameover();
void creat_Game(score sc);
void author();
bool check(int);

int get_x(int position);
int get_y(int position);

int if_win(int** cb, int count,score *sc);
void win_out(score *sc,int player,int status);


void gotoxy(int x, int y);
void HideCursor();
void COLOR_PRINT(const char* s, int color, int x, int y);
void COLOR_PRINT(int n, int color, int x, int y);
void SetConsoleWindowSize(SHORT width, SHORT height);

void show_top();
void show_bottom(score* sc);
int** build_board();
void read_board(int** chessboard,int color);
bool movexy(int position, int** chessboard, int player);