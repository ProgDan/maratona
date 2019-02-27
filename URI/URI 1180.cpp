
#include <iostream>
using namespace std;

int main()
{
	int N, num, i, lowest, pos = 0;
	cin >> N;

	cin >> lowest;

	for ( i = 1; i < N; i++ )
	{
		cin >> num;

		if ( num < lowest )
		{
			lowest = num;
			pos = i;
		}
	}

	cout << "Menor valor: " << lowest << endl;
	cout << "Posicao: " << pos << endl;

	return 0;
}
