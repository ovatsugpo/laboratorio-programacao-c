#include <stdio.h>
#include <string.h>

int main(void)
{
	char produto[50], categoria[50];

	printf("=== CADASTRO DE PRODUTOS === \n");

	printf("Digite o produto: ");
	scanf("%49s", produto);
	printf("Digite a categoria(Hardware ou periférico): ");
	scanf("%49s", categoria);

	printf("=== RESUMO === \n");

	printf("Produto: %s\n", produto);
	printf("Caracteres: %zu\n", strlen(produto));
	if (strcasecmp(categoria, "HARDWARE") == 0) {
		printf("Hardware.\n");
	} else {
		printf("Periférico.\n");
	}
	char descricao[60] = "Descrição, Produto:  ";
	strcat(descricao, produto);
	printf("%s.\n", descricao);
    printf("Cadastro concluído."); 
	return 0;
}
