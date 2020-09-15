/*Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua esta operação à variável PROD.
 A seguir mostre a variável PROD com mensagem correspondente. */
 
#include<stdio.h>

int main(){
	//variaveis
	int a, b, prod;
	
	//entrada de dados
	printf("Informe o primeiro valor");
	scanf("%d", &a);
	printf("Informe o segundo valor");
	scanf("%d", &b);
	
	//manipulação de dados
	prod = a * b;
	
	//saída de dados
	printf("PROD = %d\n", prod);
}
