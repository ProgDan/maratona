
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int i, cnt = 0, num;

	//freopen ("in.txt", "r", stdin);

	for ( i = 0; i < 5; i++ )
	{
		cin >> num;

		if ( num % 2 == 0 )
			cnt++;
	}

	cout << cnt << " valores pares" << endl;
}
