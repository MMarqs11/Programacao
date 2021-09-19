#include<stdlib.h>
#include<stdio.h>
	
	//Função principal do programa
	int main(int argc, char const *argv[])
	{
	//Declaração das variáveis
	int b, h, area;
	
	//12° Programa - Calcular e exibir a área de um retângulo, a partir dos valores da base e altura que serão digitados. Se a área for maior que 100, exibir a mensagem "Terreno grande".
	
	// Exibe na tela 
	printf("Calculo da Area do Retangulo: ");
	
	//Quebra de linha
	printf("\n");
	
	//Solicita entrada de dados para o usuário e grava o valor digitado na variável "b"
	printf("Digite o Valor da Base: ");
	scanf("%i", &b);
	
	//Solicita entrada de dados para o usuário e grava o valor digitado na variável "h"
	printf("Digite o Valor da Altura: ");
	scanf("%i", &h);
	
	//Faz a multiplicação dos valores obtidos acima
	area = b * h;
	//Exibe o valor da area
	printf("O Valor da Area e: %i",area);
	
	if(area >= 100){
	  printf("\nTerreno Grande!"); 
	}
		
	return 0;
}
	



