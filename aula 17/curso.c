#include <stdio.h>
#include <string.h>

int main(void)
{
	char nome[50], curso[50];
	
	printf("====== IDENTIFICAÇÃO ACADÊMICA ======\n");
	
	printf("Nome do estudante: ");
	scanf("%49s", nome);
    printf("Código do curso(CC ou SI): ");
    scanf("%49s", curso);
    
    printf("=== RESULTADO ===\n");
    
    printf("Estudante: %s\n", nome);
    if(strcasecmp(curso, "CC") ==0){
        printf("Ciência da computação.\n");
    } else{
        printf("Sistemas de informação.\n");
    }
    printf("Caracteres no nome: %zu\n", strlen(nome));
    
    char mensagem[60] = "Olá, ";
    strcat(mensagem, nome);
    printf("%s!\n", mensagem);
	
	return 0;
}
