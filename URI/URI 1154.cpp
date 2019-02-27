
#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	double sum = 0, num;
	int cnt = 0;

	do
	{
		cin >> num;

		if ( num > 0 )
		{
			sum += num;
			cnt++;
		}
	}
	while ( num > 0 );

	cout << fixed << setprecision ( 2 ) << ( sum / cnt ) << endl;

	return 0;
}
