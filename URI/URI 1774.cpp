
#include <bits/stdc++.h>
using namespace std;

struct Edge
{
	int u, v, weight;
};


// A structure to represent a subset for union-find
struct Vertex
{
	int parent;
	int rank;
};

// A utility function to find set of an element i
// (uses path compression technique)
int find ( struct Vertex vertices[], int i )
{
	// find root (path compression)
	if ( vertices[i].parent == i ) return i;

	return find ( vertices, vertices[i].parent );
}

// A function that does union of two sets of x and y
// (uses union by rank)
void Union ( struct Vertex vertices[], int x, int y )
{
	int xroot = find ( vertices, x );
	int yroot = find ( vertices, y );

	// Attach smaller rank tree under root of high rank tree
	// (Union by Rank)
	if ( vertices[xroot].rank < vertices[yroot].rank )
		vertices[xroot].parent = yroot;

	else if ( vertices[xroot].rank > vertices[yroot].rank )
		vertices[yroot].parent = xroot;

	// If ranks are same, then make take anyone as root and increment its rank by one
	else
	{
		vertices[yroot].parent = xroot;
		vertices[xroot].rank++;
	}
}

// Compare two edges according to their weights.
// Used in qsort() for sorting an array of edges
int myComp ( Edge a, Edge b )
{
	return a.weight < b.weight;
}

// The main function to construct MST using Kruskal's algorithm
int KruskalMST ( Vertex vertices[], Edge edges[], int nEdges )
{
	int total = 0;

	for ( int i = 1; i <= nEdges; i++ )
	{
		int u = edges[i].u;
		int v = edges[i].v;

		if ( find ( vertices, u ) != find ( vertices, v ) )
		{
			Union ( vertices, u, v );
			total += edges[i].weight;
		}
	}

	return total;
}

int main()
{
	//freopen ( "in.txt", "r", stdin );

	int nVertices, nEdges, ans;
	cin >> nVertices >> nEdges;

	Vertex vertices[nVertices + 1];
	Edge edges[nEdges + 1];

	for ( int i = 1; i <= nVertices; i++ )
	{
		vertices[i].parent = i;
		vertices[i].rank = 0;
	}

	for ( int i = 1; i <= nEdges; i++ )
	{
		cin >> edges[i].u >> edges[i].v >> edges[i].weight;
		ans += edges[i].weight;
	}

	sort ( edges + 1, edges + nEdges + 1, myComp );

	ans = KruskalMST ( vertices, edges, nEdges );
	cout << ans << endl;


	return 0;
}
