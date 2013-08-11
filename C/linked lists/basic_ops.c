/*
	Basic Linked List Operations:
	1.Insert
	2.Delete
	3.Search
	4.Display
	5.Traverse
*/

#include <stdio.h>
#include <stdlib.h>

struct node
{
	int d;
	struct node *next;
};

typedef struct node *NODE;	// ptr(type) to struct 

NODE head = NULL;	// Global scope(verify!)

int main()
{
	int ch;
	void insert();
	void display();
	void search();
	void delete();

	while(1)
	{
		printf("Menu\n1. Insert\n2. Display\n3. Search\n4. Delete\n5. Exit\nEnter Choice: ");
		scanf("%d", &ch);

		switch(ch)
		{
			case 1:
				insert();
				break;
			case 2:
				display();
				break;
			case 3:
				search();
				break;
			case 4:
				delete();
				break;
			case 5:
				exit(0);
			default:
				printf("Invalid Option :-(\n");
				break;
		}
	}
}

void insert()
{
	int v;
	NODE new,temp;
	printf("Enter Value: \n");
	scanf("%d", &v);
// Create new node
	new = (NODE)malloc(sizeof(struct node));
//Store the value for the node
	new -> d = v;
	new -> next = NULL;

	if (head == NULL)
	{
		//list is empty
		head = new;
	}
	else
	{
		temp = head;

		while (temp->next != NULL)
		{
			temp=temp->next;
		}

		temp -> next = new;
	}
}

void display()
{
	NODE temp;

	if (head == NULL)
	{
		printf("List is empty\n");
		return;
	}

	printf("values in list: \n");

	temp = head;

	// Iterate through the list printing the value at each node
	while(temp != NULL)
	{
		printf("%d\n", temp->d);
		temp = temp->next;
	}

	printf("\n");
}

void search()
{
	int e;
	NODE temp;
	printf("Enter Element:\n");
	scanf("%d", &e);

	if(head==NULL)
	{
		printf("List is empty!\n");
		return;
	}

	temp = head;

	// Iterate through the list and search for the element(Linear Search)
	while(temp != NULL)
	{
		if(temp->d == e)
		{
			printf("Element Found!\n");
			break;
		}

		temp = temp->next;
	}

	if (temp == NULL)
	{
		printf("Element not found!\n");
	}
}

void delete()
{
	int e;
	NODE temp, t;
	printf("Enter Element: \n");
	scanf("%d", &e);

	temp = head;

	// the item to be deleted is the first in the list

	if (temp->d == e)
	{
		head = temp -> next;
		free(temp);
		printf("Deleted!\n");
		return;
	}

	while (temp != NULL)
	{
		if (temp->d == e)
		{
			break;
		}

	t = temp;

	temp = temp->next;
	}

	//Item not present in the list
	if (temp == NULL)
		printf("Element Not Found!\n");
	else{
		t->next = temp->next;
		free(temp);
		printf("Deleted!\n");
	}
}