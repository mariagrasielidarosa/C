/*Fa�a um programa que leia o nome de um vendedor, o seu sal�rio fixo e o total de vendas efetuadas por ele no m�s (em dinheiro). 
Sabendo que este vendedor ganha 15% de comiss�o sobre suas vendas efetuadas, informar o total a receber no final do m�s, com duas casas decimais. */

#include<stdio.h>

int main(){
	//variaveis
	char nome;
	double salarioF, tVendas, tReceber;
	
	//entrada de dados
	printf("Informe o seu nome");
	scanf("%s", &nome);
	printf("Informe o seu salario fixo");
	scanf("%lf", &salarioF);
	printf("Informe o total de vendas no m�s");
	scanf("%lf", &tVendas);
	
	//manipula��o de dados
	tReceber = salarioF + (tVendas * 0.15);
	
	//saida de dados
	printf("TOTAL = R$ %.2lf\n", tReceber);
}
