// Implement a stack using a linked list

#include <stdio.h>
#include <stdlib.h>

void push(int value);
void pop();
void display();

struct Node
{
	int data;
	struct Node *next;
};

typedef struct Node	*node;

node topp = NULL;

int main()
{
	int ch, val;
	void push();
	void pop();
	void display();

	while(1)
	{
		printf("Menu\n1. Push\n2. Pop\n3. Display\n4. Exit\nEnter Choice: ");
		scanf("%d", &ch);

		switch(ch)
		{
			case 1:
				printf("Enter the value to push:\n");
				scanf("%d", &val);
				push(val);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("Invalid Option :-(\n");
				break;
		}
	}

	return 0;
}

void push(int v)
{
	node temp;
	temp = malloc(sizeof(node));
	temp->data = v;
	if (topp == NULL)
	{
		topp = temp;
		topp->next = NULL;
	}
	else
	{
		temp->next = topp;
		topp = temp;
	}
}

void pop()
{
	node temp, var;
	int pv;
	var = topp;
	if (topp == NULL)
	{
		printf("Empty Stack\n");
	}
	else
	{
		pv = topp->data;
		printf("Popped Value is: %d\n", pv);
		topp = topp->next;	
	}
	printf("\n");
}

void display()
{
	node temp;

	if (topp == NULL)
	{
		printf("Stack is empty!\n");
		return;
	}

	printf("values in list: \n");

	temp = topp;

	// Iterate through the list printing the value at each node
	while(temp != NULL)
	{
		printf("%d\n", temp->data);
		temp = temp->next;
	}

	printf("\n");
}