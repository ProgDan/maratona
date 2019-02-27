
#include <bits/stdc++.h>
using namespace std;

int main()
{
	//freopen ( "in.txt", "r", stdin );

	int tc;
	cin >> tc;
	getchar();

	while ( tc-- )
	{
		int x = getchar() - 48;
		char ch = getchar();
		int y = getchar() - 48;

		getchar();

		if ( x == y )
		{
			cout << x*y << endl;
		}

		else if ( isupper ( ch ) )
		{
			cout << y - x << endl;
		}

		else
		{
			cout << x + y << endl;
		}
	}

	return 0;
}
