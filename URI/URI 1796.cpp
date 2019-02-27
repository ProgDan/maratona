
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, num, pos = 0;
	cin >> n;

	for ( int i = 0; i < n; i++ )
	{
		cin >> num;

		if ( num == 0 )
		{
			pos++;
		}
	}

	if ( pos > ( n - pos ) )
	{
		cout << "Y" << endl;
	}

	else
	{
		cout << "N" << endl;
	}

	return 0;
}
