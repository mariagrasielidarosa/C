/*Leia 2 valores inteiros e armazene-os nas vari�veis A e B. Efetue a soma de A e B 
atribuindo o seu resultado na vari�vel X. Imprima X conforme exemplo apresentado abaixo. 
N�o apresente mensagem alguma al�m daquilo que est� sendo especificado e n�o esque�a de 
imprimir o fim de linha ap�s o resultado, caso contr�rio, voc� receber� "Presentation Error". */

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
	printf("X = %d\n", soma);
	
	
}
