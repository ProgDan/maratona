
#include <bits/stdc++.h>
using namespace std;

int m[205][205];

int main()
{
	//freopen ( "in.txt", "r", stdin );

	int n;
	cin >> n;

	for ( int i = 1; i <= n; i++ )
	{
		for ( int j = 1; j <= n; j++ )
		{
			cin >> m[i][j];
		}
	}

	int cnt = 0;
	int x , y, p;
	vector<int>v;

	for ( int i = 1; i <= 2 * n; i++ )
	{
		cin >> x >> y;

		p = m[x][y];

		if ( find ( v.begin(), v.end(), p ) == v.end() )
		{
			v.push_back ( p );
			cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}
