
#include <bits/stdc++.h>
using namespace std;

int main()
{
	//freopen ( "in.txt", "r", stdin );

	int tc;
	cin >> tc;

	while ( tc-- )
	{
		int n, num;
		vector<int> v;
		int cnt = 0;
		cin >> n;

		while ( n-- )
		{
			cin >> num;

			if ( find ( v.begin(), v.end(), num ) == v.end() )
			{
				cnt++;
				v.push_back ( num );
			}
		}

		cout << cnt << endl;
	}

	return 0;
}
