#include "proto.h"


int winner (Table *xo, int x, int y )
{
    char role = 'O';
    if (xo->count%2)
        role = 'X';

    if (x==0 && y==0) {
        if      (xo->arr[0][0]==role && xo->arr[0][1]==role && xo->arr[0][2]==role) return 1;
        else if (xo->arr[0][0]==role && xo->arr[1][0]==role && xo->arr[2][0]==role) return 1;
        else if (xo->arr[0][0]==role && xo->arr[1][1]==role && xo->arr[2][2]==role) return 1;

    } else if   (x==0 && y==1) {
        if      (xo->arr[0][0]==role && xo->arr[0][1]==role && xo->arr[0][2]==role) return 1;
        else if (xo->arr[0][1]==role && xo->arr[1][1]==role && xo->arr[2][1]==role) return 1;

    } else if (x==0 && y==2) {
        if      (xo->arr[0][0]==role && xo->arr[0][1]==role && xo->arr[0][2]==role) return 1;
        else if (xo->arr[0][2]==role && xo->arr[1][1]==role && xo->arr[2][0]==role) return 1;
        else if (xo->arr[0][2]==role && xo->arr[1][2]==role && xo->arr[2][1]==role) return 1;

    } else if (x==1 && y==0) {
        if      (xo->arr[0][0]==role && xo->arr[1][0]==role && xo->arr[2][0]==role) return 1;
        else if (xo->arr[1][0]==role && xo->arr[1][1]==role && xo->arr[1][2]==role) return 1;

    } else if (x==1 && y==1) {
        if      (xo->arr[1][0]==role && xo->arr[1][1]==role && xo->arr[1][2]==role) return 1;
        else if (xo->arr[0][1]==role && xo->arr[1][1]==role && xo->arr[2][1]==role) return 1;
        else if (xo->arr[0][0]==role && xo->arr[1][1]==role && xo->arr[2][2]==role) return 1;
        else if (xo->arr[2][0]==role && xo->arr[1][1]==role && xo->arr[0][2]==role) return 1;

    } else if (x==1 && y==2) {
        if      (xo->arr[0][2]==role && xo->arr[1][2]==role && xo->arr[2][2]==role) return 1;
        else if (xo->arr[1][0]==role && xo->arr[1][1]==role && xo->arr[1][2]==role) return 1;

    } else if (x==2 && y==0) {
        if      (xo->arr[2][0]==role && xo->arr[2][1]==role && xo->arr[2][2]==role) return 1;
        else if (xo->arr[0][0]==role && xo->arr[1][0]==role && xo->arr[2][0]==role) return 1;
        else if (xo->arr[2][0]==role && xo->arr[1][1]==role && xo->arr[0][2]==role) return 1;

    } else if (x==2 && y==1) {
        if      (xo->arr[0][1]==role && xo->arr[1][1]==role && xo->arr[2][1]==role) return 1;
        else if (xo->arr[2][0]==role && xo->arr[2][1]==role && xo->arr[2][2]==role) return 1;

    } else if (x==2 && y==2) {
        if      (xo->arr[0][2]==role && xo->arr[1][2]==role && xo->arr[2][2]==role) return 1;
        else if (xo->arr[2][0]==role && xo->arr[2][1]==role && xo->arr[2][2]==role) return 1;
        else if (xo->arr[0][0]==role && xo->arr[1][1]==role && xo->arr[2][2]==role) return 1;
    }
   return 0;
}
