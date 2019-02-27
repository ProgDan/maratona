
#include <bits/stdc++.h>
using namespace std;

vector<set<int>> g;
int t, n, e;
bool visited[30];
set<int> temp;

void dfs ( int u )
{
	visited[u] = true;
	temp.insert ( u );

	for ( auto v : g[u] )
		if ( visited[v] == false )
			dfs ( v );
}


int main()
{
	//freopen ( "in.txt", "r", stdin );

	cin >> t;

	for ( int p = 1; p <= t; p++ )
	{
		cout << "Case #" << p << ":" << endl;

		cin >> n >> e;

		memset ( visited, false, 30 );
		g.clear();
		int cnt = 0;

		for ( int i = 0; i <= n; i++ )
		{
			g.push_back ( {} );
		}

		while ( e-- )
		{
			char x, y;
			cin >> x >> y;
			int u = int ( x ) - 97;
			int v = int ( y ) - 97;
			g[u].insert ( v );
			g[v].insert ( u );
		}

		for ( int i = 0; i <= n + e; i++ )
		{
			if ( visited[i] == false )
			{
				cnt++;
				dfs ( i );

				for ( auto u : temp ) cout << char ( u + 97 ) << ",";

				cout << "" << endl;
				temp.clear();
			}

		}

		cout << cnt << " connected components" << endl << endl;
	}

	return 0;
}
