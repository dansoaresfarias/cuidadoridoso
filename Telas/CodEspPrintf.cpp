#include<stdlib.h> // Biblioteca do system()
#include<stdio.h>  // Biblioteca do printf()
#include<locale.h> // Biblioteca da fun��o setlocale() - Que serve para mudar a tabela de caracteres local do programa

// Fun��o principal do meu programa
int main(){
	// Chamada da Fun��o setlocale para mudar a tabela de caracteres de ASCII para ABNT
	setlocale(LC_ALL, "Portuguese");
	// Declarando uma vari�vel
	int x;
	// Atribuindo uma valor para a vari�vel
	x = 40;
	printf("O valor armazenado em x � %d\n\n\n", x);
	system("PAUSE");
	return 0;
}
