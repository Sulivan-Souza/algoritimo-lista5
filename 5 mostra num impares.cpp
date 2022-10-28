#include <iostream>

using namespace std;

int main()
{
        int n,num;
        printf("Digite um numero: ......:");// valor inicial a ser impresso
        scanf("%d", &n);// gravando na memoria

            // se n é ímpar, soma 2 para encontrar o próximo ímpar, se for par, soma 1
            num = n + 1 + (n % 2); // n % 2 é o resto da divisão por 2, então se for ímpar será 1, se for par será zero
            // assim, num é o primeiro número ímpar imediatamente depois de n
            for (int i = 0; i < n; i++) { // repito o for n vezes
            printf("%d\n", num);
            num += 2; // como num é ímpar, posso somar 2 para ir para o próximo impar
            }
    return 0;
}