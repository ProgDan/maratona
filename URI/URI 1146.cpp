
#include <iostream>
using namespace std;

int main ()
{
	int N, i;

	while ( 1 )
	{
		cin >> N;

		if ( N == 0 ) return 0;

		i = 1;

		while ( i < N )
		{
			cout << i << " ";
			i++;
		}

		cout << i << endl;
	}

	return 0;
}
