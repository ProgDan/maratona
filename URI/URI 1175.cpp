
#include <iostream>
#include <iomanip>

using namespace std;

int arr[20];

int main()
{
	int i;

	for ( i = 19; i >= 0; i-- )
	{
		cin >> arr[i];
	}

	for ( i = 0; i < 20; i++ )
	{
		cout << "N[" << i << "] = " << arr[i] << endl;
	}

	return 0;
}
