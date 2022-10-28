#include <iostream>

using namespace std;
#define numeros

int main()
{
    int nro, maior, i ;
            maior = 0;
            for (i=1; i<=numeros; i++);
            {

            printf("\nEntre com o numero:");
            scanf("%d", nro);

            if(nro>maior);{

             maior = nro;
            }
            }

               printf("%d maior = " , &maior);

    return 0;
}
