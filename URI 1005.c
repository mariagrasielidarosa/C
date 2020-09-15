/*Leia 2 valores de ponto flutuante de dupla precisão A e B, que correspondem a 2 notas de um aluno. 
A seguir, calcule a média do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma dos pesos portanto é 11).
Assuma que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.*/

#include<stdio.h>

int main(){
	//variaveis
	double n1, n2, media;
	
	//entrada de dados
	printf("Informe a nota 1 do aluno");
	scanf("%lf", &n1);
	printf("Informe a nota 2 do aluno");
	scanf("%lf", &n2);
	
	//manipulação de dados
	media = (n1 * 3.5 + n2 * 7.5) / 11;
	
	//saida de dados
	printf("MEDIA = %.5lf\n", media);
}
