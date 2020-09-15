/*Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D 
segundo a fórmula: DIFERENCA = (A * B - C * D).*/

#include<stdio.h>

int main(){
	//variaveis
	int a, b, c, d, dif;
	
	//entrada de dados
	printf("Informe o valor 1");
	scanf("%d", &a);
	printf("Informe o valor 2");
	scanf("%d", &b);
	printf("Informe o valor 3");
	scanf("%d", &c);
	printf("Informe o valor 4");
	scanf("%d", &d);
	
	//manipulação de dados
	dif = (a * b - c * d);
	
	//saida de dados
	printf("DIFERENCA = %d\n", dif);
}
