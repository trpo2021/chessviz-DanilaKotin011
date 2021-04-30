#include <libchessviz/checkstring.h>
#include <stdio.h>
#include <stdlib.h>
int checkstring(char string)
{
    if (string == '1')
        return 0;
    if (string == '2')
        return 1;
    if (string == '3')
        return 2;
    if (string == '4')
        return 3;
    if (string == '5')
        return 4;
    if (string == '6')
        return 5;
    if (string == '7')
        return 6;
    if (string == '8')
        return 7;
    return -1;
}
