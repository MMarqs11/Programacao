#include<stdlib.h>
#include<stdio.h>
	
	//Fun��o principal do programa
	int main(int argc, char const *argv[])
	{
	//Declara��o das vari�veis
	int b, h, area;
	
	//12� Programa - Calcular e exibir a �rea de um ret�ngulo, a partir dos valores da base e altura que ser�o digitados. Se a �rea for maior que 100, exibir a mensagem "Terreno grande".
	
	// Exibe na tela 
	printf("Calculo da Area do Retangulo: ");
	
	//Quebra de linha
	printf("\n");
	
	//Solicita entrada de dados para o usu�rio e grava o valor digitado na vari�vel "b"
	printf("Digite o Valor da Base: ");
	scanf("%i", &b);
	
	//Solicita entrada de dados para o usu�rio e grava o valor digitado na vari�vel "h"
	printf("Digite o Valor da Altura: ");
	scanf("%i", &h);
	
	//Faz a multiplica��o dos valores obtidos acima
	area = b * h;
	//Exibe o valor da area
	printf("O Valor da Area e: %i",area);
	
	if(area >= 100){
	  printf("\nTerreno Grande!"); 
	}
		
	return 0;
}
	



