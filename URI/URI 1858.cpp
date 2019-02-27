
#include <iostream>
using namespace std;

int main()
{
	int N, num, min, min_index, i;

	cin >> N;

	min = 999;
	min_index = 0;

	for ( i = 1; i <= N; i++ )
	{
		cin >> num;

		if ( num < min )
		{
			min = num;
			min_index = i;
		}
	}

	cout << min_index << endl;

	return 0;
}
