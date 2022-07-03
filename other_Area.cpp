#include "TicTacToe.h"

void show_top() //show top info( might be status)
{
    COLOR_PRINT("TicTacToe", 6, 6, 2);
    COLOR_PRINT("Player1 ", 4, 21, 4);
    cout << 0 ;
    COLOR_PRINT("Player2 ", 4, 21, 6);
    cout << 0;
    COLOR_PRINT("Draw    ", 4, 21, 8);
    cout << 0;
}

void show_bottom(score* sc) //show the buttom info (like socres)
{
    COLOR_PRINT("Player1 ", 4, 21, 4);
    cout <<  sc->p1 << endl;
    COLOR_PRINT("Player2 ", 4, 21, 6);
    cout <<  sc->p2 << endl;
    COLOR_PRINT("Draw    ", 4, 21, 8);
    cout << sc->draw<<endl;
 
}

