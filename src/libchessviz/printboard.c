#include <libchessviz/printboard.h>
#include <stdio.h>
#include <stdlib.h>

void printboard(char chessboard[][10])
{
    int i, z;
    for (i = 0; i < 8; i++) {
        for (z = 0; z < 9; z++) {
            if (z == 0)
                printf("%c|", chessboard[i][z]);
            else
                printf("%c", chessboard[i][z]);
        }
        printf("\n");
    }
    printf("  __________ \n abcdefgh");
    printf("\n");
}
