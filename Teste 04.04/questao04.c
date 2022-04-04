/* Um motorista de taxi deseja calcular o rendimento de seu carro na pra�a. Sabendo-se que o pre�o do combust�vel � de R$6,90, escreva um algoritmo para
 ler a marca��o do od�metro (marcador de quilometragem) no in�cio do dia, a marca��o no final do dia, o n�mero de litros de combust�vel gasto e o valor total (R$) recebido 
 dos passageiros. Calcule e escreva a m�dia do consumo em Km/l e o lucro l�quido do dia.

F�rmulas: Total quilometragem =  marca��o od�metro final do dia - marca��o od�metro inicio do dia 

M�dia do consumo = Total quilometragem/ quantidade de combust�vel gasto

Lucro do dia = Valor total recebido - (quantidade de combust�vel gasto * 6,90) */ 

#include <stdio.h>

main(){
	float odometroInicio, odometroFinal, combustivelGasto, valorRecebidoPassageiros, totalQuilometragem, mediaConsumo, lucroDia;
	
	printf("Digite a marcacao do odometro no inicio do dia: ");
	scanf("%f", &odometroInicio);
	
	printf("Digite a marcacao do odometro no final do dia: ");
	scanf("%f", &odometroFinal);
	
	printf("Digite o numero de litros de combustivel gasto: ");
	scanf("%f", &combustivelGasto);
	
	printf("Digite o valor total recebido dos passageiros: ");
	scanf("%f", &valorRecebidoPassageiros);
	
	totalQuilometragem = odometroFinal - odometroInicio;
	
	mediaConsumo = totalQuilometragem / combustivelGasto;
	
	lucroDia = valorRecebidoPassageiros - (combustivelGasto * 6.90);
	
	printf("A media de consumo do dia = %f", mediaConsumo);
	printf("\nO lucro liquido do dia = R$%.2f", lucroDia); 
	
	
	getch();
}
