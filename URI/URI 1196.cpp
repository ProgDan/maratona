
#include <bits/stdc++.h>
using namespace std;

string str = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

int main()
{
	char ch;

	while ( scanf ( "%c", &ch ) != EOF )
	{
		if ( ch == ' ' ) cout << " ";

		else if ( ch == '\n' ) cout << "\n";

		else cout << str[str.find ( ch ) - 1];
	}

	return 0;
}
