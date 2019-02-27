
#include <iostream>
#include <cstdio>

using namespace std;

struct wall
{
	int x;
	int low_y;
	int high_y;
};

int main()
{
	//freopen ("in.txt", "r", stdin);

	int N, i;
	double y, target_x, target_low_y, target_high_y;
	double point;

	cin >> N;

	struct wall Walls[N];

	for ( i = 0; i < N; i++ )
	{
		cin >> Walls[i].x >> Walls[i].low_y >> Walls[i].high_y;
	}

	cin >> target_x >> target_low_y >> target_high_y;

	for ( y = target_low_y; y <= target_high_y; y++ )
	{
		bool flag = true;

		for ( i = 0; i < N; i++ )
		{
			point = ( Walls[i].x ) * ( y / target_x );

			if ( point < Walls[i].low_y || point > Walls[i].high_y )
			{
				flag = false;
				break;
			}
		}

		if ( flag == true )
		{
			cout << "Y" << endl;
			return 0;
		}
	}

	cout << "N" << endl;

	return 0;
}
