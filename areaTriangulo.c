#include <stdio.h>

main() {
	int valorBase, valorAltura, valorArea;
	
	printf("Digite o valor da base: ");
	scanf("%d", &valorBase);
	
	printf("Digite o valor da Altura: ");
	scanf("%d", &valorAltura);
	
	valorArea = (valorBase * valorAltura)/2;
	
	printf("O valor da area do triangulo eh: %d", valorArea);
	
	getch();
	
}
