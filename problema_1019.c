#include <stdio.h>

int main (void)
{
    int H, Hora, Minuto, Segundo;
    scanf("%d", &H);
    Hora = H/3600;
    Minuto = (H-(Hora*3600)) / 60;
    Segundo = H-(Hora*3600)-(Minuto*60);

    printf ("%d:%d:%d\n", Hora, Minuto, Segundo);

    return 0;
}
