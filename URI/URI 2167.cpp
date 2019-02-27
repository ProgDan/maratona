
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, prev, now;
	cin >> n;
	cin >> prev;

	for ( int i = 2; i <= n; i++ )
	{
		cin >> now;

		if ( now < prev )
		{
			cout << i << endl;
			return 0;
		}

		prev = now;
	}

	cout << "0" << endl;
	return 0;
}
