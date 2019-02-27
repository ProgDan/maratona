
#include <iostream>
using namespace std;

int main()
{
	int N, t;

	cin >> N;

	while ( N-- )
	{
		cin >> t;

		if ( t % 2 == 0 ) cout << 0 <<  endl;

		else cout << 1 << endl;
	}

	return 0;
}
