#include <bits/stdc++.h>
typedef long long int ll;
#define read() freopen("input.txt", "r", stdin)
using namespace std;

int main(void)
{
	string s;

	while(cin >> s){
		if(s == "-1")
			break;

		
		if(s[1] == 'x'){
			s.erase(s.begin(), s.begin() + 2);
			ll num = 0, len = s.length();
			for(int i = 0; i < len; i++){
				if(s[i] - '0'<= 9)
					num += (s[i] - '0') * pow(16, len - i -1);
				else
					num += (tolower(s[i]) - 'a' + 10) * pow(16, len - i -1);
			}
			cout << dec << num << endl;
		}
		else{
			stringstream ss(s);
			ll n;
			ss >> n;
			cout << hex << uppercase << "0x" << n << endl;
		}
	}

	return 0;
}
