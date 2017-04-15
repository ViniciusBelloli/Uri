#include <stdio.h>

int main (void)
{
    int Dias, Ano, Mes, Dia;
    scanf("%d", &Dias);
    Ano = Dias/365;
    Mes = (Dias-(Ano*365)) / 30;
    Dia = Dias-(Ano*365)-(Mes*30);
    printf("%d ano(s)\n", Ano);
    printf("%d mes(es)\n", Mes);
    printf("%d dia(s)\n", Dia);

    return 0;
}
