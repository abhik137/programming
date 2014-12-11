#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct queue {
	struct node *front;
	struct node *rear;
};

struct queue *createQueue();
struct node * createNode(int k);
int isEmpty(struct queue *Q);

void enqueue(struct queue *Q, int k);
struct node *dequeue();

int main(void) {
	struct queue *Q = createQueue();
	isEmpty(Q);
	// isFull(Q);
	enqueue(Q, 10);
	enqueue(Q, 20);
	dequeue(Q);
	dequeue(Q);
	enqueue(Q, 30);
	enqueue(Q, 40);
	enqueue(Q, 50);
	struct node *n = dequeue(Q);
	if (n != NULL)
	  printf("Dequeued item is %d\n", n->data);
	return 0;
}

// The function to add a key k to Q
void enqueue(struct queue *Q, int k)
{
	// struct node *temp = createNode();
	struct node *temp = createNode(k);
	// If queue is empty, then new node is front and rear both
	if (Q->rear == NULL)	// re-write using function
	{
	   Q->front = Q->rear = temp;
	   return;
	}
	
	Q->rear->next = temp;
	// temp->data = k;
	// temp->next = NULL;
	Q->rear = temp;
}

struct node *dequeue(struct queue *Q)
{
	if (Q->front == NULL)
		return NULL;	// Empty queue
		
	struct node *temp = Q->front;
	Q->front = Q->front->next;
	
	// If front becomes NULL, then change rear also as NULL
	if (Q->front == NULL)
	   Q->rear = NULL;
	return temp;
}

// A utility function to create an empty queue
struct queue *createQueue()
{
	struct queue *Q;
	Q = (struct queue *)malloc(sizeof(struct queue));
	if (Q == NULL)
		printf("error in allocation of queue!\n");
	Q->front = Q->rear = NULL;
	return Q;
}

// A utility function to create a new linked list node
struct node * createNode(int k)
{
	struct node *new = (struct node *)malloc(sizeof(struct node));
	new->data = k;
	new->next = NULL;
	return new;
}

int isEmpty(struct queue *Q)
{
	if(Q->front == NULL)
		return 1;
	else
		return 0;
}
