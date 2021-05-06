#include <libchessviz/checkcolumn.h>
#include <stdio.h>
#include <stdlib.h>
int checkcolumn(char column)
{
    if (column == 'a')
        return 1;
    if (column == 'b')
        return 2;
    if (column == 'c')
        return 3;
    if (column == 'd')
        return 4;
    if (column == 'e')
        return 5;
    if (column == 'f')
        return 6;
    if (column == 'g')
        return 7;
    if (column == 'h')
        return 8;
    return -1;
}
