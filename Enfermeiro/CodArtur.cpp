#include<stdlib.h> // Biblioteca do system()
#include<stdio.h>  // Biblioteca do printf()
#include<locale.h> // Biblioteca da fun��o setlocale() - Que serve para mudar a tabela de caracteres local do programa

// Fun��o principal do meu programa
int main(){
	// Chamada da Fun��o setlocale para mudar a tabela de caracteres de ASCII para ABNT
	setlocale(LC_ALL, "Portuguese");
	// Declarando uma vari�vel
	int idade, ano, nasceu;
	printf("Digite o ano atual: \n");
	scanf("%i", &ano);
	printf("Digite o ano em que nasceu: \n");
	scanf("%i", &nasceu);
	printf("Digite o ano atual: \n");
	scanf("%i", &ano);
	printf("Digite o ano em que nasceu: \n");
	scanf("%i", &nasceu);
	printf("Digite o ano atual: \n");
	scanf("%i", &ano);
	printf("Digite o ano em que nasceu: \n");
	scanf("%i", &nasceu);
	
	idade = ano - nasceu;
	printf("Sua idade � %i.\n\n", idade);
	
	system("PAUSE");
	return 0;
}
