#include <bits/stdc++.h>
using namespace std;
#define INF 99999999

int W[503][503]; // adjacency matrix

void FLOYD_WARSHALL ( int W[][503], int n )
// computes all pair shortest path costs and stores them in W
{
	for ( int k = 1; k <= n; k++ )
	{
		for ( int i = 1; i <= n; i++ )
		{
			for ( int j = 1; j <= n; j++ )
			{
				W[i][j] = min ( W[i][j], W[i][k] + W[k][j] );
			}
		}
	}
}


int main()
{
	int n, e, k;
	//freopen ( "in.txt", "r", stdin );

	while ( cin >> n >> e && n )
	{
		for ( int i = 1; i <= n; i++ )
		{
			for ( int j = 1; j <= n; j++ )
			{
				W[i][j] = ( i == j ? 0 : INF );
				// self loop, zero weight
			}
		}

		while ( e-- )
		{
			int u, v, h;
			cin >> u >> v >> h;
			W[u][v] = h;

			if ( W[v][u] != INF )
			{
				W[u][v] = W[v][u] = 0;
				// same country, instant communication
			}
		}

		FLOYD_WARSHALL ( W, n ); // W contains APSP


		cin >> k;

		while ( k-- )
		{
			int u, v;
			cin >> u >> v;
			int x = W[u][v];

			if ( x == INF ) cout << "Nao e possivel entregar a carta" << endl;

			else cout << x << endl;
		}

		cout << endl;
	}

	return 0;
}
