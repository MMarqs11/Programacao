#include<stdlib.h>
#include<stdio.h>
	
	//Função principal do programa
	int main(int argc, char const *argv[])
	
	//8° Programa - Cálculo do IMC (Indice de Massa Corporal)
{
	// Declaração das variáveis
	float ps, at, imc;
	
	//Exibe na tela 
	printf("Calculo do IMC: ");
	
	//Quebra de linha
	printf("\n");
	
	printf("Digite o Valor do Peso em KG: ");
	scanf("%f",&ps);

	printf("Digite o Valor da Altura em M: ");
	scanf("%f",&at);
	
	imc = ps / (at*at);
	
	printf("O IMC e: %.2f",imc);
	
	return 0;
}
	



