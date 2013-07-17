// if time permits, determine the purpose for writing this code :P
#include <stdio.h>
void main()
{
	int x[3][2]={{1,2},{3,4},{5,6}};
	int i=0,j=0;
	int *p[3];
	int **p1[3];
	for (i=0; i<3; i++)
	{
		p[i] = &x[i][0];
	}
	for (i=0; i<3; i++)
	{
		p1[i] = &p[i];
	}
	for(i=0;i<3;i++)
	{
		printf("%p %p %d \n", p[i], *p1[i], *(*p1[i]));
	}
}