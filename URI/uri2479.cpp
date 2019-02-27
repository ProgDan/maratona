#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
using namespace std;

int main(void)
{
	int n;
	cin >> n;

	char c, e;
	string s;
	set<string> p;
	int ps = 0, ng = 0;
	for(int i = 0; i < n; i++){
		cin >> c >> s;
		p.insert(s);

		if(c == '+')
			ps++;
		if(c == '-')
			ng++;
	}
	
	set<string>::iterator it;
	for(it = p.begin(); it != p.end(); it++)
		cout << *(it) << endl;
	
	cout << "Se comportaram: " << ps << " | Nao se comportaram: " << ng << endl;

	return 0;
}
