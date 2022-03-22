#include <stdio.h>

main(){
	int x;
	float y;
	char z;
	
	printf("Entre com uma valor para x: ");
	scanf("%d", &x);
	fflush(stdin);
	
	printf("Entre com um valor para y: ");
	scanf("%f", &y);
	fflush(stdin);
	
	printf("Entre com um valor para z: \n\n");
	scanf("%c" ,&z);
	fflush(stdin);
	
	printf("as variaveis sao: x = %d\n y = %f\n z = %c" ,x,y,z);
	
	getch(); 
	
}
