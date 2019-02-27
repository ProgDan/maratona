
#include <bits/stdc++.h>
using namespace std;

int main()
{
	//freopen ( "in.txt", "r", stdin );

	int n, sum, c, v;

	while ( cin >> n && n )
	{
		sum = 0;

		while ( n-- )
		{
			cin >> c >> v;
			sum += v / 2;
		}

		sum /= 2;
		cout << sum << endl;
	}

	return 0;
}
