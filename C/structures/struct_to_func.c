#include <stdio.h>

struct book
{
	char name[20];
	float price;
	int pages;
};

void struct_fun(struct book b2);

void main()
{
	struct book b1 = {"Computer Programming", 200.00, 350};
	struct_fun(b1);
}

void struct_fun(struct book x)
{
	puts(x,name);
	printf("%f \n%d", x.prices, x.pages);
}