
#include <iostream>
using namespace std;

int main ()
{
	int X, Z, n = 0, sum = 0;
	cin >> X;
	cin >> Z;

	while ( Z <= X )
	{
		cin >> Z;
	}

	while ( sum <= Z )
	{
		sum = sum + ( X + n );
		n++;
	}

	cout << n << endl;

	return 0;
}
