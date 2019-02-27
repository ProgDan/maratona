
#include <iostream>
using namespace std;

int arr[1000];

int main()
{
	int i, T;
	cin >> T;


	for ( i = 0; i < 1000; i++ )
	{
		arr[i] = i % T;
	}

	for ( i = 0; i < 1000; i++ )
	{
		cout << "N[" << i << "] = " << arr[i] << endl;
	}

	return 0;
}
