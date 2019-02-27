
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int l, w, r1, r2, x, y, R;

	while(cin >> l >> w >> r1 >> r2 and (l or w or r1 or r2))
	{
		if(2 * r1 > min(l, w) or 2 * r2 > min(l, w))
		{
			cout << "N" << endl;
			continue;
		}

		x = l - r1 - r2;
		y = w - r1 - r2;
		R = r1 + r2;

		if (x * x + y * y < R * R)
		{
			cout << "N" << endl;
			continue;
		}

		cout << "S" << endl;
	}

	return 0;
}
