#include "functions.h"

int main()
{
	int ch;
	struct node* node = NULL;
	
	FILE *fp;
	fp = fopen("input_tree.txt","r");
	if (fp == NULL) {
		printf("Error! Can't open input_tree.txt\n");
		return 1;
	}
	else {
		int i, t, data;
		fscanf(fp, "%d", &t);
		for (i = 0; i < t; i++)
		{
			fscanf(fp, "%d", &data);
			node = insert(node, data);
		}
		fclose(fp);
	}

	while(1) {
		printf("Menu\n"
				"1. Insert\n"
				"2. Print\n"
				"3. Search\n"
				"4. Delete\n"
				"5. Size\n"
				"6. MaxDepth\n"
				"7. Min. Value\n"
				"15. Exit\n"
				"Enter Choice: ");
		scanf("%d", &ch);
		
		switch(ch) {
			case 1:
				printf("Enter data: ");
				int data;
				scanf("%d", &data);
				node = insert(node, data);
				break;
			case 2:
				printTree(node);
				printf("here\n");
				break;
			case 3:
				printf("Enter key: ");
				int key;
				scanf("%d", &key);
				if(lookup(node, key))
					printf("=>Yes\n");
				else
					printf("=>No\n");
				break;
			case 5:
				; // Empty statement to avoid label err, https://stackoverflow.com/questions/18496282/why-do-i-get-a-label-can-only-be-part-of-a-statement-and-a-declaration-is-not-a
				int siz;
				siz = size(node);
				printf("=>Size: %d\n", siz);
				break;
			case 6:
				;
				int maxdepth;
				maxdepth = maxDepth(node);
				printf("=>Maxdepth: %d\n", maxdepth);
				break;
			case 7:
				;
				int min;
				min = minValue(node);
				printf("=>Min. Value: %d\n", min);
				break;
			case 15:
				exit(0);
			default:
				printf("Invalid Option :-(\n");
				break;
		}
	}
	return 0;
}
