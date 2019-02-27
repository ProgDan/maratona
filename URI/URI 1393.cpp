
#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int arr[45];
	arr[1] = 1;
	arr[2] = 2;

	for ( int i = 3; i <= 41; i++ )
	{
		arr[i] = arr[i - 2] + arr[i - 1]; // Fibonacci sequence
	}

	int n;

	while ( cin >> n && n )
	{
		cout << arr[n] << endl;
	}

	return 0;
}
