
#include <iostream>
using namespace std;

int arr[10];

int main()
{
	int i;

	for ( i = 0; i < 10; i++ )
	{
		cin >> arr[i];
	}

	for ( i = 0; i < 10; i++ )
	{
		if ( arr[i] <= 0 )
		{
			arr[i] = 1;
		}

		cout << "X[" << i << "] = " << arr[i] << endl;
	}

	return 0;
}
