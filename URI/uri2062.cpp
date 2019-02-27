#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
using namespace std;

string change(string s)
{
	if(s[0] == 'O' and s[1] == 'B')
		return "OBI";
	else if(s[0] == 'U' and s[1] == 'R')
		return "URI";
	else
		return s;
}

int main(void)
{
	int T;
	cin >> T;
	cin.ignore();
	
	vector<string> v;
	string s;
	for(int i = 0; i < T; i++){
		cin >> s;

	 	if(s.length() == 3)
			v.push_back(change(s));
		else
			v.push_back(s);
	}

	for(int i = 0; i < T; i++){
		cout << v[i];
		if(i < T - 1)
			cout << " ";
	}
	cout << endl;

	return 0;
}
