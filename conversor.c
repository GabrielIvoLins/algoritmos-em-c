#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int pega(int r, int x, int cont){
    
    if(r == -1) 
        return cont;

    scanf("%d", &x);

    cont += x * pow(2,r);

    pega(r-1, x, cont);
}

void recu(int volta){

    if(volta == 4){

    printf("%d", pega(7, 0, 0));
    return;
    }

    printf("%d.", pega(7, 0, 0));

    recu(volta + 1);
}

int main(){

    recu(1);

    return 0;
}