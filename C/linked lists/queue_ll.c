// Implement a queue using a linked list

#include <stdio.h>
#include <stdlib.h>

void initqueue();
void enque();
int deque();
void delqueue();

struct node
{
	int data;
	struct node* next;
};

typedef struct node* NODE;
NODE front, rear;
/*
struct queue
{
	struct node *front;
	struct node *rear;
};
*/