#include <stdio.h>

struct book
{
	char name[20];
	float price;
	int pages;
};

void main()
{
	struct book b1[10], *b2;
	b2 = &b1[0];
	printf(" %p %p \n", &b1, b2);
}