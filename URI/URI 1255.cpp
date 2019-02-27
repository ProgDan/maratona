
#include <bits/stdc++.h>
using namespace std;

int main()
{
	//freopen ( "in.txt", "r", stdin );

	int arr[26];
	char str[201];

	int tc;
	cin >> tc;
	getchar();

	while ( tc-- )
	{
		gets ( str );

		for ( int i = 0; i < 26; i++ )
		{
			arr[i] = 0;
		}

		for ( int i = 0; i < strlen ( str ); i++ )
		{
			if ( isalpha ( str[i] ) )

			{
				char ch = tolower ( str[i] );
				arr[ch - 'a']++;
			}
		}

		int max = 0;

		for ( int i = 0; i < 26; i++ )
		{
			if ( arr[i] > max )
			{
				max = arr[i];
			}
		}

		for ( int i = 0; i < 26; i++ )
		{
			if ( arr[i] == max )
			{
				printf ( "%c", 'a' + i );
			}
		}

		cout << endl;
	}

	return 0;
}
