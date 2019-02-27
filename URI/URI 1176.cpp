
#include <iostream>
using namespace std;

long long int fibonacci_array[61];

int main()
{
    int i, T, N;

    fibonacci_array[0] = 0;
    fibonacci_array[1] = 1;

    for (i = 2; i <= 60; i++)
    {
        fibonacci_array[i] = fibonacci_array[i-2] + fibonacci_array[i-1];
    }

    cin >> T;

    while (T--)
    {
        cin >> N;
        cout << "Fib(" << N << ") = " << fibonacci_array[N] << endl;
    }

    return 0;
}
