#include <stdio.h>

// aprendendo a usar estrutura switch.

int main(){

    int dia;

    printf("Digite de 1 a 7:\n");
    scanf("%d", &dia);

    switch (dia)
    {
    case 1:
        printf("Segunda-feira\n");
        break;

    case 2:
        printf("Terça-feira\n");    
        break;
    
    case 3:
        printf("Quarta-feira\n");

    case 4:
        printf("Quinta-feira\n");
        break;
    
    case 5:
        printf("Sexta-feira\n");
        break;
    
    case 6:
        printf("Sabado\n");
        break;
    
    case 7:
        printf("Domingo\n");
        break;
    
    default:
        printf("Você não digitou um valor valido!\n");
        break;
    }

    return 0;
}
