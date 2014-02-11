/* Tested on an 64-bit Linux system */

#include <stdio.h>
#include <math.h>

int main()
{
    int a = sizeof(int);            // 4
    int b = sizeof(short int);      // 2
    int c = sizeof(long int);       // 8
    int d = sizeof(long long int);  // 8
    int e = sizeof(float);          // 4
    int f = sizeof(double);         // 2
    int g = sizeof(char);           // 1

    printf("int \t\t%d bytes\n", a);
    printf("short int \t%d bytes\n", b);
    printf("long int\t%d bytes\n", c);
    printf("long long int\t%d bytes\n", d);
    printf("float\t\t%d bytes\n", e);
    printf("double\t\t%d bytes\n", f);
    printf("char\t\t%d bytes\n", g);
/*
    while((ch = getchar()) != '\n')
    {
        //take input and store somewhere
    }
*/
    return 0;
}
