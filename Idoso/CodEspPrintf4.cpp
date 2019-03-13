#include<stdlib.h> // Biblioteca do system()
#include<stdio.h>  // Biblioteca do printf()
#include<locale.h> // Biblioteca da função setlocale() - Que serve para mudar a tabela de caracteres local do programa

// Função principal do meu programa
int main(){
	// Chamada da Função setlocale para mudar a tabela de caracteres de ASCII para ABNT
	setlocale(LC_ALL, "Portuguese");
	
	printf("%s está a %d milhões de milhas do sol.\n\n", "Venus", 67);
	
	system("PAUSE");
	return 0;
}
