/* Fa�a um programa que leia um n�mero e apresente a tabuada deste n�mero.*/

#include <stdio.h>
#include <conio.h>

main (){
	int i, num, tabuada;
	 printf("Digite um numero: ");
	 scanf("%d", &num);
	
	for(i=0; i<=10; i++){
		tabuada = num * i;
		printf("%d x %d = %d\n", num, i, tabuada);
	}
	getch();
}
