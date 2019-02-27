
#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int  main()
{
	int L, i, j;
	char ch;
	double arr[12][12], sum = 0, ans;

	//freopen("in.txt", "r", stdin);

	cin >> L;
	cin >> ch;

	for ( i = 0; i < 12; i++ )
	{
		for ( j = 0; j < 12; j++ )
		{
			cin >> arr[i][j];
		}
	}

	for ( j = 0; j < 12; j++ )
	{
		sum += arr[L][j];
	}

	if ( ch == 'S' ) ans = sum;

	else if ( ch == 'M' ) ans = sum / 12;

	cout << fixed << setprecision ( 1 ) << ans << endl;

	return 0;
}
