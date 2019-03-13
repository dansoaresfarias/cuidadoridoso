#include<stdlib.h> // Biblioteca do system()
#include<stdio.h>  // Biblioteca do printf()
#include<locale.h> // Biblioteca da fun��o setlocale() - Que serve para mudar a tabela de caracteres local do programa

// Fun��o principal do meu programa
int main(){
	// Chamada da Fun��o setlocale para mudar a tabela de caracteres de ASCII para ABNT
	setlocale(LC_ALL, "Portuguese");
	
	printf("Os alunos do 1� periodos s�o %d.\n", 215);
	printf("Os alunos do 2� periodos s�o %d.\n", 110);
	printf("Os alunos do 3� periodos s�o %d.\n", 70);
	printf("Os alunos do 4� periodos s�o %d.\n\n\n", 20);
	
	printf("Os alunos do 1� periodos s�o %4d.\n", 21545);
	printf("Os alunos do 2� periodos s�o %4d.\n", 1100);
	printf("Os alunos do 3� periodos s�o %4d.\n", 170);
	printf("Os alunos do 4� periodos s�o %4d.\n\n\n", 20);
	
	printf("Os alunos do 1� periodos s�o %10d.\n", 21545);
	printf("Os alunos do 2� periodos s�o %40d.\n", 1100);
	printf("Os alunos do 3� periodos s�o %2d.\n", 170);
	printf("Os alunos do 4� periodos s�o %8d.\n\n\n", 20);
	
	system("PAUSE");
	return 0;
}
