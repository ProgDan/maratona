

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	double S = 0, numerator = 1, denominator = 1;

	while ( numerator <= 39 )
	{
		S += numerator / denominator;

		numerator += 2;
		denominator *= 2;
	}

	cout << fixed << setprecision ( 2 ) << S << endl;

	return 0;
}
