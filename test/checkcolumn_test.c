#include <libchessviz/checkcolumn.h>

#include <ctest.h>

CTEST(scan_suite, check_clmn)
{
    char STARTA;
    STARTA = 'a';
    const int REALA = checkcolumn(STARTA);
    const int EXPECTA = 1;
    ASSERT_EQUAL(EXPECTA, REALA);

    char STARTB;
    STARTB = 'b';
    const int REALB = checkcolumn(STARTB);
    const int EXPECTB = 2;
    ASSERT_EQUAL(EXPECTB, REALB);

    char STARTC;
    STARTC = 'c';
    const int REALC = checkcolumn(STARTC);
    const int EXPECTC = 3;
    ASSERT_EQUAL(EXPECTC, REALC);

    char STARTD;
    STARTD = 'd';
    const int REALD = checkcolumn(STARTD);
    const int EXPECTD = 4;
    ASSERT_EQUAL(EXPECTD, REALD);

    char STARTE;
    STARTE = 'e';
    const int REALE = checkcolumn(STARTE);
    const int EXPECTE = 5;
    ASSERT_EQUAL(EXPECTE, REALE);

    char STARTF;
    STARTF = 'f';
    const int REALF = checkcolumn(STARTF);
    const int EXPECTF = 6;
    ASSERT_EQUAL(EXPECTF, REALF);

    char STARTG;
    STARTG = 'g';
    const int REALG = checkcolumn(STARTG);
    const int EXPECTG = 7;
    ASSERT_EQUAL(EXPECTG, REALG);

    char STARTH;
    STARTH = 'h';
    const int REALH = checkcolumn(STARTH);
    const int EXPECTH = 8;
    ASSERT_EQUAL(EXPECTH, REALH);

    char STARTNOT;
    STARTNOT = 'j';
    const int REALNOT = checkcolumn(STARTNOT);
    const int EXPECTNOT = -1;
    ASSERT_EQUAL(EXPECTNOT, REALNOT);
}
