#include <stdlib.h>
#include <stdio.h>
#include <libchessviz/move.h>
#include <libchessviz/print.h>
#include <libchessviz/checktab.h>
#include <libchessviz/checkstrok.h>

char move(char chessboard[11][11])
{
    char start_strok_1, start_strok_2, temp;
    int tab_1, tab_2, real_strok_1, real_strok_2, check_strok, check_tab_1, check_tab_2;

    scanf("%c%d-%c%d", &start_strok_1, &tab_1, &start_strok_2, &tab_2);
    check_strok = 0;
    check_tab_1 = 0;
    check_tab_2 = 0;

    real_strok_1 = checkstrok(start_strok_1);
    if (real_strok_1 == -1)
        check_strok = 1;

    real_strok_2 = checkstrok(start_strok_2);
    if (real_strok_2 == -1)
        check_strok = 1;

    check_tab_1
        = checktab(tab_1);

    check_tab_2 = checktab(tab_2);

    if (check_strok == 0 && check_tab_1 == 0 && check_tab_2 == 0) {
        temp = chessboard[tab_1 - 1][real_strok_1];
        chessboard[tab_1 - 1][real_strok_1] = ' ';
        chessboard[tab_2 - 1][real_strok_2] = temp;
        print(chessboard);
    }

    return chessboard[9][10];
}
