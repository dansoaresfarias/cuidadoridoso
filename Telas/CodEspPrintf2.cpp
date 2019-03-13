#include<stdlib.h> // Biblioteca do system()
#include<stdio.h>  // Biblioteca do printf()
#include<locale.h> // Biblioteca da função setlocale() - Que serve para mudar a tabela de caracteres local do programa

// Função principal do meu programa
int main(){
	// Chamada da Função setlocale para mudar a tabela de caracteres de ASCII para ABNT
	setlocale(LC_ALL, "Portuguese");
	
	printf("Os alunos do 1º periodos são %d.\n", 215);
	printf("Os alunos do 2º periodos são %d.\n", 110);
	printf("Os alunos do 3º periodos são %d.\n", 70);
	printf("Os alunos do 4º periodos são %d.\n\n\n", 20);
	
	printf("Os alunos do 1º periodos são %4d.\n", 21545);
	printf("Os alunos do 2º periodos são %4d.\n", 1100);
	printf("Os alunos do 3º periodos são %4d.\n", 170);
	printf("Os alunos do 4º periodos são %4d.\n\n\n", 20);
	
	printf("Os alunos do 1º periodos são %10d.\n", 21545);
	printf("Os alunos do 2º periodos são %40d.\n", 1100);
	printf("Os alunos do 3º periodos são %2d.\n", 170);
	printf("Os alunos do 4º periodos são %8d.\n\n\n", 20);
	
	system("PAUSE");
	return 0;
}
