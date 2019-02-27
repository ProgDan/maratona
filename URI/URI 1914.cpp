
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	char p1[102], p2[102], c1[10], c2[10];
	int T, n1, n2, n;

	//freopen ( "in.txt", "r", stdin );

	cin >> T;

	while ( T-- )
	{
		cin >> p1;
		cin >> c1;

		cin >> p2;
		cout << p1 << "PAR";
		cin >> c2;

		cin >> n1;
		cin >> n2;

		n = n1 + n2;

		if ( n % 2 == 0 )
		{
			if ( strcmp ( c1, "PAR" ) == 0 ) cout << p1 << endl;

			else cout << p2 << endl;
		}

		else
		{
			if ( strcmp ( c1, "IMPAR" ) == 0 ) cout << p1 << endl;

			else cout << p2 << endl;
		}
	}

	return 0;

}
