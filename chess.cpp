#include <stdlib.h>
#include <math.h>
#include <stdio.h>

void printboard(char[9][9]);

int main()
{
    char chessboard[9][9]
        = {
            "rnbqkbnr",
            "pppppppp",
            "        ",
            "        ",
            "        ",
            "        ",
            "PPPPPPPP",
            "RNBQKBNR"
          };

    printboard(chessboard);
    return 0;
}

void printboard(char board[9][9])
{
    for (int i = 0; i < 8; i++) {
        printf("%d  ", i);
        for (int z = 0; z < 8; z++) {
            printf("%c", board[i][z]);
        }
        printf("\n");
    }
    printf(" \n  ---------   \n   abcdefgh");
}
