#include <libchessviz/checkcolumn.h>
#include <libchessviz/checkcommand.h>
#include <libchessviz/checkstring.h>
#include <libchessviz/movechess.h>
#include <stdio.h>
#include <stdlib.h>
int checkcommand(
        char chessboard[][10],
        char startcolumn,
        char startstring,
        char endcolumn,
        char endstring)
{
    int realstartcolumn, realendcolumn, realstartstring, realendstring;

    realstartcolumn = checkcolumn(startcolumn);
    realendcolumn = checkcolumn(endcolumn);

    realstartstring = checkstring(startstring);
    realendstring = checkstring(endstring);

    if (realstartcolumn != -1 && realendcolumn != -1 && realstartstring != -1
        && realendstring != -1) {
        movechess(
                chessboard,
                realstartcolumn,
                realstartstring,
                realendcolumn,
                realendstring);
        return 1;
    } else
        return 0;
}
