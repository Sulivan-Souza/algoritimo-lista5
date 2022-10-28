#include <stdio.h>

using namespace std;

int main()
{

        float idade, media,soma, quantidade;

        printf(" Digite a idade :");
        scanf("%f", &idade);
        soma =0;
        quantidade =0;

        while(idade >0)
        {
            soma = soma + idade;
            quantidade = quantidade + 1;
            printf("Digite a idade...");
            scanf("%f", &idade);
        }
        if(quantidade >0){
            media = soma/quantidade;
        }else {
            media = 0;
            }


        printf(" A Idade media e .......: %.2f", media);

}


