#include <stdio.h>

main(){
	float distancia, tempo, veloc_media;
	
	printf("Entre com a distancia de km que o carro percorreu: ");
	scanf("%f", &distancia);
	
	printf("Entre com o tempo em horas que o carro levou: ");
	scanf("%f", &tempo);
	
	veloc_media = distancia / tempo;
	
	printf("A velocidade media em m/s do carro foi de: %f km/h", veloc_media);
	
	
	getch();
}
