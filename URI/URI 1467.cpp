
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c;
	//freopen ( "in.txt", "r", stdin );

	while ( scanf ( "%d %d %d", &a, &b, &c ) == 3 )
	{

		if ( a == b && a == c )
		{
			cout << "*" << endl;
		}

		else if ( a == b )
		{
			cout << "C" << endl;
		}

		else if ( a == c )
		{
			cout << "B" << endl;
		}

		else
		{
			cout << "A" << endl;
		}
	}

	return 0;
}
