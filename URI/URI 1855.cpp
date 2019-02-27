
#include <bits/stdc++.h>
using namespace std;

int YES = 1, NO = 0;
struct point
{
	char command;
	int visited;
};

int main()
{
	//freopen ( "in.txt", "r", stdin );

	int row, column, i, j;
	char direction;
	cin >> column >> row;
	struct point map[row][column];

	for ( i = 0; i < row; i++ )
	{
		for ( j = 0; j < column; j++ )
		{
			cin >> map[i][j].command;
			map[i][j].visited = NO;
		}
	}

	if ( map[0][0].command == '.' )
	{
		cout << "!" << endl;
		return 0;
	}

	i = 0;
	j = 0;

	while ( i >= 0 && i < row && j >= 0 && j < column )
	{
		if ( map[i][j].visited == YES )
		{
			cout << "!" << endl;
			return 0;
		}

		map[i][j].visited = YES;

		if ( map[i][j].command == '*' )
		{
			cout << "*" << endl;
			return 0;
		}

		if ( map[i][j].command != '.' )
		{
			direction = map[i][j].command;
		}

		if ( direction == '>' )
		{
			j++;
		}

		else if ( direction == '<' )
		{
			j--;
		}

		else if ( direction == '^' )
		{
			i--;
		}

		else if ( direction == 'v' )
		{
			i++;
		}

	}

	cout << "!" << endl;
	return 0;
}
