/* a f�rmula para calcular a �rea de uma circunfer�ncia �: area = p . raio2. Considerando para este problema que p = 3.14159:
- Efetue o c�lculo da �rea, elevando o valor de raio ao quadrado e multiplicando por p. */
#include<stdio.h>

int  main(){
	//variaveis
 	double raio, area;
 	
 	//entrada de dados
 	printf("Informe o valor do raio");
 	scanf("%lf", &raio);
 	//manipula��o de dados
 	area = 3.14159 * raio * raio;
 	
 	//sa�da de dados
 	printf("A=%.4lf\n", area);
 
}

 
