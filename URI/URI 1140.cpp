
#include <bits/stdc++.h>
using namespace std;

int main()
{
	char str[1005];
	//freopen ( "in.txt", "r", stdin );

	while ( 1 )
	{
		gets ( str );

		if ( str[0] == '*' )
		{
			break;
		}

		char first = toupper ( str[0] );
		int flag = 0;

		char* token = strtok ( str, " " );

		while ( token != NULL  )
		{
			if ( toupper ( token[0] ) != first )
			{
				flag = 1;
				break;
			}

			token = strtok ( NULL, " " );
		}

		if ( !flag )
		{
			cout << "Y" << endl;
		}

		else
		{
			cout << "N" << endl;
		}
	}

	return 0;
}
