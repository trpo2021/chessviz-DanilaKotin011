#include <libchessviz/printboard.h>
#include <libchessviz/scancommands.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char chessboard[10][10]
            = {"1rnbqkbnr",
               "2pppppppp",
               "3        ",
               "4        ",
               "5        ",
               "6        ",
               "7PPPPPPPP",
               "8RNBQKBNR"};
    int truecommand;
    printboard(chessboard);
    while (1) {
        truecommand = scancommands(chessboard);
        if (truecommand == 1)
            printboard(chessboard);
        else
            printf("\n wrong \n\n");
    }
    return 0;
}
