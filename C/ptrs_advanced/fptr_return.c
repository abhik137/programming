/*
	Function pointer with params and return value
*/
#include <stdio.h>

// function prototype
int subtract(int x, int y);
 
// function implementation
int subtract(int x, int y) {
  return x - y;
}

int main() {
  int (*subtractPtr)(int, int) = subtract;
 
  int y = (*subtractPtr)(10, 2);
  printf("Subtract gives: %d\n", y);
 
  int z = subtractPtr(10, 2);
  printf("Subtract gives: %d\n", z);
}