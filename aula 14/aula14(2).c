#include <stdio.h>

int main(void)
{
   int numeros[2][2];
   int i,j;
   
   
   for(i=0; i<2; i++){
       for(j=0; j<2; j++){
           scanf("%d ", &numeros[i][j]);
       }
       
   }
  
    for(i=0; i<2; i++){
       for(j=0; j<2; j++){
           printf("%d ", numeros[i][j]);
       }
       printf("\n");
   }
  
    return 0;
}