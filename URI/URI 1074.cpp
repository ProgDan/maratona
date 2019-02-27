
#include <iostream>
using namespace std;

int main()
{
	int N, i, num;
	cin >> N;

	for ( i = 0; i < N; i++ )
	{
		cin >> num;

		if ( num == 0 )
		{
			cout << "NULL" << endl;
		}

		else
		{
			if ( num % 2 )
			{
				cout << "ODD ";
			}

			else
			{
				cout << "EVEN ";
			}

			if ( num > 0 )
			{
				cout << "POSITIVE" << endl;
			}

			else
			{
				cout << "NEGATIVE" << endl;
			}
		}
	}

	return 0;
}
