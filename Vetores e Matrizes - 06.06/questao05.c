/*Fazer um algoritmo que leia vinte n�meros inteiros armazenando-os em um vetor, a seguir, troque o conte�do da primeira posi��o do vetor com o conte�do da d�cima primeira posi��o, o conte�do da segunda posi��o com o da d�cima segunda,
e assim, sucessivamente at� trocar o conte�do da d�cima com o da vig�sima e escreva o vetor ap�s estas modifica��es. */

#include <conio.h>
#include <stdio.h>

main(){
	int i, vetorA[20], auxiliar, cont=10;
	
	//Leitura dos valores do vetor
	for(i=0; i<20; i++){
		printf("Digite o valor da posicao %d: ", i);
		scanf("%d", &vetorA[i]);
	}
	
	//Fazendo as modifica��es
	for(i=0; i<10; i++){
		
		auxiliar = vetorA[i];
		vetorA[i] = vetorA[cont];
		vetorA[cont] = auxiliar;
		cont++;
	}
	
	for(i=0; i<20; i++){
		printf("%d |", vetorA[i]);
	}
	
	getch();
}
