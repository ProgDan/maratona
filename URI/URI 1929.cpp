
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int arr[4];

	cin >> arr[0];
	cin >> arr[1];
	cin >> arr[2];
	cin >> arr[3];

	sort ( begin ( arr ), end ( arr ) );

	if ( ( arr[2] < arr[0] + arr[1] ) || ( arr[3] < arr[1] + arr[2] ) ) cout << 'S' << endl;

	else cout << 'N' << endl;

	return 0;
}
