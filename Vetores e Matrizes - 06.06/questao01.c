/* Fazer um algoritmo que leia dez números inteiros armazenando-os em um vetor e escreva primeiramente todos os números pares lidos e após todos os ímpares. Exemplo:
a. lê: |7|40|3|9|21|0|63|31|7|22|
b. escreve: |40|0|22|7|3|9|21|63|31|7|
*/

#include <stdio.h>
#include <conio.h>

main(){
	int i, vetorA[10], contP=0, contI=0;
	
	for(i=0; i<10; i++){
		printf("Digite o valor %d\n", i);
		scanf("%d", &vetorA[i]);
 
	}
	
		if(vetorA[i] % 2 == 0){
			printf("%d", vetorA[i]);
		}
		else {
			printf("%d", vetorA[i]);	
		}
		

	
	getch();
}
