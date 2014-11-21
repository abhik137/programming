/*
 *includes some common confusion points in notations and understanding 
 */
#include <stdio.h>

void func(int *p);
void funcar(int ar[]);

int main(void) {
	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	int *b;
	b = a;
	// printf("%d", *b[1]); // [X]Wrong
	printf("%d\n", b[1]);	// array name/label itself is the pointer to array
	
	int c = 10;
	// int *d = c;		// [X]Wrong
	int *d;
	d = &c;
	// int *d = &c;		// alternate way to assign, illogical & confusing
	printf("%p %d\n", d, *d);
	
	func(a);
	funcar(a);	// passing the entire array
	return 0;
}

void func(int *p)	// passing an array as a pointer
{
	printf("%d\n", p[0]);
	printf("%d\n", p[7]);
}

void funcar(int ar[])	// passing an entire array, not memory efficient
{
	// ^even if I give ar[4] as func arg it still displays ar[5] correctly
	printf("%d\n", ar[3]);
	printf("%d\n", ar[5]);
}