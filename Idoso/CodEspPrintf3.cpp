#include<stdlib.h> // Biblioteca do system()
#include<stdio.h>  // Biblioteca do printf()
#include<locale.h> // Biblioteca da fun��o setlocale() - Que serve para mudar a tabela de caracteres local do programa

// Fun��o principal do meu programa
int main(){
	// Chamada da Fun��o setlocale para mudar a tabela de caracteres de ASCII para ABNT
	setlocale(LC_ALL, "Portuguese");
	
	printf("A letra %c ", 'J');
	printf("pronucia-se %s%c%c%c", "Jota", '.', '\n', '\n');
	
	system("PAUSE");
	return 0;
}
