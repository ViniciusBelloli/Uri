#include <stdio.h>

int main (void){
    int n1, n2, n3, A, B, C;
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > n2){
        if (n1 >n3){
            A = n1;
            if (n2 > n3){
                B = n2;
                C = n3;
            }else{
                B = n3;
                C = n2;
            }
        }else{
            A = n3;
            B = n1;
            C = n2;
        }
    }else if (n2>n3){
        A = n2;
        if (n1>n3){
            B = n1;
            C = n3;
        }else{
            B = n3;
            C = n1;
        }
    }else{
        A = n3;
        B = n2;
        C = n1;
    }

    printf("%d\n", C);
    printf("%d\n", B);
    printf("%d\n\n", A);
    printf("%d\n", n1);
    printf("%d\n", n2);
    printf("%d\n", n3);

    return 0;
}
