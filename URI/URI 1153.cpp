
#include <iostream>
using namespace std;

int main ()
{
	int N, sum = 1;
	cin >> N;

	while ( N )
	{
		sum *= N--;
	}

	cout << sum << endl;

	return 0;
}
