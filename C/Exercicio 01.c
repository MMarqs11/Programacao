#include<stdlib.h>
#include<stdio.h>
	
	//Fun��o principal do programa
	int main (int argc, char const *argv[])
	
	// 1�Programa - �rea De Um Ret�ngulo
	
	{
	//Declara��o das vari�veis
	int b, h, area;
	
	// Exibe na tela 
	printf("Calculo da Area do Retangulo");
	
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
	
	//Exibe o resultado final
	printf("A Area do Retangulo e: %i", area);
	
	return 0;

}
