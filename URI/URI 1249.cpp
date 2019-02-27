
#include <bits/stdc++.h>
using namespace std;

int main()
{
	char ch;
	char arr[52];
	unsigned index;

	//freopen ( "in.txt", "r", stdin );

	while ( gets ( arr ) )
	{
		index = 0;

		while ( 1 )
		{
			ch = arr[index];

			if ( ch == '\0' || ch == '\n' )
			{
				break;
			}

			if ( isalpha ( ch ) )
			{
				if ( isupper ( ch ) )
				{
					cout << char ( ( ch + 13 ) % 91 + ( ch >= 78 ) * 65 );
				}

				else
				{
					cout << char ( ( ch + 13 ) % 123 + ( ch >= 110 ) * 97 );
				}
			}

			else
			{
				cout << ch;
			}

			index++;
		}

		cout << endl;
	}

	return 0;
}
