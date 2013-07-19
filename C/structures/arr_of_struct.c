#include <stdio.h>

struct book{
			char name[20];
			float price;
			int pages;
};

main()
{
	struct book b1[2];
	printf("%d\n", sizeof(b1));
}