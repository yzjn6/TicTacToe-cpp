#include "TicTacToe.h"


void score::wins(int a, int b, int c){
    score::winer[0] = a;
    score::winer[1] = b;
    score::winer[2] = c;
}
void score::ip1() { p1++; }
void score::ip2() { p2++; }
void score::idraw() { draw++; }
int* score::getwins(){
    return winer;
}
int* score::grades() {
    int a[3] = {p1,p2,draw};
    return a;
}