#include <stdio.h>
#include <string.h>

struct book{
			char name[30];
			float price;
			int pages;
};

main()
{
	struct book b1;
	strcpy(b1.name, "surely you're joking");
	b1.price = 430.00;
	b1.pages = 352;
	printf("%s - %f - %d\n", b1.name, b1.price, b1.pages);
}