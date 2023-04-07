#include <stdio.h>

int main(){
    double salario, a;
    scanf("%lf", &salario);
    if(salario <= 2000.0){
        printf("Isento\n");
    }
    else if(salario <= 3000.0){
        a = (salario - 2000.0)*0.08;
        printf("R$ %.2lf\n", a);
    }
    else if(salario <= 4500.0){
        a = (salario - 3000.0)*0.18 + (1000*0.08);
        printf("R$ %.2lf\n", a);
    } 
    else{
        a = (salario - 4500)*0.28 + (1500*0.18) + (1000*0.08);
        printf("R$ %.2lf\n", a);
    }
    return 0;
}
