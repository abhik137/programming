#include <stdio.h>

main()
{
	struct book{
		char name[20];
		float price;
		int pages;
	}b1 = {"Computer Programming",230.00,350};			// Direct declaration and initialisation of variable
	printf("%s %f %d\n", b1.name, b1.price, b1.pages);
}