#include <stdio.h>

int main (void)
{
    double R, Raio, Pi = 3.14159;
    scanf("%lf", &R);
    Raio = Pi * (R * R);
    printf("A=%.4lf\n", Raio);

    return 0;
}
