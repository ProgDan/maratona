
#include <iostream>
using namespace std;

int main ()
{
	int M, N, sum;

	while ( 1 )
	{
		sum = 0;

		cin >> M >> N;

		if ( M <= 0 || N <= 0 )
			break;

		if ( M > N )
		{
			M = M ^ N;
			N = M ^ N;
			M = M ^ N;
		}

		while ( M <= N )
		{
			cout << M << " ";
			sum += M;
			M++;
		}

		cout << "Sum=" << sum << endl;
	}

	return 0;
}
