
#include <bits/stdc++.h>
using namespace std;

int main()
{
	//freopen ( "in.txt", "r", stdin );

	int tc;
	cin >> tc;
	getchar();
	char s[101];

	while ( tc-- )
	{
		gets ( s );
		int mid = strlen ( s ) / 2;

		for ( int i = mid - 1; i >= 0; i-- )
		{
			cout << s[i];
		}

		for ( int i = strlen ( s ) - 1; i >= mid; i-- )
		{
			cout << s[i];
		}

		cout << endl;
	}

	return 0;
}
