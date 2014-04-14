/*
	A simple function and a function pointer
*/
#include <stdio.h>

// function prototype
void sayHello();
void (*sayHelloPtr)();	// try to view this as 'signature'/form/type/identity rather than 'declaration'

/* 
	if we don’t have parentheses it is seen as void *sayHelloPtr which is 
	a void pointer instead of a pointer to a void function
	(for int: we need a pointer to a function that returns int, not a ptr that points to int type data)	
	We must have parentheses when creating a function pointer and when dereferencing it.
*/

// function implementation
void sayHello() {
	printf("Hello World!\n");
}

int main()
{
//	void (*sayHelloPtr)() = sayHello;	// another way of assigning
	sayHelloPtr = &sayHello;	/* could(should) do away with the '&',function name (label) is the address 
	 							of the function and it can be assigned to a function pointer. */
//	(*sayHelloPtr)();	// calling method
	sayHelloPtr();		/* often function pointers are just treated and called as regular functions after being assigned. */
}