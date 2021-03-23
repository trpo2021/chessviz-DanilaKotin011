#include <stdlib.h>
#include <stdio.h>
#include <libchessviz/print.h>
#include <libchessviz/checktab.h>
#include <libchessviz/checkstrok.h>
char move(char chessboard[11][11])
{
    char sstrok1, sstrok2, temp;
    int stab1, stab2, rstrok1, rstrok2, flag1, flag2, flag3;

    scanf("%c%d-%c%d", &sstrok1, &stab1, &sstrok2, &stab2);
    flag1 = 0;
    flag2 = 0;
    flag3 = 0;

    rstrok1 = checkstrok(sstrok1);
    if (rstrok1 == -1)
        flag1 = 1;

    rstrok2 = checkstrok(sstrok2);
    if (rstrok2 == -1)
        flag1 = 1;

    flag2
        = checktab(stab1);

    flag3 = checktab(stab2);

    if (flag1 == 0 && flag2 == 0 && flag3 == 0) {
        temp = chessboard[stab1 - 1][rstrok1];
        chessboard[stab1 - 1][rstrok1] = ' ';
        chessboard[stab2 - 1][rstrok2] = temp;
        print(chessboard);
    }

    return chessboard[9][10];
}
