
#include <bits/stdc++.h>
using namespace std;

int N;
double arr[1000003][2];

int main()
{
	//freopen ( "in.txt", "r", stdin );

	cin >> N;
	double sum = 0, visited = 0;

	for ( int i = 1; i <= N; i++ )
	{
		cin >> arr[i][0];
		sum += arr[i][0];
		arr[i][1] = 0;
	}

	int i = 1;

	while ( 1 )
	{
		if ( i < 1 || i > N )
		{
			cout << fixed << setprecision ( 0 ) << visited << " " << sum << endl;
			return 0;
		}

		if ( arr[i][1] == 0 )
		{
			visited++;
			arr[i][1] = 1;
		}

		int j = arr[i][0];

		if ( j )
		{
			arr[i][0] = j - 1;
			sum--;
		}

		if ( j % 2 )
		{
			i++;
		}

		else
		{
			i--;
		}
	}

	return 0;
}
