
#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	double N, x, y;

	cin >> N;

	while ( N-- )
	{
		cin >> x >> y;

		if ( y == 0 )
		{
			cout << "divisao impossivel" << endl;
		}

		else
		{
			cout << fixed << setprecision ( 1 ) << ( x / y ) << endl;
		}
	}

	return 0;
}
