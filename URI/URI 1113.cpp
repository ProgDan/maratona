
#include <iostream>
using namespace std;

int main ()
{
	int M, N;

	while ( 1 )
	{
		cin >> M >> N;

		if ( M == N )
			break;

		if ( M > N )
		{
			cout << "Decrescente" << endl;
		}

		else
		{
			cout << "Crescente" << endl;
		}
	}

	return 0;
}
