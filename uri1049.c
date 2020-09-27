/*Prof. Ivan L. Suptitz (21/09/2020)*/

#include <stdio.h>
#include <string.h> //para poder usar strcmp

int main(){
	char nome1[50], nome2[50], nome3[50];  
	
	//printf("Informe o filo: ");
	scanf("%s", &nome1);
	
	//printf("Informe a classe: ");
	scanf("%s", &nome2);	
	
	//printf("Informe a ordem: ");
	scanf("%s", &nome3);
	
	if(strcmp(nome1, "vertebrado") == 0)
		if(strcmp(nome2, "ave") == 0)
			if(strcmp(nome3, "carnivoro") == 0)
				printf("aguia\n");
			else//onivoro
				printf("pomba\n");
		else//mamifero
			if(strcmp(nome3, "onivoro") == 0)
				printf("homem\n");
			else//herbivoro
				printf("vaca\n");
		
	else//invertebrado
		if(strcmp(nome2 , "inseto") == 0)
			if(strcmp(nome3, "hematofago") == 0)
				printf("pulga\n");
			else//herbivoro
				printf("lagarta\n");
		else//anelideo
			if(strcmp(nome3, "hematofago") == 0)
				printf("sanguessuga\n");
			else//onivoro
				printf("minhoca\n");				
	
	return 0;
}
