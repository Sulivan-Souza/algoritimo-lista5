#include <stdio.h>

int fatorial(int n){
   int aux = n - 1;

   while(aux > 1){
      n = n * aux;
      aux--;
   }

   return n;
}

int main(){
   int resultado;
   int n;

   printf("Digite o numero a ser fatorado:\n");
   scanf("%d", &n);
   resultado = fatorial(n);
   printf("%d", resultado);
}
