/*Fa�a um programa que leia 3 valores em vari�veis distintas, armazene a soma das duas primeiras em uma nova vari�vel
e o produto das duas �ltimas em outra, e mostre como resultado o produto das duas novas vari�veis.*/


#include <stdio.h>

main(){
	float num1, num2, num3, soma, produto, resultado;
	
	printf("Digite o valor do primeiro numero: ");
	scanf("%f", &num1);

	printf("Digite o valor do segundo numero: ");
	scanf("%f", &num2);
	
	printf("Digite o valor do terceiro numero: ");
	scanf("%f", &num3);
	
	soma = num1 + num2;
	produto = num2 * num3;
	
	resultado = soma * produto;
	printf("\nA soma dos dois primeiros valores vezes o produto dos dois ultimos valores = %f", resultado);
	
	getch();
}
