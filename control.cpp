#include "TicTacToe.h"

const int keybordtype =2;

bool movexy(int position, int** chessboard, int player)
{
    int x, y;
    position -= '0';
    position--;
    switch (keybordtype) {
    case 1:
        x = position / 3;
        y = position % 3;
        break;
    case 2:
        x = 2 - position / 3;
        y = position % 3;
        break;
    default:
        break;
    }

    if (player == 0) {
        if (!chessboard[x][y]) {
            chessboard[x][y] = 1;
            return true;
        } else
            return false;
    } else if (player == 1) {
        if (!chessboard[x][y]) {
            chessboard[x][y] = 2;
            return true;
        } else
            return false;
    } else
        return false;
}
bool check(int position) {
    if (position >= '1' && position <= '9') {
        return true;
    } else
        return false;
}