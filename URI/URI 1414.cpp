
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, N;

    while(cin >> T >> N and T)
    {
    	int total = 0, pts;
    	string name;

	    while(T--)
        {
	    	cin >> name >> pts;
	    	total += pts;
	    }

	    cout << (N * 3) - total << endl;
	}

    return 0;
}

