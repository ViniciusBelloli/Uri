#include <stdio.h>

int main(void) {
    int a, b, c, d, h, m, mn;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > c){
        h = (24 + b) - a;
        h = 23 - (a - c);
        m = (60 + d) - b;
        if (m > 60){
            mn = m % 60;
            h = h;
            m = mn;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
    }else if (a < c){
        if (b > d){
            h = 0;
        }else{
            h = c - a;
        }
        m = (60 + d) - b;
        if (m > 60){
            mn = m % 60;
            h = h;
            m = mn;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
    }else if (a == c){
        h = 24;
        m = d - b;
        if (m < 0){
            m = (60 - b) + d;
            h = h - 1;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
    }else if (a == c && b == d){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }else if (a == c && b < d){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }else if (a == c && b > d){
        m = (d - b) + 60;
        printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n", m);
    }

    return 0;
}
