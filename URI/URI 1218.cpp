
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);

    int size;
    int case_number = 1;
    bool first_case = true;

    while(cin >> size)
    {
        if(first_case == false)
        {
            cout << endl;
        }
        first_case = false;

        getchar();

        string str;
        getline ( cin, str );
        stringstream ss ( str );

        int num;
        char ch;

        int male   = 0;
        int female = 0;

        while(ss >> num >> ch)
        {
            if(num == size)
            {
                if     (ch == 'M') {male++;}
                else if(ch == 'F') {female++;}
            }
        }

        cout << "Caso " << case_number << ":" << endl;
        cout << "Pares Iguais: " << male+female << endl;
        cout << "F: " << female << endl;
        cout << "M: " << male << endl;

        case_number++;
    }

    return 0;
}
