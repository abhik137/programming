//program to find the maximum no. in an array using pointers

#include <stdio.h>

void main()
{
	int *ptr, array[20], i, num, max=0, pos=0;
	ptr=array;
	printf("Enter the Limit\n");
	scanf("%d", &num);
	printf("Enter the elements\n");
	for(i=0; i<num; i++)
	{
		scanf("%d", ptr+i);
//		printf("%d", array[i]);
	}
	for(i=0; i<num; i++)
	{
		if (max < *(ptr+i))
		{
			max = *(ptr+i);
			pos = i;
		}
//		printf("\t%d\n", (*ptr+i));
	}
	printf("The Max. no. is %d and position is %d\n", max, pos+1);
}