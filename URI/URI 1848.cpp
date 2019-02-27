
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
	char str[10];
	int sum = 0, dig_1, dig_2, dig_3, scream = 0;;

	while ( 1 )
	{
		gets ( str );

		if ( strcmp ( str, "caw caw" ) == 0 )
		{
			scream++;
			cout << sum << endl;
			sum = 0;
		}

		else
		{
			if ( str[0] == '*' ) dig_3 = 1;

			else dig_3 = 0;

			if ( str[1] == '*' ) dig_2 = 1;

			else dig_2 = 0;

			if ( str[2] == '*' ) dig_1 = 1;

			else dig_1 = 0;

			sum += dig_1 * 1 + dig_2 * 2 + dig_3 * 4;
		}

		if ( scream == 3 )
		{
			return 0;
		}
	}
}
