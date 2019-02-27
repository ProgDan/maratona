
#include <iostream>
#include <cmath>

using namespace std;

bool prime_check ( long long int n )
{
	long long int i;

	if ( n == 0 || n == 1 ) return false;

	for ( i = 2 ; i <= sqrt ( n ) ; i++ ) //No need for separate checking for 2.
	{
		if ( n % i == 0 )
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int N, num;
	cin >> N;

	while ( N-- )
	{
		cin >> num;

		if ( prime_check ( num ) ) cout << num << " eh primo" << endl;

		else cout << num << " nao eh primo" << endl;
	}

	return 0;
}
