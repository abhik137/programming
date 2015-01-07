#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int t, n, i;
	int p, q;
	scanf("%d%d", &t, &n);
	printf("%d %d\n", t, n);
	for (i=0; i<n; i++) {
		scanf("%d%d", &p, &q);
		printf("%d %d\n", p, q);
	}
	return 0;
}