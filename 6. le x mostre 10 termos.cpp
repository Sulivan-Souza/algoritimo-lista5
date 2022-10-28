#include <stdio.h>

#define termos 10


int main()
{
    float  x, soma, sinal;
    int i;

    printf("Digite um numero\n");
    scanf("%f", &x);
    soma = 0;
    sinal = 1;
    for ( i=1; i<=termos; i++){
        soma = soma + sinal * x / i;
        sinal = sinal * -1;


    }
printf("soma do numeros =%.2f", soma);
    return 0;
}
