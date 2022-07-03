#include "TicTacToe.h"

int** build_board()
{

    int** chessboard = new int*[3];
    for (int i = 0; i < 3; i++) {
        chessboard[i] = new int[3];
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            chessboard[i][j] = 0;
        }
    }
    return chessboard;
}
