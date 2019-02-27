
#include <iostream>
using namespace std;

int main()
{
	int N, num, sum, i;
	cin >> N;

	while ( N-- )
	{
		sum = 0;
		cin >> num;

		for ( i = 1; i < num; i++ )
		{
			if ( num % i == 0 )
			{
				sum += i;
			}
		}

		if ( sum == num )
		{
			cout << num << " eh perfeito" << endl;
		}

		else
		{
			cout << num << " nao eh perfeito" << endl;
		}
	}

	return 0;
}
