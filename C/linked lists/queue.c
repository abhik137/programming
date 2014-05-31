/* Implement a queue using a linked list */
/*
	ref:
		http://www.cs.bu.edu/teaching/c/queue/linked-list/funcs.html
		http://www.cs.bu.edu/teaching/c/queue/linked-list/types.html
		http://www.beginners-tutorials.com/2012/05/how-to-create-our-own-header-files-in-c.html
		http://www.cs.cf.ac.uk/Dave/C/node35.html
*/

#include <stdio.h>
#include <stdlib.h>

qmeta create(void);
void enqueue();
void dequeue();
//void display();
void destroy();
//void isEmpty();
//void size();

typedef struct que_node
{
	int data;
	strct node *next;	
}*NODE;			

struct queue_metadata
{						//having a separate struct for this enables us to have multiple queues without changing the pointer_name
	NODE front;
	NODE rear;
	int size;
};

typedef struct queue_metadata* qmeta;	// qmeta == queueADT (!ignore)

int main()
{
	int ch;
	
	while(1)
	{
		printf("Menu\n1. Create\n2. Enqueue\n3. Display\n4. Dequeue\n5. Size\n6. Destroy\n7. Exit\nEnter Choice: ");
		scanf("%d", &ch);
		
		switch(ch)
		{
			case(1):
				printf		
	
	return 0;
}

qmeta create(void)
{
	qmeta queue;
	
	queue = malloc(sizeof(qmeta));
	
	if (queue == NULL)
	{
		printf("Insufficient memory for new queue\n");
		exit(1);	// Exit program returning error code
	}
	
	queue->front = queue->rear = NULL;
	
	return queue;
}

void destroy()
{
/*
   * First remove each element from the queue (each
   * element is in a dynamically-allocated node.)
*/
	while(!isEmpty(queue))
	{
		delete(queue);
/*
   * Reset the front and rear just in case someone
   * tries to use them after the CDT is freed.
 */	
   		queue->front = queue->rear = NULL;
/*
   * Now free the structure that holds information
   * about the queue.
*/
   		free(queue);
   	}
}

void enqueue(qmeta queue, int d)
{
	NODE newNodeP;
	
	newNodeP = malloc(sizeof(NODE));
	
	if (newNodeP == NULL)
	{
		printf("Insufficient memory for new queue element\n");
		exit(1);
	}
	
	/* Place information in node */
	newNodeP->data = d;
	newNodeP->next = NULL;
	
/*
   * Link the element into the right place in
   * the linked list.
*/
	if (queue->front == NULL)	// Queue is empty
	{
		queue->front = queue->rear = newNodeP;	
	}
	else
	{
		queue->rear->next = newNodeP;
		queue->rear = newNodeP;
	}
}
