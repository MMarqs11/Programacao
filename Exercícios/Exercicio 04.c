#include<stdlib.h>
#include<stdio.h>
	
	//Fun��o principal do programa
	int main(int argc, char const *argv[])
	
	//4� Programa - M�dia Aritm�tica de 4 Valores Distintos
{
	//Declara��o das vari�veis
	int a, b, c, d, media;
	
	//Exibe na tela 
	printf("Calculo da Media Aritmetica Entre 4 valores: ");
	
	//Quebra de linha
	printf("\n");
	
	//Solicita entrada de dados para o usu�rio e grava o valor digitado na vari�vel "a"
	printf("Digite o Pimeiro Valor: ");
	scanf("%i",&a);
	
	//Solicita entrada de dados para o usu�rio e grava o valor digitado na vari�vel "b"
	printf("Digite o Segundo Valor: ");
	scanf("%i",&b);
	
	//Solicita entrada de dados para o usu�rio e grava o valor digitado na vari�vel "c"
	printf("Digite o Terceiro Valor: ");
	scanf("%i",&c);
	
	//Solicita entrada de dados para o usu�rio e grava o valor digitado na vari�vel "d"
	printf("Digite o Quarto Valor: ");
	scanf("%i",&d);
	
	//Faz a m�dia aritm�tica dos valores obtidos acima
	media = (a+b+c+d)/4;
	
	//Exibe o resultado final
	printf("A Media Aritmetica e: %i",media);
	
	return 0;
}

