#include <libchessviz/checkcommand.h>
#include <libchessviz/scancommands.h>
#include <stdio.h>
#include <stdlib.h>
int scancommands(char chessboard[][10])
{
    char startcolumn, endcolumn, startstring, endstring, scancommand[5];
    int rightcommand;

    scanf("%s", scancommand);
    startcolumn = scancommand[0];
    startstring = scancommand[1];
    endcolumn = scancommand[3];
    endstring = scancommand[4];

    rightcommand = checkcommand(
            chessboard, startcolumn, startstring, endcolumn, endstring);

    return rightcommand;
}
