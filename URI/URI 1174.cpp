
#include <iostream>
#include <iomanip>

using namespace std;

double arr[100];

int main()
{
	int i;

	for ( i = 0; i < 100; i++ )
	{
		cin >> arr[i];
	}

	for ( i = 0; i < 100; i++ )
	{
		if ( arr[i] <= 10 )
		{
			cout << "A[" << i << "] = " << fixed << setprecision ( 1 ) << arr[i] << endl;
		}
	}

	return 0;
}
