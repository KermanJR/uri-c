#include <stdio.h>

int main(){

    char nome[50];
    double salfixo, totalvendas;
    double comissao = 0.15;


    scanf("%s", &nome);
    scanf("%lf", &salfixo);
    scanf("%lf", &totalvendas);

    printf("TOTAL = R$ %.2lf\n", salfixo+(comissao*totalvendas));

    return 0;

}
