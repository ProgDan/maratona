#include <bits/stdc++.h>
using namespace std;

int main()
{

	int x, y;
	cin >> x >> y;

	if ( y <= 2 ) cout << "nova" << endl;

	else if ( y >= 97 ) cout << "cheia" << endl;

	else if ( x < y && y <= 96 ) cout << "crescente" << endl;

	else cout << "minguante" << endl;

	return 0;
}
