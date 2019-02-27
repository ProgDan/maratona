
#include <iostream>
using namespace std;

int main ()
{
	int X, Y, i = 1;
	cin >> X >> Y;

	while ( i <= Y )
	{
		cout << i;

		if ( i < Y && i % X != 0 ) cout << " ";

		if ( i < Y && i % X == 0 ) cout << endl;

		i++;
	}

	cout << endl;

	return 0;
}
