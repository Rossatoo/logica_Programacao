//Fazer um algoritmo que leia trinta n�meros reais armazenando-os em um vetor e ap�s escreva a posi��o de cada n�mero menor que zero desse vetor.

#include <conio.h>
#include <stdio.h>

main(){
	int i;
	float vetorA[30];
	
	//Leitura dos valores
	for(i=0; i<30; i++){
		printf("Digite o valor %d do vetor: ", i);
		scanf("%f", &vetorA[i]);
	}
	
	//Verificando e imprimindo os valores menores que zero
	printf("\n\ns�o menores que 0 os numeros das posicoes: : ");
	for(i=0; i<30; i++){
		if (vetorA[i] < 0){
			printf("%d|", i);
		}
	}
	
	
	getch();
}
