#include<stdio.h>

int main(){
	float salario, salarioNovo, reajuste, per;
	scanf("%f", &salario);
	if (salario > 0 && salario <= 400.00){
		reajuste = salario * 0.15;
		salarioNovo = salario + reajuste;
		per = 0.15 * 100;
	}else if(salario >= 400.01 && salario <= 800.00){
		reajuste = salario * 0.12;
		salarioNovo = salario + reajuste;
		per = 0.12 * 100;
	}else if(salario >= 800.01 && salario <= 1200.00){
		reajuste = salario * 0.10;
		salarioNovo = salario + reajuste;
		per = 0.10 * 100;
	}else if(salario >= 1200.01 && salario <= 2000.00){
		reajuste = salario * 0.07;
		salarioNovo = salario + reajuste;
		per = 0.07 * 100;
	}else if(salario > 2000.00){
		reajuste = salario * 0.04;
		salarioNovo = salario + reajuste;
		per = 0.04 * 100;
	}
	printf("Novo salario: %.2f\n", salarioNovo);
	printf("Reajuste ganho: %.2f\n", reajuste);
	printf("Em percentual: %.0f %%\n", per);
	
}
