#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Adjacency-List graph DS
 * Edges are represented using an array of linked-lists
 * We keep a count of no. of vertices for each graph
 * and assign each vertex a unique id from 1->nvertices
 */

#define MAXV 1000	/* max. no. of vertices */
typedef enum { false, true } bool;

typedef struct edgenode {
	int y;					/* adjacency info */
	int weight;				/* edge weight, if any */
	struct edgenode *next;	/* next edge in list */
}edgenode;

typedef struct graph {
	edgenode *edges[MAXV+1];	/* adjacency info */
	int degree[MAXV+1];
	int nvertices;
	int nedges;
	bool directed;
}graph;

int main()
{
	graph *g;
	bool directed = true;
	read_graph(g, directed);
	print_graph(g);
	return 0;
}

initialize_graph(graph *g, bool directed)
{
	int i;	/* counter */

	g -> nvertices = 0;
	g -> nedges = 0;
	g -> directed = directed;

	for(i=1; i<=MAXV; i++)
		g->degree[i] = 0;
	for(i=1; i<=MAXV; i++)
		g->edges[i] = NULL;
}

read_graph(graph *g, bool directed)
{
	int i;		/* counter */
	int m;		/* number of edges */
	int x, y;	/* vertices in edge (x,y) */

	initialize_graph(g, directed);

	scanf("%d %d", &(g->nvertices), &m);

	for (i = 1; i < m; i++) {
		scanf("%d %d", &x, &y);
		insert_edge(g,x,y,directed);
	}
}

insert_edge(graph *g, int x, int y, bool directed)
{
	edgenode *p;	/* temp. pointer */

	p = malloc(sizeof(edgenode));	/* allocate edgenode storage */

	// p -> weight = NULL;
	p -> weight = 0;
	p -> y = y;
	p -> next = g -> edges[x];

	g -> edges[x] = p;

	g -> degree[x]++;

	if(directed == false)
		insert_edge(g,y,x,true);
	else
		g -> nedges++;
}

print_graph(graph *g)
{
	int i;		/* counter */
	edgenode *p;/* temp pointer */

	for(i=1; i <= g->nvertices; i++) {
		printf("%d: ", i);
		p = g->edges[i];
		while(p != NULL) {
			printf(" %d", p->y);
			p = p->next;
		}
		printf("\n");
	}
}