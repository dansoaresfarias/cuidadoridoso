#include<stdlib.h> // Biblioteca do system()
#include<stdio.h>  // Biblioteca do printf()
#include<locale.h> // Biblioteca da fun��o setlocale() - Que serve para mudar a tabela de caracteres local do programa

// Fun��o principal do meu programa
int main(){
	// Chamada da Fun��o setlocale para mudar a tabela de caracteres de ASCII para ABNT
	setlocale(LC_ALL, "Portuguese");
	
	printf("%s est� a %d milh�es de milhas do sol.\n\n", "Venus", 67);
	
	system("PAUSE");
	return 0;
}
