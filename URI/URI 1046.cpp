
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	cout << "O JOGO DUROU " << ( b - a + 23 ) % 24 + 1 << " HORA(S)" << endl;

	return 0;
}
