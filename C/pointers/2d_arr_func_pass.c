/**
 * https://stackoverflow.com/questions/6321670/passing-a-2d-array-in-a-function-in-c-program
 * https://stackoverflow.com/questions/16943909/manipulate-multidimensional-array-in-a-function
 * https://stackoverflow.com/questions/4051/passing-multidimensional-arrays-as-function-arguments-in-c
 * [*]http://www.geeksforgeeks.org/pass-2d-array-parameter-c/
 * http://www.eskimo.com/~scs/cclass/int/sx9a.html
 * https://stackoverflow.com/questions/19392526/passing-a-2d-array-into-function-in-c
 */

#include <stdio.h>
void print(int *arr, int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++) {
    	for (j = 0; j < n; j++)
    		printf("%d ", *((arr+i*n) + j));
    	printf("\n");
    }
}
 
int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int m = 3, n = 3;
    print((int *)arr, m, n);
    return 0;
}