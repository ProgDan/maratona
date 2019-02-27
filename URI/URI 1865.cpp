
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
	char name[100];
	int N, force;

	//freopen ("in.txt", "r", stdin);

	cin >> N;

	while ( N-- )
	{
		cin >> name;
		cin >> force;

		if ( strcmp ( name, "Thor" ) ) cout << 'N' << endl;

		else cout << 'Y' << endl;
	}
}
