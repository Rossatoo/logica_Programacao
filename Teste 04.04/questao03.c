/*Escrever um algoritmo para ler as dimens�es de uma cozinha (comprimento, largura e altura),
 calcular e escrever a quantidade de caixas de azulejos para azulejar todas as paredes (considere que n�o ser� descontada a �rea ocupada por portas e janelas).
Cada caixa de azulejos possui 1,5 metros quadrados.
F�rmula da �rea do ret�ngulo = base * altura*/

#include <stdio.h>

main(){
	float comprimento, largura, altura, area1, area2, area3, areaTotal, quantCaixas;
	
	printf("Digite o comprimento da cozinha: ");
	scanf("%f", &comprimento);
	
	printf("Digite o valor da largura da cozinha: ");
	scanf("%f", &largura);
	
	printf("Digite o valor da altura da cozinha: ");
	scanf("%f", &altura);
	
	area1 = (comprimento * altura) * 2;
	area2 = (largura * altura) * 2;
	area3 = (largura * comprimento) * 2;
	
	areaTotal = area1 + area2 + area3;
	
	quantCaixas = areaTotal/1.5;
	
	printf("Ser�o necessarias %f caixas de azulejos", quantCaixas);
	
	
	getch();
}
