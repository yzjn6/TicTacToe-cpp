#include "TicTacToe.h"

int get_x(int position)
{
    return position / 3;
}
int get_y(int position)
{
    return position % 3;
}
int if_win(int** cb, int count, score *sc)
{
    int right[8][3] = { { 0, 4, 8 }, { 2, 4, 6 }, { 0, 1, 2 }, { 3, 4, 5 }, { 6, 7, 8 }, { 0, 3, 6 }, { 1, 4, 7 }, { 2, 5, 8 } };
    for (int i = 0; i < 8; i++) {
        int a = right[i][0], b = right[i][1], c = right[i][2];
        int aa = cb[get_x(a)][get_y(a)];
        int bb = cb[get_x(b)][get_y(b)];
        int cc = cb[get_x(c)][get_y(c)];
        bool flag = (aa == 0) || (bb == 0) || (cc == 0);
        if ((aa + bb + cc) == 3 && !flag) {
            sc->ip1();
            sc->wins(a, b, c);
            return 1;
        } else if ((aa + bb + cc) == 6 && !flag) {
            sc->ip2();
            sc->wins(a, b, c);
            return 1;
        } 
    }
   if (count == 9)
    {
        sc->idraw();
        return 2;
    }
    return 0;
}
void win_out(score* sc,int player,int status) {
    int* win = sc->getwins();
    for (int i = 0; i < 3; i++) {
        int x = get_x(win[i]);
        int y = get_y(win[i]);
        if (status == 1) {
            if (player == 1) {
                COLOR_PRINT("o", COLOR_WIN, GAME_X + y * 4 + 1, GAME_Y + x * 2);
                
            } else if (player == 0) {
                COLOR_PRINT("x", COLOR_WIN, GAME_X + y * 4 + 1, GAME_Y + x * 2);
            }
        }
    }
 
}