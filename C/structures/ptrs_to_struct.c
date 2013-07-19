#include <stdio.h>
#include <string.h>

struct book
{
	char name[20];
	float price;
	int pages;
};

void main()
{
	struct book b1, *b2;
	b2 = &b1;
	strcpy(b2->name, "Computer Programming");			//use '->' insted of '.' while referring struct elements by pointers
	b2->price = 123.5;
	b2->pages = 100;
	printf("%s - %f - %d\n", b1.name, b1.price, b1.pages);
}