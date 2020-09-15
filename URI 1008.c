/*Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por hora e calcula o salário desse funcionário. 
A seguir, mostre o número e o salário do funcionário, com duas casas decimais.*/

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
	
	//manipulação de dados
	salario = qtdHoras * valorHora;
	
	//saida de dados
	printf("NUMBER = %d\n", num);
	printf("SALARY = U$ %.2f\n", salario);

}


