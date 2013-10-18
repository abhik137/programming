/* Basic Operations on Binary Search Tree */
#include <stdio.h>
#include <stlib.h>
#include <string.h>

typedef struct tree
{
	int num;
	struct tree *parent;
	struct tree *left;
	struct tree *right;
}tree;

tree *search_tree(tree *, int);

int main()
{
	/* Code Here */
	return 0;
}

/* Insertion */
insert_tree(tree **l, item_type x, tree *parent)
{
	tree *p; /* temporary pointer */
		if (*l == NULL) {
			p = malloc(sizeof(tree)); /* allocate new node */
			p->item = x;
			p->left = p->right = NULL;
			p->parent = parent;
			*l = p; /* link into parent’s record */
			return;
		}
		if (x < (*l)->item)
			insert_tree(&((*l)->left), x, *l);
		else
			insert_tree(&((*l)->right), x, *l);
}

/* Search */
tree *search_tree(tree *l, int k)
{
	if (l == NULL)
		return NULL;
	if (l->num == k)
		return (1);
	if (k < l->num)
		return ( search_tree(l->left, k) );
	else
		return ( search_tree(l->right, k) );
}

/* 
Min. & Max. 
	- min = leftmost element
	- max = rightmost element
*/
tree *find_min(tree *t)
{
	tree *min;

	if (t == NULL)
		return NULL;

	min = t;
	while (min->left != NULL)
		min = min->left;
	return (min);
}

tree *find_max(tree *t)
{
	tree *max;

	if (t == NULL)
		return NULL;

	max = t;
	while (max->right != NULL)
		max = max->right;
	return (max);
}

/*
Traversal
	- In-Order
	- Pre-Order
	- Post-Order
*/
// Visit all nodes to the left & to the right recursively
void inorder_trav(tree *l)		
{
	if (l != NULL)
	{
		inorder_trav(l->left);		// to the left
		printf("%d\n", l->num);		// item processed 'in'-traversal
		inorder_trav(l->right);		// to the right
	}
}
void preorder_trav(tree *l)
{
	if (l != NULL)
	{
		printf("%d\n", l->num);		// item processed 'pre'-traversal
		preorder_trav(l->left);		// to the left
		preorder_trav(l->right);	// to the right
	}
}
void postorder_trav(tree *l)
{
	if (l != NULL)
	{
		postorder_trav(l->left);	// to the left
		postorder_trav(l->right);	// to the right
		printf("%d\n", l->num);		// item processed 'post'-traversal
	}
}