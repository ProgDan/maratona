#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	for(int i = 0, n; i < T; i++){
		cin >> n;
		
		string s, a = "";
		bool b = 0;
		for(int j = 0; j < n; j++){
			cin >> s;
			
			if(j == 0 or a == s and b == 1){
				b = 1;
				a = s;			
			}
			else
				b = 0;
		}

		if(b)
			cout << a << endl;
		else
			cout << "ingles" << endl;
	}

	return 0;
}
