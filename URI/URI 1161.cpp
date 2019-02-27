
#include <iostream>
#include <cstdio>

using namespace std;

long long int fact_arr[21] = {0};

int main()
{
	int i, X, Y;

	fact_arr[0] = 1;

	for ( i = 1; i <= 20; i++ )
	{
		fact_arr[i] = fact_arr[i - 1] * i;
	}

	//freopen ("in.txt", "r", stdin);

	while ( scanf ( "%d %d", &X, &Y ) != EOF )
	{
		cout << fact_arr[X] + fact_arr[Y] << endl;
	}

	return 0;
}
