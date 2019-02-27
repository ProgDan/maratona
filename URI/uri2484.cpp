#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
#define write() freopen("output.txt", "w", stdout)
using namespace std;

int main(void)
{
	string s;

	while(cin >> s){
		int len = s.length();

		for(int i = 0; i < len; i++){
			for(int j = 0; j < i; j++)
				cout << " ";

			for(int j = 0; j < len - i; j++){
				cout << s[j];
				if(j < len - i - 1)
					cout << " ";
			}

			cout << endl;
		}
		cout << endl;
	}

	return 0;
}
