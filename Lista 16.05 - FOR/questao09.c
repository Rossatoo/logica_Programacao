/*Fa�a um programa que leia um n�mero n e imprima se ele e� primo ou n�o. (um n�mero primo tem apenas 2 divisores: 1 e ele mesmo! O n�mero 1 n�o � primo!!!)*/

#include <conio.h>
#include <stdio.h>

main(){
	int n, i, contador=0;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		if(n % i == 0){
			contador = contador + 1;
		}
		
		
	}
	
	if(contador == 2){
			printf("%d eh primo", n);
		}
		else{
			printf("%d nao eh primo", n);
		}
	getch();
}
