#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	int i, odd = 0, even = 0, pos = 0, neg = 0, num;

	//freopen ("in.txt", "r", stdin);

	for ( i = 0; i < 5; i++ )
	{
		cin >> num;

		if ( num % 2 == 0 ) even++;

		else odd++;

		if ( num > 0 ) pos++;

		if ( num < 0 ) neg++;
	}

	cout << even << " valor(es) par(es)" << endl;
	cout << odd << " valor(es) impar(es)" << endl;
	cout << pos << " valor(es) positivo(s)" << endl;
	cout << neg << " valor(es) negativo(s)" << endl;
}
