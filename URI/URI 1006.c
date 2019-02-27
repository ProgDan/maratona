
#include <stdio.h>

int main()
{
    double a, b, c;
    scanf ( "%lf %lf %lf", &a, &b, &c );

    printf ( "MEDIA = %.1lf\n", ( 2 * a + 3 * b + 5 * c ) / ( 2 + 3 + 5 ) );

    return 0;
}
