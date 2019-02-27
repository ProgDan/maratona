
#include <iostream>
using namespace std;

int main()
{
	int N, i;
	cin >> N;

	for ( i = 0; i < 10; i++ )
	{
		cout << "N[" << i << "] = " << N << endl;
		N *= 2;
	}

	return 0;
}
