#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
using namespace std;

int main(void)
{
	int T;
	cin >> T;
	
	char c;
	for(int i = 0, a, b; i < T; i++){
		cin >> a >> c >> b;

		if(a == b)
			cout << a * b << endl;
		else if(isupper(c))
			cout << b - a << endl;
		else
			cout << a + b << endl;
	}

	return 0;
}
