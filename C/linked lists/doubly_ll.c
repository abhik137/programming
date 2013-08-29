#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node *next;
	struct Node *prev;
}node;

void insert(node *pointer, int data);
int find(node *pointer, int key);
void delete(node *pointer, int data);
void print(node *pointer);

int main()
{
        /* start always points to the first node of the linked list.
           temp is used to point to the last node of the linked list.*/
	node *start, *temp;
	start = (node *)malloc(sizeof(node));
	temp = start;
	temp -> next = NULL;
	temp -> prev = NULL;
        /* Here in this code, we take the first node as a dummy node.
           The first node does not contain data, but it used because to avoid handling special cases
           in insert and delete functions.
         */
	printf("1. Insert\n");
	printf("2. Delete\n");
	printf("3. Print\n");
	printf("4. Find\n");
	
	while(1)
	{
		int query, data;
		scanf("%d", &query);
		switch(query)
		{
			case 1:
				scanf("%d", &data);
				insert(start, data);
				break;
			case 2:
				scanf("%d", &data);
				delete(start, data);
				break;
			case 3:
				printf("The List is:");
				print(start->next);
				printf("\n");
				break;
			case 4:
				scanf("%d", &data);
				int status = find(start, data);
				if (status)
				{
					printf("Element Found!\n");
					break;
				}
				else
				{
					printf("Element Not Found!\n");
					break;
				}
		}
	}

	return 0;
}

void insert(node *pointer, int data)
{
	while(pointer->next != NULL)
	{
		pointer = pointer->next;
	}
	pointer->next = (node *)malloc(sizeof(node));
	(pointer->next)->prev = pointer;
	pointer = pointer->next;
	pointer->data = data;
	pointer->next = NULL;
}

int find(node *pointer, int key)
{
	pointer = pointer->next;	//First node is dummy node
	while (pointer != NULL)
	{
		if (pointer->data == key)
		{
			return 1;			//key found
		}
		pointer = pointer->next;
	}
	return 0;					// key not found
}

void delete(node *pointer, int data)
{
	/* Go to the node for which the node next to it has to be deleted */
	while (pointer->next != NULL && (pointer->next)->data != data)
	{
		pointer = pointer->next;
	}
	if (pointer->next == NULL)
	{
		printf("Element %d is not present in the list!\n", data);
		return;
	}
    /* Now pointer points to a node and the node next to it has to be removed */
    node *temp;
    temp = pointer -> next;
    /*temp points to the node which has to be removed*/
    pointer->next = temp->next;
    temp->prev =  pointer;
    /*We removed the node which is next to the pointer (which is also temp) */
    free(temp);
    /* Beacuse we deleted the node, we no longer require the memory used for it . 
       free() will deallocate the memory.
    */
    return;
}

void print(node *pointer)
{
	if(pointer==NULL)
	{
		return;					// Empty
	}
	printf("%d\n", pointer->data);
	print(pointer->next);
}