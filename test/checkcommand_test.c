#include <libchessviz/checkcommand.h>

#include <ctest.h>

CTEST(scan_suite, check_checkmove)
{
    char chessboard[10][10];
    char scanclmn[8] = "abcdefgh";
    char scanstr[8] = "12345678";
    int realtruecommand;
    int exptruecommand;
    int i, z, j, l;
    exptruecommand = 1;
    for (i = 0; i < 8; i++) {
        for (z = 0; z < 8; z++) {
            for (j = 0; j < 8; j++) {
                for (l = 0; l < 8; l++) {
                    realtruecommand = checkcommand(
                            chessboard,
                            scanclmn[i],
                            scanstr[z],
                            scanclmn[j],
                            scanstr[l]);
                    ASSERT_EQUAL(exptruecommand, realtruecommand);
                }
            }
        }
    }
    exptruecommand = 0;
    realtruecommand = checkcommand(chessboard, 'j', 'j', 'e', '4');
    ASSERT_EQUAL(exptruecommand, realtruecommand);

    exptruecommand = 0;
    realtruecommand = checkcommand(chessboard, 'e', '9', 'e', '4');
    ASSERT_EQUAL(exptruecommand, realtruecommand);

    exptruecommand = 0;
    realtruecommand = checkcommand(chessboard, 'e', '2', 'j', '4');
    ASSERT_EQUAL(exptruecommand, realtruecommand);

    exptruecommand = 0;
    realtruecommand = checkcommand(chessboard, 'e', '2', 'e', '9');
    ASSERT_EQUAL(exptruecommand, realtruecommand);
}
