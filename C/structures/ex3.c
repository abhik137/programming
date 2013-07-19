#include <stdio.h>

main()
{
	struct book{
		char name[20];
		float price;
		int pages;
	}b1 = {"Computer Programming",230.00,350}, b2 = {"Data Structures", 330.00, 370};			// Direct declaration and initialisation of multiple variables
	printf("%s %f %d\n", b1.name, b1.price, b1.pages);
	printf("%s %f %d\n", b2.name, b2.price, b2.pages);
}