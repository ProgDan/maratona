#include <bits/stdc++.h>
using namespace std;

int main()
{
	double D, F, G;

	while ( cin >> D >> F >> G )
	{
		if ( 12.0 / F < sqrt ( 144 + D * D ) / G ) cout << "N" << endl;

		else cout << "S" << endl;
	}

	return 0;
}
