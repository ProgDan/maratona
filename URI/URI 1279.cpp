
#include <bits/stdc++.h>
using namespace std;

string year;

bool leap_checker ( string year )
{
	int len = year.length();
	int cnt_trailing_zero = 0;
	int last_nonzero = 0, prev_of_last_nonzero = 0;

	for ( int i = len - 1; i >= 0; i-- )
	{
		if ( year[i] == '0' ) cnt_trailing_zero++;

		else
		{
			last_nonzero = year[i] - '0';

			if ( i - 1 >= 0 )
				prev_of_last_nonzero = year[i - 1] - '0';

			break;
		}
	}

	if ( cnt_trailing_zero >= 4 ) return true;

	if ( cnt_trailing_zero == 3 || cnt_trailing_zero == 1 )
	{
		if ( last_nonzero % 2 == 0 ) return true;
	}

	if ( cnt_trailing_zero == 2 || cnt_trailing_zero == 0 )
	{
		if ( ( prev_of_last_nonzero * 10 + last_nonzero ) % 4 == 0 ) return true;
	}

	return false;
}

bool divisibility_check_15 ( string year )
{
	int sum = 0;

	for ( unsigned i = 0; i < year.length(); i++ )
	{
		sum = ( sum + year[i] - '0' ) % 3;
	}

	char last = year[year.length() - 1];

	if ( !sum && ( last == '0' || last == '5' ) ) return true;

	return false;
}

bool divisibility_check_55 ( string year )
{
	int sum = 0;

	for ( unsigned i = 0; i < year.length(); i++ )
	{
		if ( i % 2 == 0 )
		{
			sum = ( sum + year[i] - '0' ) % 11;
		}

		else sum = ( sum - year[i] + '0' ) % 11;
	}

	char last = year[year.length() - 1];

	if ( !sum && ( last == '0' || last == '5' ) ) return true;

	return false;
}

int main()
{
	bool print_blank_line = false;

	while ( cin >> year )
	{
		if ( print_blank_line )
		{
			cout << endl;
		}

		print_blank_line = true;

		bool is_leap = leap_checker ( year );
		bool is_hulu = ( divisibility_check_15 ( year ) );
		bool is_bulu = ( is_leap && divisibility_check_55 ( year ) );

		if ( is_leap ) cout << "This is leap year." << endl;

		if ( is_hulu ) cout << "This is huluculu festival year." << endl;

		if ( is_bulu ) cout << "This is bulukulu festival year." << endl;

		if ( !is_leap && !is_hulu ) cout << "This is an ordinary year." << endl;
	}

	return 0;
}
