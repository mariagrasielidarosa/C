/*Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua esta opera��o � vari�vel PROD.
 A seguir mostre a vari�vel PROD com mensagem correspondente. */
 
#include<stdio.h>

int main(){
	//variaveis
	int a, b, prod;
	
	//entrada de dados
	printf("Informe o primeiro valor");
	scanf("%d", &a);
	printf("Informe o segundo valor");
	scanf("%d", &b);
	
	//manipula��o de dados
	prod = a * b;
	
	//sa�da de dados
	printf("PROD = %d\n", prod);
}
