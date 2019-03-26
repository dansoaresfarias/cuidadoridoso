#include<stdlib.h> // Biblioteca do system()
#include<stdio.h>  // Biblioteca do printf()
#include<locale.h> // Biblioteca da função setlocale() - Que serve para mudar a tabela de caracteres local do programa

// Função principal do meu programa
int main(){
	// Chamada da Função setlocale para mudar a tabela de caracteres de ASCII para ABNT
	setlocale(LC_ALL, "Portuguese");
	// Declarando uma variável
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
	printf("Sua idade é %i.\n\n", idade);
	
	system("PAUSE");
	return 0;
}
