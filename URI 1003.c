/*Leia dois valores inteiros, no caso para vari�veis A e B. A seguir, calcule a soma entre
elas e atribua � vari�vel SOMA. A seguir escrever o valor desta vari�vel. */

#include<stdio.h>

int main(){
	//variaveis
	int a, b, soma;
	
	//entrada de dados
	printf("Informe o valor de A");
	scanf("%d", &a);
	printf("Informe o valor de B");
	scanf("%d", &b);
	
	//manipula��o de dados
	soma = a + b;
	
	//saida de dados
	printf("SOMA = %d\n", soma);
}
