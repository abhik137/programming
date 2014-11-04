#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED
/* ^^ these are the include guards */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
	int data;
	struct node* left;
	struct node* right;
};

/* Prototypes for the functions */
// static int lookup(struct node* node, int target);
/* 
'main' cannot access this 'static' func.
coz static functions are available only to the file that they are defined in
i.e. functionc.c
*/
int lookup(struct node* node, int target);
struct node* newNode(int data);
struct node* insert(struct node* node, int data);
void printTree(struct node* node);
int size(struct node* node);
int maxDepth(struct node* node);

#endif