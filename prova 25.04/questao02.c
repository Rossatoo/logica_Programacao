/*Fazer um algoritmo que leia a nota final de um aluno e escreva se ele foi aprovado ou n�o (considerar nota final maior ou igual a seis para aprova��o)*/

#include <stdio.h>
#include <conio.h>

main(){
	float notaFinal;
	
	printf("Digite a nota final do aluno: ");
	scanf("%f", &notaFinal);
	
	if(notaFinal >= 6){
		printf("APROVADO!!");
	}
	else {
		printf("REPROVADO!!");
	}
	
	getch();
} 
