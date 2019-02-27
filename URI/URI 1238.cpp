
#include <bits/stdc++.h>
using namespace std;

int main()
{
	//freopen ( "in.txt", "r", stdin );

	int tc;
	cin >> tc;
	getchar();
	char s1[100];
	char s2[100];

	while ( tc-- )
	{
		scanf ( "%s %s", s1, s2 );

		int i;
		int j = min ( strlen ( s1 ), strlen ( s2 ) );

		for ( i = 0; i < j; i++ )
		{
			cout << s1[i] << s2[i];
		}

		while ( s1[i] != '\0' )
		{
			cout << s1[i];
			i++;
		}

		i = j;

		while ( s2[i] != '\0' )
		{
			cout << s2[i];
			i++;
		}

		cout << endl;
	}

	return 0;
}
