
#include <bits/stdc++.h>
using namespace std;

int main()
{
	//freopen ( "in.txt", "r", stdin );

	int C;
	cin >> C;

	while ( C-- )
	{
		double N, cnt = 0, total = 0;
		cin >> N;
		double arr[int ( N )];

		for ( int i = 0; i < N; i++ )
		{
			cin >> arr[i];
			total += arr[i];
		}

		double avg = total / N;

		for ( int i = 0; i < N; i++ )
		{
			if ( arr[i] > avg )
			{
				cnt++;
			}
		}

		cout << fixed << setprecision ( 3 ) << ( cnt * 100 ) / N << "%" << endl;
	}

	return 0;
}
