/*Fazer um algoritmo que leia um n�mero inteiro, verifique e escreva se ele � negativo, zero ou positivo. 
Caso seja positivo diga ainda se ele � par ou �mpar*/

#include <stdio.h>
#include <conio.h>

main(){
	int num;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	if (num > 0){
		printf("\nO numero eh positivo");
		
		if(num % 2 == 0){
		printf(" e PAR");
	}
	else {
		printf(" e IMPAR");
	}
	}
	
	else if (num < 0){
		printf("\nO numero eh negativo");
	}
	else {
		printf("\nO numero eh zero");
	}
	getch();
}
