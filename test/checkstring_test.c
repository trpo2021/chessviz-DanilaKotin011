#include <libchessviz/checkstring.h>

#include <ctest.h>

CTEST(scan_suite, check_clmn)
{
    char START1;
    START1 = '1';
    const int REAL1 = checkstring(START1);
    const int EXPECT1 = 0;
    ASSERT_EQUAL(EXPECT1, REAL1);

    char START2;
    START2 = '2';
    const int REAL2 = checkstring(START2);
    const int EXPECT2 = 1;
    ASSERT_EQUAL(EXPECT2, REAL2);

    char START3;
    START3 = '3';
    const int REAL3 = checkstring(START3);
    const int EXPECT3 = 2;
    ASSERT_EQUAL(EXPECT3, REAL3);

    char START4;
    START4 = '4';
    const int REAL4 = checkstring(START4);
    const int EXPECT4 = 3;
    ASSERT_EQUAL(EXPECT4, REAL4);

    char START5;
    START5 = '5';
    const int REAL5 = checkstring(START5);
    const int EXPECT5 = 4;
    ASSERT_EQUAL(EXPECT5, REAL5);

    char START6;
    START6 = '6';
    const int REAL6 = checkstring(START6);
    const int EXPECT6 = 5;
    ASSERT_EQUAL(EXPECT6, REAL6);

    char START7;
    START7 = '7';
    const int REAL7 = checkstring(START7);
    const int EXPECT7 = 6;
    ASSERT_EQUAL(EXPECT7, REAL7);

    char START8;
    START8 = '8';
    const int REAL8 = checkstring(START8);
    const int EXPECT8 = 7;
    ASSERT_EQUAL(EXPECT8, REAL8);

    char STARTNOT;
    STARTNOT = '9';
    const int REALNOT = checkstring(STARTNOT);
    const int EXPECTNOT = -1;
    ASSERT_EQUAL(EXPECTNOT, REALNOT);
}
