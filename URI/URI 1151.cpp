
#include <iostream>
using namespace std;

static int f1 = 0;
static int f2 = 1;

int fibo ()
{
	int temp = f2;
	f2 = f1 + f2;
	f1 = temp;

	return f1;
}

int main ()
{
	int N, i;

	cin >> N;

	cout << 0 ;

	for ( i = 1; i < N; i++ )
	{
		cout << " " << fibo();
	}

	cout << endl;

	return 0;
}
