
#include <bits/stdc++.h>
using namespace std;

long long int m[50][50];

long long int sum_up ( int i, int j )
{
	long long int a , b, c;

	if ( ( j - 2 ) < 1 )
	{
		a = 0;
	}

	else
	{
		a = m[i - 1][j - 2];
	}

	if ( ( j - 1 ) < 1 )
	{
		b = 0;
	}

	else
	{
		b = m[i - 1][j - 1];
	}

	c = m[i - 1][j];

	return a + b + c;
}

long long int trinomial ( int R )
{
	for ( int i = 1; i <= R; i++ )
	{
		m[i][1] = 1;
	}

	for ( int i = 2; i <= R; i++ )
	{
		for ( int j = 2; j <= 2 * i - 1; j++ )
		{
			m[i][j] = sum_up ( i, j );
		}
	}

	long long int sum = 0;

	for ( int i = 1; i <= 2 * R - 1; i++ )
	{
		sum += m[R][i];
	}

	return sum;
}

int main()
{

	int R;
	cin >> R;
	cout << trinomial ( R + 1 ) << endl;

	return 0;
}
