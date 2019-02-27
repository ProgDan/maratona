
#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main ()
{
	double num, sum = 0, command;
	int cnt = 0;
	bool flag = true;

	//freopen ("in.txt", "r", stdin);

	while ( 1 )
	{
		cin >> num;

		if ( num < 0 || num > 10 )
		{
			cout << "nota invalida" << endl;
		}

		else
		{
			cnt++;
			sum += num;
		}

		if ( cnt == 2 )
		{
			cout << fixed << setprecision ( 2 ) << "media = " << ( sum / 2 ) << endl;
			cnt = 0;
			sum = 0;
			flag = 0;
		}

		while ( flag == false )
		{
			cout << "novo calculo (1-sim 2-nao)" << endl;
			cin >> command;

			if ( command == 1 )
			{
				flag = true;
			}

			else if ( command == 2 )
			{
				flag = true;
				return 0;
			}

			else
			{
				flag = 0;
			}
		}
	}

	return 0;
}
