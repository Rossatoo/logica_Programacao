/*Imprima uma tabela de convers�o de polegadas para cent�metros, de 1 a 20. Considere que Polegada = Cent�metro * 2,54.*/

#include <conio.h>
#include <stdio.h>

main(){
	int i;
	float polegada;
	
	for(i=1; i<=20; i++){
		polegada = i * 2.54;
		
		printf	("%d x 2,54 = %.2f\n", i,polegada);
	}
	
	
	getch();
}
