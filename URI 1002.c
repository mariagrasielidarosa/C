/* a fórmula para calcular a área de uma circunferência é: area = p . raio2. Considerando para este problema que p = 3.14159:
- Efetue o cálculo da área, elevando o valor de raio ao quadrado e multiplicando por p. */
#include<stdio.h>

int  main(){
	//variaveis
 	double raio, area;
 	
 	//entrada de dados
 	printf("Informe o valor do raio");
 	scanf("%lf", &raio);
 	//manipulação de dados
 	area = 3.14159 * raio * raio;
 	
 	//saída de dados
 	printf("A=%.4lf\n", area);
 
}

 
