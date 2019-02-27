
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main ()
{
	int N, p1, p2, time;
	double r1, r2;

	//freopen ("in.txt", "r", stdin);

	cin >> N;

	while ( N-- )
	{
		cin >> p1 >> p2 >> r1 >> r2;

		/*
		time = log (p2 / p1) / log ( (100 + r1) / (100 + r2) );

		 if ( ceil(time) == time ) time = ceil (time) + 1;
		 else time = ceil (time);

		 if (time > 100) cout << "Mais de 1 seculo." << endl;

		 else cout << time << " anos." << endl;
		 */

		// This approach does not work because URI judge is a blockhead.




		// The approach implemented below is not only inefficient, but also pure nonsense. -_- But URI seems to like it. -_-


		time = 0;

		while ( p1 <= p2 )
		{
			p1 += p1 * ( r1 / 100 );
			p2 += p2 * ( r2 / 100 );

			time++;

			if ( time > 100 )
			{
				cout << "Mais de 1 seculo." << endl;
				break;
			}
		}


		if ( time <= 100 ) cout << time << " anos." << endl;


	}

	return 0;
}
