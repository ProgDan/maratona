

#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int  main()
{
	int i, j;
	char ch;
	double arr[12][12], sum = 0, ans;

	//freopen("in.txt", "r", stdin);

	cin >> ch;

	for ( i = 0; i < 12; i++ )
	{
		for ( j = 0; j < 12; j++ )
		{
			cin >> arr[i][j];
		}
	}

	for ( i = 0; i < 6; i++ )
	{
		for ( j = ( 12 - i ); j < 12; j++ )
		{
			sum += arr[i][j];
		}
	}

	for ( i = 6; i < 12; i++ )
	{
		for ( j = i + 1; j < 12; j++ )
		{
			sum += arr[i][j];
		}
	}

	if ( ch == 'S' ) ans = sum;

	else if ( ch == 'M' ) ans = sum / 30;

	cout << fixed << setprecision ( 1 ) << ans << endl;

	return 0;
}
