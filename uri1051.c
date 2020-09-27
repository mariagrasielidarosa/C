#include<stdio.h>

int main(){
	float salario, r;
	scanf("%f", &salario);
	if( salario > 0 && salario <= 2000.00){
		printf("Isento\n");
	}else
		if( salario > 2000.01 && salario <= 3000.00){
			r = (salario - 2000.00) * 0.08;
			printf("R$ %.2f\n", r);
		}else
		if( salario > 3000.01 && salario <= 4500.00){
			r = (salario - 3000.00) * 0.18 + (1000 * 0.08);;
			printf("R$ %.2f\n", r);
		}else{
			r = (salario - 4500)* 0.28 + (1500 * 0.18) + (1000 * 0.08);
			printf("R$ %.2f\n", r);
		}
	return 0;
}
