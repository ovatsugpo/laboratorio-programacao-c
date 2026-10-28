#include <stdio.h>

int main(void)
{
    char palavra[50];
    int i;
    int contador = 0;
    printf("digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    for(i=0; palavra[i] != '\0' && palavra[i] != '\n' ; i++){
        contador++;
    }
    
  
    printf("A quantidade de caracteres digitados é: %d", contador);
    
    return 0;
}