
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, j;
	char num[101];
	int sum;


	cin >> N;

	for ( int i = 0; i < N; i++ )
	{
		cin >> num;
		j = 0;
		sum = 0;

		while ( 1 )
		{
			if ( num[j] == '\0' )
			{
				break;
			}

			if ( num[j] == '1' )
			{
				sum += 2;
			}

			if ( num[j] == '2' )
			{
				sum += 5;
			}

			if ( num[j] == '3' )
			{
				sum += 5;
			}

			if ( num[j] == '4' )
			{
				sum += 4;
			}

			if ( num[j] == '5' )
			{
				sum += 5;
			}

			if ( num[j] == '6' )
			{
				sum += 6;
			}

			if ( num[j] == '7' )
			{
				sum += 3;
			}

			if ( num[j] == '8' )
			{
				sum += 7;
			}

			if ( num[j] == '9' )
			{
				sum += 6;
			}

			if ( num[j] == '0' )
			{
				sum += 6;
			}

			j++;
		}

		cout << sum << " leds" << endl;
	}

	return 0;
}
