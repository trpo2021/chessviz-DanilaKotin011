#include <stdlib.h>
#include <math.h>
#include <stdio.h>


char board[9][9]
={
    "rnbqkbnr",
    "pppppppp",
    "        ",
    "        ",
    "        ",
    "        ",
    "PPPPPPPP",
    "RNBQKBNR"
};

void printboard()
{
    int i,z;
    for(i=0;i<8;i++){
        printf("%d| ",i+1);
        for(z=0;z<8;z++)
        {
            printf("%c ",board[i][z]);
        }
        printf("\n");
    }
    printf("  -----------------  \n   a b c d e f g h");
}

int main()
{
    printboard();
    return 0;
}
