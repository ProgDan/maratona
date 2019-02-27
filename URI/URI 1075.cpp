
#include <iostream>
using namespace std;

int main()
{
	int N, i;
	cin >> N;

	for ( i = 2; i < 10000; i += N )
		cout << i << endl;

	return 0;
}
