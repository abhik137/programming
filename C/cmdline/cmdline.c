#include <stdio.h>

int main(int argc, char *argv[])    // note that this also includes the entire cmd i.e. the filename of
{                                   // the executable used to call the program
    int ctr;                        // to exclude it, start counting 'argv' from 1
    for (ctr=0; ctr<argc; ctr++)
    {
        puts(argv[ctr]);
    }
    return 0;
}