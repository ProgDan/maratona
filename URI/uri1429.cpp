#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
using namespace std;

int fact(int n)
{
	if(n == 0)
		return 1;
	return n * fact(n - 1);
}

int main(void)
{
	string s;

	while(cin >> s){
		if(s == "0")
			break;

		int sum = 0, len = s.length();
		for(int i = 0; i < len; i++)
			sum += (s[i] - '0') * fact(len - i);

		cout << sum << endl;
	}
	
	return 0;
}
