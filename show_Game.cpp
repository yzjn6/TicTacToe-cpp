#include "TicTacToe.h"

void show_Game() {
    score sc = score();
    creat_Game(sc);
}

void creat_Game(score sc) {
    int** chessboard = build_board();
    int position = 1;
    int player = 0;
    int count = 0;
    while (true) {
        read_board(chessboard,COLOR_NORMAL);
        
        int status = true;
        { //    
            COLOR_PRINT("Player   turn", COLOR_PLAYER_NOW, PLAYER_NOW_X, PLAYER_NOW_Y);
            COLOR_PRINT(player + 1, COLOR_PLAYER_NOW_WHO, PLAYER_NOW_X + 7, PLAYER_NOW_Y);
            while (true) {
                if (_kbhit()) {

                    position = _getch();
                    
                    if (status&&check(position)&&movexy(position, chessboard, player)) {
                        count++;//chess number
                        status = if_win(chessboard, count, &sc);//show if game 1:p1 p2 2:draw 0:go on
                        player = !player; //change player
                        
                        break;
                    }
                }
            }
        }
        read_board(chessboard,COLOR_NORMAL);
        Sleep(200);
        if (status) {
            win_out(&sc, player, status);
            if (status == 2)
                read_board(chessboard, COLOR_WIN);
            show_bottom(&sc); 
            
            gameover();
            
            creat_Game( sc);
            
        }
    }
}

void gameover()
{
    COLOR_PRINT("              ", COLOR_Game_over, PLAYER_NOW_X, PLAYER_NOW_Y);
    COLOR_PRINT("Game over", COLOR_Game_over, 21, 2);
    COLOR_PRINT("Press any key", COLOR_Game_over, 3, PLAYER_NOW_Y - 1);
    COLOR_PRINT(" to continue", COLOR_Game_over, 3, PLAYER_NOW_Y);
    while (true) {
        if (_kbhit()) {
            int x = _getch();

            break;
        }
    }
    COLOR_PRINT("          ", 9, 21, 2);
    COLOR_PRINT("              ", 9, 2, PLAYER_NOW_Y-1);
    COLOR_PRINT("              ", 9, 2, PLAYER_NOW_Y);
  
}
void read_board(int** chessboard,int color)
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (chessboard[i][j] == 0) {
                COLOR_PRINT(" ", color, GAME_X + j *4+ 1, GAME_Y + i*2);
            } else if (chessboard[i ][j ] == 1) {
                COLOR_PRINT("o", color, GAME_X + j*4 + 1, GAME_Y + i*2);
            } else if (chessboard[i ][j ] == 2) {
                COLOR_PRINT("x", color, GAME_X + j*4 + 1, GAME_Y + i*2);
            }
        }
    }
}
