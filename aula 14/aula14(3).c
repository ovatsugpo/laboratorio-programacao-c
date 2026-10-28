#include <stdio.h>

int main(void)
{
   int numeros[3][3] = {
       {10, 20, 30},
       {40, 50, 60},
       {70, 80, 90}
   };
   int i,j;
   int soma = 0;
   
   for(i=0; i<3; i++){
       for(j=0; j<3; j++){
           soma += numeros[i][j];
       }
       
   }
    printf("%d", soma);
    return 0;
}