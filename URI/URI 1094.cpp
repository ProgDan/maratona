
#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

int main ()
{
	int N, num, coelhos = 0, ratos = 0, sapos = 0;
	double total = 0;;
	char ch;

	//freopen ("in.txt", "r", stdin);

	cin >> N;

	while ( N > 0 )
	{
		scanf ( "%d %c", &num, &ch );

		if ( ch == 'C' ) coelhos += num;

		else if ( ch == 'R' ) ratos += num;

		else sapos += num;

		total += num;
		N--;
	}

	cout << "Total: " << total << " cobaias" << endl;
	cout << "Total de coelhos: " << coelhos << endl;
	cout << "Total de ratos: " << ratos << endl;
	cout << "Total de sapos: " << sapos << endl;

	cout << fixed << setprecision ( 2 );

	cout << "Percentual de coelhos: " << ( coelhos / total ) * 100 << " %" << endl;
	cout << "Percentual de ratos: " << ( ratos / total ) * 100 << " %" << endl;
	cout << "Percentual de sapos: " << ( sapos / total ) * 100 << " %" << endl;

	return 0;
}
