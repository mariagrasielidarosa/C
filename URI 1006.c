/*Leia 3 valores, no caso, variáveis A, B e C, que são as três notas de um aluno. A seguir, calcule a média do aluno,
sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5.
Considere que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.*/
#include<stdio.h>

int main(){
	//variaveis
	double a, b, c, media;
	
	//entrada de dados
	printf("Informe a nota 1 do aluno");
	scanf("%lf", &a);
	printf("Informe a nota 2 do aluno");
	scanf("%lf", &b);
	printf("Informe a nota 3 do aluno");
	scanf("%lf", &c);
	
	//manipulação de dados
	media = (a * 2 + b * 3 + c * 5) / 10;
	
	//saida de dados
	printf("MEDIA = %.1lf\n", media);
}
