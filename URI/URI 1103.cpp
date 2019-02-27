
#include <bits/stdc++.h>
using namespace std;

int main()
{
	//freopen ( "in.txt", "r", stdin );

	int h1, m1, h2, m2;

	while ( 1 )
	{
		cin >> h1 >> m1 >> h2 >> m2;

		if ( h1 == 0 && h2 == 0 && m1 == 0 && m2 == 0 )
		{
			return 0;
		}

		int H = ( h2 - h1 + 24 ) % 24;
		int M = ( m2 - m1 + 60 ) % 60;

		if ( m2 < m1 )
		{
			H--;

			if ( H < 0 )
			{
				H = 23;
			}
		}

		cout << H * 60 + M << endl;
	}

	return 0;
}
