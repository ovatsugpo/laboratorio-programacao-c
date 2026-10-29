#include <stdio.h>
#include <string.h>

int main(void)
{
	char produto[50], categoria[50];

	printf("=== CADASTRO DE USUÁRIOS === \n");

	printf("Digite seu nome: ");
	scanf("%49s", nome);
	printf("Digite seu perfil: ");
	scanf("%49s", perfil);

	printf("=== DADOS CADASTRADOS === \n");

	printf("Nome: %s\n", nome);
	printf("Quantidade de caracteres no nome: %zu\n", strlen(nome));
	if (strcasecmp(perfil, "ADMIN") == 0) {
		printf("Perfil de administrador.\n");
	} else {
		printf("Perfil diferente de administrador.\n");
	}
	char mensagem[60] = "Bem-vindo(a), ";
	strcat(mensagem, nome);
	printf("%s!\n", mensagem);
    printf("Cadastro realizado com sucesso."); 
	return 0;
}
