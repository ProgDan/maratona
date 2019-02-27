
#include <iostream>
using namespace std;

int main ()
{
	int low, high, start, sum;
	cin >> low >> high;

	if ( low > high )  // Generated error for the first time for not checking this condition.
	{
		low = low ^ high;
		high = low ^ high;
		low = low ^ high;
	}

	sum = ( ( low + high ) * ( high - low + 1 ) ) / 2;

	start = ( ( low + 12 ) / 13 ) * 13;

	while ( start <= high )
	{
		sum -= start;
		start += 13;
	}

	cout << sum << endl;

	return 0;
}
