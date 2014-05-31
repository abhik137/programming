/*
	Function pointer with parameters
*/
#include <stdio.h>

// function prototype
void subtractAndPrint(int, int);
void (*sapPtr)(int, int);

// function implementation
void subtractAndPrint(int x, int y) {
	int z = x - y;
	printf("The answer is: %d\n", z);
}

int main() {
	//void (*sapPtr)(int, int) = subtractAndPrint;
	sapPtr = subtractAndPrint;	/* using '*sapPtr' gives error -- why?? - '*' causes it to dereference the
									 pointer(i.e. access it's value from memory) -_-*/
	(*sapPtr)(10, 12);
	sapPtr(10, 12);
}