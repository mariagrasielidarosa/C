/*Escreva um programa que leia o n�mero de um funcion�rio, seu n�mero de horas trabalhadas, o valor que recebe por hora e calcula o sal�rio desse funcion�rio. 
A seguir, mostre o n�mero e o sal�rio do funcion�rio, com duas casas decimais.*/

#include<stdio.h>
int main(){
	//variaveis
	int num, qtdHoras;
	float salario, valorHora;
	
	//entrada de dados
	printf("Informe o numero do funcionario");
	scanf("%d", &num);
	printf("Informe o numero de horas trabalhadas do funcionario");
	scanf("%d", &qtdHoras);
	printf("Informe o valor recebido por hora do funcionario");
	scanf("%f", &valorHora);
	
	//manipula��o de dados
	salario = qtdHoras * valorHora;
	
	//saida de dados
	printf("NUMBER = %d\n", num);
	printf("SALARY = U$ %.2f\n", salario);

}


