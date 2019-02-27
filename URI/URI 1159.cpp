
#include <iostream>
using namespace std;

int main()
{
	int X, i, sum = 0;

	while ( 1 )
	{
		cin >> X;
		sum = 0;

		if ( X == 0 )
		{
			return 0;
		}

		if ( X % 2 )
		{
			X++;
		}

		for ( i = 0; i < 5; i++ )
		{
			sum += X;
			X += 2;
		}

		cout << sum << endl;
	}
}
