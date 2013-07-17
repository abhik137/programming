//subtraction of one pointer from another
#include <stdio.h>

int main()
{
	int num[]={10,20,30,40,50,60,70};
	int *p1, *p2;
	p1 = &num[0];
	p2 = &num[6];
	printf("%d, %d\n", p2-p1, *p2-*p1);
	printf("%p, %p\n", p2, p1);

	return 0;
}