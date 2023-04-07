#include <stdio.h>
#include <stdlib.h>

int main(){


    int pc1, pc2;
    int npc1, npc2;
    double vpc1, vpc2;

    scanf("%d %d %lf", &pc1, &npc1, &vpc1);
    scanf("%d %d %lf", &pc2, &npc2, &vpc2);


    printf("VALOR A PAGAR: R$ %.2f\n", (npc1*vpc1) + (npc2*vpc2));



    return 0;
}
