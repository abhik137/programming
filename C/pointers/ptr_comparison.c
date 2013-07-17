
#include <stdio.h>

int main()
{
	int num[]={10,20,30,40,50,60,70};
	int *p1, *p2;
	p1 = &num[0];
	p2 = num;
	if (p1 == p2)
	{
		printf("Same Location %p, %p\n", p2, p1);
	}
	else
	{
		printf("Different Location %p, %p\n", p2, p1);
	}
}