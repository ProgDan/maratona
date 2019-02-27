#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
using namespace std;

bool Pass(string s)
{
	if(s.length() < 6 || s.length() > 32)
		return 0;
	
	bool u = 0, l = 0, d = 0, sp = 1;
	for(int i = 0; i < s.length(); i++){
		if(isupper(s[i]))
			u = 1;
		if(islower(s[i]))
			l = 1;
		if(isdigit(s[i]))
			d = 1;
		if(!isupper(s[i]) and !islower(s[i]) and !isdigit(s[i]))
			sp = 0;
	}

	if(u and l and d and sp)
		return 1;
	else
		return 0;
}

int main(void)
{
	string s;

	while(getline(cin, s)){
		if(Pass(s))
			cout << "Senha valida." << endl;
		else
			cout << "Senha invalida." << endl;
	}

	return 0;
}
