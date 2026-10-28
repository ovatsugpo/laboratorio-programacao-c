
#include <stdio.h>

int main(void)
{
   int i, numeros[5];
   for(i=0; i < 5; i++){
       printf("Elemento %d\n", i);
       scanf("%d", &numeros[i]);
   }
   
   printf("\nValores pares armazenados:\n");
   
   for(i=0; i<5; i++){
       if(numeros[i] % 2 == 0 && i % 2 ==0){
           printf("%d\n", numeros[i]);
       }
   }
   

    return 0;
}