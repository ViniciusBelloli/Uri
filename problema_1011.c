#include <stdio.h>

int main (void)
{
    double Pi = 3.14159, R, Volume;
    scanf("%lf", &R);
    Volume = (4/3.0) * Pi * (R * R * R);
    printf("VOLUME = %.3lf\n", Volume);

    return 0;
}
