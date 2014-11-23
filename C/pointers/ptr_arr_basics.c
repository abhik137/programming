/*
 *includes some common confusion points in notations and understanding 
 */

#include <stdio.h>

void func(int *p);
void funcar(int ar[]);

int main(void) {
	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	int *b;
	b = a;						/* Valid */
	// printf("%d", *b[1]); 	// [X]Wrong, error: invalid type argument of unary ‘*’ (have ‘int’)
	printf("%d\n", b[1]);		// array name/label itself acts as the pointer to array
	printf("->%d\n", *(b+2));	// another way of representing 
	/* However, This is not valid */
	int q[10];
	// q = a;			// [X]Wrong
	
	int c = 10;
	// int *d = c;		// [X]Wrong
	int *d;
	d = &c;
	// int *d = &c;		// alternate way to assign, illogical & confusing
	// int *b = &a[0];
	printf("%p %d\n", &c, *d);
	printf("%p %d\n", d, *d);
	
	char *str = "Ninechars";
	printf("%s\n", str);
	printf("%p\n", str);	// what is this doing? -> address of first char of str
	printf("%p\n", str+1);	// address of second char of str
	// printf("%s\n", str[1]);	// [segfault] warning: format ‘%s’ expects argument of type ‘char *’, but argument 2 has type ‘int’ [TODO]
	printf("%c\n", str[1]); // ^coz '%s' expects 'char *' and we are giving a char to it, str[1] == *(str + 1)
	printf("%p\n", &str);	// address to head of the string? NO, address of the pointer var str
	printf("%p\n", &str+1);	// [TODO], difference of 8bytes b/w this and previous address value? [WHY]? -> &str is the address of str, a pointer to char
	printf("\nsizeof(char*) == %zd\n", sizeof(char*));	// coz , on my system, the size of a pointer to char is 8 bytes
	printf("%d\n", *str);	// what integer is this? -> whatever can be made from 'N'=78
	printf("%c\n", *str);		// coz *str points to a character
	printf("%d\n", *(str+1));	// 'i'=105, but why is it taking single byte ints [TODO](see next line link)
	printf("%c\n", *(str+1));	// ^http://stackoverflow.com/questions/5045031/weird-result-when-use-d-specifier-to-print-a-unsigned-char-in-c
	printf("%ld\n", sizeof(1));	// 4 bytes, as expected
	// printf("%s\n", *str);	// [X]Wrong, [HOW][WHY][->line 40], format ‘%s’ expects argument of type ‘char *’, but argument 2 has type ‘int’[TODO]
	
	// int *f[5] = {213,214,215,216,217};	// [X]Wrong, this is array of pointers
										// so the array should contain ptrs not values
	char *str2[3] = {"A","B","C"};
	printf("%s\n", *str2);
	printf("%s\n", *(str2+1));
	// printf("%s\n", str2);	// [X]Wrong, expects argument of type ‘char *’, but argument 2 has type ‘char **’

	int * i, * l, * s;		// three pointers-to-int
 	int * x, y, z;			// x is a pointer, y and z are ints

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

/**
 * references:
 * http://www.eskimo.com/~scs/cclass/notes/sx10e.html
 * https://stackoverflow.com/questions/1641957/is-array-name-a-pointer-in-c
 * http://www.thegeekstuff.com/2012/01/advanced-c-pointers/
 * http://www.cs.fsu.edu/~myers/c++/notes/pointers1.html
 * http://www.cs.fsu.edu/~myers/c++/notes/pointers2.html
 * http://denniskubes.com/2012/08/16/the-5-minute-guide-to-c-pointers/
 *
 * problems solved: http://stackoverflow.com/questions/27086428/playing-with-pointers-dazed-and-confused-by-char-strings
 */

/**
 * Notes:
 * -An array name is not a pointer. It's an identifier for a variable of type array, which has an implicit conversion to pointer of element type.
 * '%s' expects 'const char*' argument
 */