#include <stdio.h>

using namespace std;

int main()
{
    int num, soma , cont =0;


    while (cont  < 10)
    {
        printf("Digite os numero............: ");
    scanf("%d", &num);

    soma = soma + num;
    cont ++;
    }
     printf("soma dos numeros ...........: %d", soma);

    return 0;
}
