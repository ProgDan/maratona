
#include <iostream>
using namespace std;


int main()
{
	int i, num, max = 0, max_index = 1;

	for ( i = 1; i <= 100; i++ )
	{
		cin >> num;

		if ( num > max )
		{
			max = num;
			max_index = i;
		}
	}

	cout << max << endl << max_index << endl;

	return 0;
}
