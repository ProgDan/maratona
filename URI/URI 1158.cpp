
#include <iostream>
using namespace std;

int main()
{
	int N, X, Y, sum = 0;
	cin >> N;

	while ( N-- )
	{
		cin >> X >> Y;
		sum = 0;

		if ( X % 2 == 0 )
		{
			X++;
		}

		while ( Y-- )
		{
			sum += X;
			X += 2;
		}

		cout << sum << endl;
	}

	return 0;
}
