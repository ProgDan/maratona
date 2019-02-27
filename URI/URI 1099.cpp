
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int i, N, X, Y, sum;

	//freopen ("in.txt", "r", stdin);

	cin >> N;

	while ( N-- )
	{
		cin >> X >> Y;

		if ( X > Y )
		{
			X = X ^ Y;
			Y = X ^ Y;
			X = X ^ Y;
		}

		i = X + 1;
		sum = 0;

		while ( i < Y )
		{
			if ( i % 2 == 1 )
			{
				sum += i;
			}

			i++;
		}

		cout << sum << endl;
	}

	return 0;

}
