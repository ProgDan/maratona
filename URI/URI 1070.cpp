
#include <iostream>
using namespace std;

int main()
{
	int n, i;

	cin >> n;

	n = ( n % 2 ) ? n : n + 1;

	for ( i = n; i <= n + 10; i += 2 )
		cout << i << endl;

	return 0;
}
