#include <bits/stdc++.h>
#define read() freopen("input.txt", "r", stdin)
using namespace std;

int main(void)
{
	int a, b, c;

	while(cin >> a >> b >> c){
		if((a and !b and !c) or (!a and b and c))
			cout << "A" << endl;
		else if((!a and b and !c) or (a and !b and c))
			cout << "B" << endl;
		else if((a and b and !c) or (!a and !b and c))
			cout << "C" << endl;
		else
			cout << "*" << endl;
	}

	return 0;
}
