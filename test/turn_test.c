
#include <libchessviz/movechess.h>

#include <ctest.h>

CTEST(scan_suite, check_turn)
{
    int i, j;
    char realboardp[10][10]
            = {"1rnbqkbnr",
               "2pppppppp",
               "3        ",
               "4        ",
               "5        ",
               "6        ",
               "7PPPPPPPP",
               "8RNBQKBNR"};
    char expboardp[10][10]
            = {"1rnbqkbnr",
               "2pppp ppp",
               "3        ",
               "4    p   ",
               "5        ",
               "6        ",
               "7PPPPPPPP",
               "8RNBQKBNR"};
    movechess(realboardp, 5, 1, 5, 3);

    for (i = 0; i < 9; i++)
        for (j = 0; j < 9; j++)
            ASSERT_EQUAL(expboardp[i][j], realboardp[i][j]);

    char realboardr[10][10]
            = {"1rnbqkbnr",
               "2pppppppp",
               "3        ",
               "4        ",
               "5        ",
               "6        ",
               "7PPPPPPPP",
               "8RNBQKBNR"};
    char expboardr[10][10]
            = {"1 nbqkbnr",
               "2pppppppp",
               "3        ",
               "4        ",
               "5r       ",
               "6        ",
               "7PPPPPPPP",
               "8RNBQKBNR"};
    movechess(realboardr, 1, 0, 1, 4);

    for (i = 0; i < 9; i++)
        for (j = 0; j < 9; j++)
            ASSERT_EQUAL(expboardr[i][j], realboardr[i][j]);

    char realboardn[10][10]
            = {"1rnbqkbnr",
               "2pppppppp",
               "3        ",
               "4        ",
               "5        ",
               "6        ",
               "7PPPPPPPP",
               "8RNBQKBNR"};
    char expboardn[10][10]
            = {"1r bqkbnr",
               "2pppppppp",
               "3n       ",
               "4        ",
               "5        ",
               "6        ",
               "7PPPPPPPP",
               "8RNBQKBNR"};
    movechess(realboardn, 2, 0, 1, 2);

    for (i = 0; i < 9; i++)
        for (j = 0; j < 9; j++)
            ASSERT_EQUAL(expboardn[i][j], realboardn[i][j]);

    char realboardb[10][10]
            = {"1rnbqkbnr",
               "2pppppppp",
               "3        ",
               "4        ",
               "5        ",
               "6        ",
               "7PPPPPPPP",
               "8RNBQKBNR"};
    char expboardb[10][10]
            = {"1rn qkbnr",
               "2pppppppp",
               "3b       ",
               "4        ",
               "5        ",
               "6        ",
               "7PPPPPPPP",
               "8RNBQKBNR"};
    movechess(realboardb, 3, 0, 1, 2);

    for (i = 0; i < 9; i++)
        for (j = 0; j < 9; j++)
            ASSERT_EQUAL(expboardb[i][j], realboardb[i][j]);

    char realboardq[10][10]
            = {"1rnbqkbnr",
               "2pppppppp",
               "3        ",
               "4        ",
               "5        ",
               "6        ",
               "7PPPPPPPP",
               "8RNBQKBNR"};
    char expboardq[10][10]
            = {"1rnb kbnr",
               "2pppppppp",
               "3        ",
               "4        ",
               "5        ",
               "6   q    ",
               "7PPPPPPPP",
               "8RNBQKBNR"};
    movechess(realboardq, 4, 0, 4, 5);

    for (i = 0; i < 9; i++)
        for (j = 0; j < 9; j++)
            ASSERT_EQUAL(expboardq[i][j], realboardq[i][j]);

    char realboardk[10][10]
            = {"1rnbqkbnr",
               "2pppppppp",
               "3        ",
               "4        ",
               "5        ",
               "6        ",
               "7PPPPPPPP",
               "8RNBQKBNR"};
    char expboardk[10][10]
            = {"1rnbq bnr",
               "2pppppkpp",
               "3        ",
               "4        ",
               "5        ",
               "6        ",
               "7PPPPPPPP",
               "8RNBQKBNR"};
    movechess(realboardk, 5, 0, 6, 1);

    for (i = 0; i < 9; i++)
        for (j = 0; j < 9; j++)
            ASSERT_EQUAL(expboardk[i][j], realboardk[i][j]);
}
