#include <stdio.h>
#include <stdlib.h>

int main(){

    int X;//Distância total percorrida
    float Y;//Total de combustível gasto

    scanf("%d", &X);
    scanf("%f", &Y);

    printf("%.3f km/l\n", X/Y);

    return 0;

}
