/* Uma loja vende bicicletas com um acr�scimo de 50% sobre o pre�o de custo. Ela paga a cada vendedor 2 sal�rios m�nimos mensais, mais uma comiss�o de 15%
 sobre o pre�o de custo de cada bicicleta vendida.
Desenvolva um algoritmo que leia o valor do sal�rio m�nimo, o pre�o de custo de cada bicicleta e o n�mero de bicicletas vendidas pelo vendedor, calcule e mostre: 
o sal�rio do empregado */

#include <stdio.h>

main(){
	float salarioMinimo, precoCusto, biciVendidas, comissao, salarioEmpregado;
	
	printf("Digite o valor da salario minimo: ");
	scanf("%f", &salarioMinimo);
	
	printf("Digite o preco de custo das bicicletas: ");
	scanf("%f", &precoCusto);
	
	printf("Digite o numero de bicicletas vendidas: ");
	scanf("%f", &biciVendidas);
	
	comissao = precoCusto * 0.15;	
	salarioEmpregado = (salarioMinimo *2) + (comissao * biciVendidas);
	
	printf("O salario do empragado = R$%.2f", salarioEmpregado); 
	
	getch();
}
