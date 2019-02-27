#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
using namespace std;

int main(void)
{
	read();
	map<string, string> m;
	string a, b;
	while(getline(cin, a)){
		b = a;
		for(int i = 0; i < b.length(); i++)
			b[i] = tolower(b[i]);
		m[b] = a;
	}

	map<string, string>::iterator it;
	it = m.end();
	it--;
	cout << it->second << endl;

	return 0;
}
