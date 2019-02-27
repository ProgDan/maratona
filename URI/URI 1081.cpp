#include <bits/stdc++.h>
using namespace std;

const int WHITE = 0;
const int GREY  = 1;
const int BLACK = 2;
const int INF = 999999;

class Vertex
{

private:

	set<int> adjList;
	bool isVisited; // visited / not visied
	int color;	//
	int parent;

	int nNeighbors; // number of neighbors

public:



	/***** containers *****/

	



	/***** constructor(s) *****/

	Vertex()
	{
		isVisited = false; // initially not visited
		color = WHITE;

		nNeighbors = 0; // initially no Neighbors
	}




	/***** set methods *****/

	void addNeighbor(int v)
	{
		adjList.insert(v);
		return;
	}

	void visit()
	{
		isVisited = true;
	}

	bool setColor(int color)
	{
		/*
		if (color != WHITE || color != GREY || color != BLACK)
		{
			return false;
		}
		*/

		this-> color = color;

		return true;
	}

	bool setParent(int parent)
	{
		this->parent = parent;
		return true; 
	}




	/***** get methods *****/

	bool isNeighbor(int v)
	{
		if(adjList.count(v) == 0) {return false;} // not a neighbor

		return true;
	}

	set<int> getAdjList()
	{
		return adjList;
	}

	int getColor()
	{
		return color;
	}

	int getParent()
	{
		return parent;
	}
};


class Graph
{

private:
	int nVertices, nEdges;
	bool isDirected;
	vector<Vertex> vertices;
	
	//int source = 0;


public:

	/***** containers *****/

	




	/***** constructor(s) *****/

	Graph(int nVertices = 0, int nEdges = 0)
	{
		this->nVertices = nVertices;
		this->nEdges = nEdges;
		isDirected = true; // directed graph

		for(int i = 0; i < nVertices; i++)
		{
			vertices.push_back(Vertex());
		}
	}


	/***** set methods *****/

	bool addEdge(int u, int v)
	{
		if(u >= nVertices || v >= nVertices || u < 0 || v < 0)
		{
			return false;
		}

		vertices[u].addNeighbor(v);
		nEdges++;

		return true;
	}

	bool vist(int u)
	{
		if(u >= nVertices || u < 0)
		{
			return false;
		}

		vertices[u].visit();

		return true;
	}

	bool setColor(int u, int color)
	{
		if(u >= nVertices || u < 0)
		{
			return false;
		}

		return vertices[u].setColor(color);
	}

	bool setParent(int u, int parent)
	{
		if(u >= nVertices || u < 0 || parent >= nVertices || parent < 0 || u == parent)
		{
			return false;
		}

		return vertices[u].setParent(parent);
	}


	/***** get methods *****/

	int getNumberOfVertices()
	{
		return nVertices;
	}

	int getNumberOfEdges()
	{
		return nEdges;
	}

	int getColor(int vertex)
	{
		// Need to implement security check

		return vertices[vertex].getColor();
	}

	int getParent(int vertex)
	{
		// Need to implement security check

		return vertices[vertex].getParent();
	}

	bool isEdge (int u, int v)
	{
		if(u >= nVertices || v >= nVertices || u < 0 || v < 0)
		{
			return false;
		}

		return vertices[u].isNeighbor(v);
	}

	vector<Vertex> getVertices()
	{
		return vertices;
	}

	set<int> getAdjList(int vertex)
	{
		return vertices[vertex].getAdjList();
	}
};


void DFS_Visit(Graph &g, int u, int level)
{
	g.setColor(u, GREY);

	for(int v : g.getAdjList(u))
	{
		if(g.getColor(v) == WHITE)
		{
			g.setParent(v, u);


			/***** printing task *****/
			for(int i = 0; i< level; i++)
			{
				cout << "  ";
			}
			cout << u << "-" << v << " pathR(G," << v << ")" << endl;
			/***** prinitng complete *****/


			DFS_Visit(g, v, level+1);
		}

		else
		{
			/***** printing task *****/
			for(int i = 0; i< level; i++)
			{
				cout << "  ";
			}
			cout << u << "-" << v << endl;
			/***** prinitng complete *****/
		}

		g.setColor(u, BLACK);
	}

}

int main()
{
	//freopen("in.txt", "r", stdin);

	int nTests, nVertices, nEdges, u, v;
	Graph g;

	cin >> nTests;

	for (int i = 0; i < nTests; ++i)
	{
		cin >> nVertices >> nEdges;
		g = Graph(nVertices);

		for (int j = 0; j < nEdges; ++j)
		{
			cin >> u >> v;
			g.addEdge(u, v);			
		}

		/*** now the game begins ***/
		cout << "Caso " << i+1 << ":" << endl;



		for(int u = 0; u < nVertices; u++)
		{
			g.setColor(u, WHITE);
			g.setParent(u, INF);
		}

		for(int u = 0; u < nVertices; u++)
		{
			if(g.getColor(u) == WHITE && g.getAdjList(u).size() != 0)
			{
				DFS_Visit(g, u, 1);
				cout << endl;
			}
		}
	}
	
}
