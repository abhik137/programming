// This seems to be the most convenient way of defining structures in C.

#include <stdio.h>

typedef struct		// the tag name is unnecesssary here but can still be used
{
		char name[20];
		float price;
		int pages;
}book;					// 'book' now is a 'sort of' datatype
/*
1. 'sort of' coz' it isn't actually a new datatype, it's a new way of representing old ones
2. acc. to K&R "struct{...}x,y,z; ~ int x,y,z"
*/
main()
{
	book b1,b2,b3={"K&R", 120.0, 100};		// variable declaration
											// b1,b2 can be defined likewise
	printf("%s %f %d\n", b3.name, b3.price, b3.pages);
}

// observation: 'book' acts as datatype and b1,b2,b3 as variables