
#include <iostream>
using namespace std;

int main()
{
	int a, b, sum = 0, i;

	cin >> a >> b;

	if ( a > b )
	{
		a = a ^ b;
		b = a ^ b;
		a = a ^ b;
	}

	for ( i = a + 1; i < b; i++ )
		if ( i % 2 ) sum += i;

	cout << sum << endl;

	return 0;
}
