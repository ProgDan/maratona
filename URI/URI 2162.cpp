
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	if ( n == 1 )
	{
		cout << "1" << endl;
		return 0;
	}

	if ( n == 2 )
	{
		int x, y;
		cin >> x >> y;

		if ( x == y ) cout << "0" << endl;

		else cout << "1" << endl;

		return 0;
	}

	int arr[n];

	for ( int i = 0; i < n; i++ )
		cin >> arr[i];

	for ( int i = 1; i < n - 1; i++ )
	{
		if ( ( arr[i] - arr[i - 1] ) * ( arr[i] - arr[i + 1] ) <= 0 )
		{
			cout << "0" << endl;
			return 0;
		}
	}

	cout << "1" << endl;
	return 0;
}
