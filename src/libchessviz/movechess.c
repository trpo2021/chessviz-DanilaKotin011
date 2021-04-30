#include <libchessviz/movechess.h>
#include <stdio.h>
#include <stdlib.h>
void movechess(
        char chessboard[][10],
        int realstartcolumn,
        int realstartstring,
        int realendcolumn,
        int realendstring)
{
    int temp;
    temp = chessboard[realstartstring][realstartcolumn];
    chessboard[realstartstring][realstartcolumn] = ' ';
    chessboard[realendstring][realendcolumn] = temp;
}
