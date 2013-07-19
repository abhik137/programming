#include <stdio.h>

main()
{
	struct book{				// 'book' is known as 'tag name', used to distinguish the structure when type-name is not defined
		char name[20];
		float price;
		int pages;
	};
	struct book b1 = {
						"Computer Programming",
						230.00,
						350
	};
	printf("%s %f %d\n", b1.name, b1.price, b1.pages);
}