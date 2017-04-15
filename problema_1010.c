#include <stdio.h>

int main (void)
{
    int CP1, QP1, CP2, QP2;
    float TotPecas, VP1, VP2;
    scanf("%d %d %f", &CP1, &QP1, &VP1);
    scanf("%d %d %f", &CP2, &QP2, &VP2);
    TotPecas = (QP1 * VP1) + (QP2 * VP2);
    printf("VALOR A PAGAR: R$ %.2f\n", TotPecas);

    return 0;
}
