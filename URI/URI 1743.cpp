
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[5], b[5];

	for ( int i = 0; i < 5; i++ )
	{
		cin >> a[i];
	}

	for ( int i = 0; i < 5; i++ )
	{
		cin >> b[i];
	}

	for ( int i = 0; i < 5; i++ )
	{
		if ( a[i] + b[i] != 1 )
		{
			cout << "N" << endl;
			return 0;
		}
	}

	cout << "Y" << endl;
	return 0;
}
