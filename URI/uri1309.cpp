#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
using namespace std;

int main(void)
{
	string a, b;

	while(cin >> a >> b){
		reverse(a.begin(), a.end());
		for(int i = 3; i < a.length(); i += 4)
			a.insert(i, ",");
		a.insert(a.length(), "$");

		reverse(a.begin(), a.end());
		if(b.length() < 2)
			b.insert(0, "0");

		cout << a << "." << b << endl;
	}

	return 0;
}
