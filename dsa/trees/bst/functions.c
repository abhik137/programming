#include "functions.h"

/*
 Compute the number of nodes in a tree.
*/ 
int size(struct node* node)
{
	if (node == NULL)
		return 0;
	else
		return (size(node->left)+ 1 +size(node->right));
}
/*
 Compute the "maxDepth" of a tree -- the number of nodes along
 the longest path from the root node down to the farthest leaf node.
*/ 
int maxDepth(struct node* node)
{
	if (node == NULL)
		return 0;
	return maxDepth(node->right) > maxDepth(node->left) ?  maxDepth(node->right)+1 : maxDepth(node->left)+1;
	// ^Take a note of the above statement.
}
/*
 Given a non-empty binary search tree,
 return the minimum data value found in that tree.
 Note that the entire tree does not need to be searched.
*/ 
/*--> Iterative Solution
int minValue(struct node* node)
{
	if (node == NULL)
		printf("Empty Tree!\n");
	int min = node->data;
	struct node* current = node;
	while (current != NULL) {
		if (current->data < min)
			min = current->data;
		current = current->left;
	}
	return min;
}
*/
int minValue(struct node* node)
{
	struct node* current = node;

	while(current->left != NULL) {
		current = current->left;
	}

	return current->data;
}
/*
 Given a binary search tree, print out
 its data elements in increasing
 sorted order(since in-order BST)
*/ 
void printTree(struct node* node) 
{	// this is 'inorder', pre-order & post-order are similar
	if (node == NULL)
		return;
	printTree(node->left);
	printf("=>%d\n", node->data);
	printTree(node->right);	
}
/* 
 Given a binary tree, return true if a node 
 with the target data is found in the tree. Recurs 
 down the tree, chooses the left or right 
 branch by comparing the target to each node. 
*/
int lookup(struct node* node, int target)
{
	// 1.Base Case = Empty Tree
	if (node == NULL) {
		return 0;
	}
	else {
		// 2.See if found here
		if (node->data == target)
			return 1;
		else {
			// 3.otherwise recurse down the correct subtree
			if (target < node->data)
				return (lookup(node->left, target));
			else
				return (lookup(node->right, target));
		}
	}
}

/* 
 Helper function that allocates a new node 
 with the given data and NULL left and right 
 pointers. 
*/
struct node* newNode(int data)
{
	struct node* node = (struct node *)malloc(sizeof(struct node *));	// 'new' is like 'malloc'
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return node;
}

/* 
 Give a binary search tree and a number, inserts a new node 
 with the given number in the correct place in the tree. 
 Returns the new root pointer which the caller should 
 then use (the standard trick to avoid using reference 
 parameters). 
*/
struct node* insert(struct node* node, int data)
{
	// 1. If the tree is empty, return a new, single node 
	if (node == NULL) {
		return newNode(data);
	}
	else {
		// 2. Otherwise, recur down the tree 
		if (data <= node->data)
			node->left = insert(node->left, data);
		else
			node->right = insert(node->right, data);
	}

	return node;	// return the (unchanged) node pointer
}

/*
	ref links:
	https://stackoverflow.com/questions/1752079/in-c-can-a-long-printf-statement-be-broken-up-into-multiple-lines
	https://stackoverflow.com/questions/1082655/conditional-operator-differences-between-c-and-c
	https://stackoverflow.com/questions/7046120/returning-value-in-conditional-operator
*/