#include <stdio.h>

int main(int argc, char const *argv[])
{
	void *p1;
	int x=10;
	char c='d';
	float f=10.1;
	p1=&x;
	printf("%p\n", p1);		// '%p' is placeholder for pointers
	p1=&c;
	printf("%p\n", p1);
	p1=&f;
	printf("%p\n", p1);
	return 0;
}

/* A void pointer is used for working with raw memory or for passing a pointer to an unspecified type */