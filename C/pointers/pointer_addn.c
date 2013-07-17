// addn. and subtraction of a number from python
#include <stdio.h>

void main()
{
	int x=20, *p;
	p=&x;
	printf("%p, %d\n", p, *p);
	p=p+1;
	printf("%p, %d\n", p, *p);
	p=p+1;						//adding '1' moves the ptr by 4 bytes(system dependent)
	printf("%p, %d\n", p, *p);	//this means that address(&x) refers to a byte sized address
	p=p-1;
	printf("%p, %d\n", p, *p);

	printf("%d bytes\n" , sizeof(x));	// 4 bytes
	printf("%d bytes\n" , sizeof(1));	// 4 bytes
	printf("%d bytes\n" , sizeof(p));	// 4 bytes
	printf("%d bytes\n" , sizeof(*p));	// 4 bytes
}