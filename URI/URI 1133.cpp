
#include <iostream>
using namespace std;

int main ()
{
	int low, high, i;
	cin >> low >> high;

	if ( low > high )  // Generated error for the first time for not checking this condition.
	{
		low = low ^ high;
		high = low ^ high;
		low = low ^ high;
	}


	for ( i = low + 1; i < high; i++ )
	{
		if ( i % 5 == 2 || i % 5 == 3 )
		{
			cout << i << endl;
		}
	}

	return 0;
}
