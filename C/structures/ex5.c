#include <stdio.h>
#include <string.h>

struct{							//Tag name is not required here as we have defined b1, b2 as type-name
			char name[30];
			float price;
			int pages;
}b1,b2;

main()
{
	strcpy(b1.name, "surely you're joking");
	b1.price = 430.00;
	b1.pages = 352;
	printf("%s - %f - %d\n", b1.name, b1.price, b1.pages);
	strcpy(b2.name,b1.name);
	b2.price = b1.price;
	b2.pages = b1.pages;
	printf("%s - %f - %d\n", b2.name, b2.price, b2.pages);
}