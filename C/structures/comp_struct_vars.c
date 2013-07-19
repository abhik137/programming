/*



#include <stdio.h>

struct book
{
	char name[20];
	float price;
	int pages;
};

main()
{
	struct book b1 = {"Computer Programming", 120.0, 100};
	struct book b2;
	b2=b1;
	if(b2 == b1)
	{
		printf("This program will result in compilation error!");
	}
}



*/
// Above program actually results in an error
/*
.\comp_struct_vars.c: In function 'main':
.\comp_struct_vars.c:15: error: invalid operands to binary == (have 'struct book' and 'struct book')
*/

// Possible reason: Strings cannot be compared directly in C.




/* Let's try omitting the string */

#include <stdio.h>

struct book
{
	float price;
	int pages;
};

main()
{
	struct book b1 = {120.0, 100};
	struct book b2;
	b2=b1;
	printf("%f - %d\n", b2.price, b2.pages);		// this works properly
	if(b2 == b1)									// Still the same error
	{
		printf("This program will result in compilation error!");
	}
}

/*
Conclusion:
1. Structures cannot be compared as a whole( b1==b2 is an invalid operation )
2. For copying structure variables should belong to the same struct( i.e. b2=b1 only when both belong to 'struct book')
*/