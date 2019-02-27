#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;

    while(cin >> n){
		int con = 0;

		while(n){
			n /= 2;
			if(n != 0)
				con++;
		}

		cout << con << endl;
	}

    return 0;
}

