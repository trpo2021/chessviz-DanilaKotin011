#include <libchessviz/checkstring.h>
#include <stdio.h>
#include <stdlib.h>
int checkstring(char string[])
{
    int i;
    for (i = 0; i <= 7; i++) {
        if (atoi(string) == (i + 1))
            return i;
    }
    return -1;
}
