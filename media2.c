#include <stdio.h>

int main(){

    double A, B, C;
    int pesoa = 2;
    int pesob = 3;
    int pesoc = 5;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    printf("MEDIA = %.1lf\n", ((A*pesoa) + (B*pesob) + (C*pesoc))/10);

    return 0;
}
