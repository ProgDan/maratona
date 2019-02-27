
#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	double  score, cnt = 0, sum = 0;

	while ( 1 )
	{
		cin >> score;

		if ( score < 0 || score > 10 )
		{
			cout << "nota invalida" << endl;
		}

		else
		{
			cnt++;
			sum += score;

			if ( cnt == 2 )
			{
				cout << "media = " << ( sum / 2 ) << endl;
				break;
			}
		}
	}

	return 0;
}
