
#include <bits/stdc++.h>
using namespace std;

int main()
{
	//freopen ( "in.txt", "r", stdin );


	int t;
	cin >> t;

	while ( t-- )
	{
		int s, n, e;
		set<pair<int, int>> arr;

		cin >> s;
		cin >> n >> e;

		while ( e-- )
		{
			int n1, n2;
			cin >> n1 >> n2;

			arr.insert ( make_pair ( n1, n2 ) );
			arr.insert ( make_pair ( n2, n1 ) );
		}

		cout << arr.size() << endl;
	}

	return 0;
}
