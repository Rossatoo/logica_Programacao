/* Escreva um algoritmo para pesquisa de renda per capita que leia o valor da renda familiar e o n�mero de integrantes da fam�lia.
 Calcule o valor da renda per capita da fam�lia. 
F�rmula: Renda per capita = total da renda / integrantes */

#include <stdio.h>

main(){
	float valorRendaFamilia, numIntegrantes, valorRendaPerCapita;
	
	printf("Digite o valor da renda familiar: ");
	scanf("%f", &valorRendaFamilia);
	
	printf("Digite o numero de integrantes da familia: ");
	scanf("%f", &numIntegrantes);
	
	valorRendaPerCapita = valorRendaFamilia / numIntegrantes;
	
	printf("\nA renda per capita da familia = %f", valorRendaPerCapita);
	
	getch();
}
