#include<stdlib.h>
#include<stdio.h>
	
	//Função principal do programa
	int main(int argc, char const *argv[])
	
	//4° Programa - Média Aritmética de 4 Valores Distintos
{
	//Declaração das variáveis
	int a, b, c, d, media;
	
	//Exibe na tela 
	printf("Calculo da Media Aritmetica Entre 4 valores: ");
	
	//Quebra de linha
	printf("\n");
	
	//Solicita entrada de dados para o usuário e grava o valor digitado na variável "a"
	printf("Digite o Pimeiro Valor: ");
	scanf("%i",&a);
	
	//Solicita entrada de dados para o usuário e grava o valor digitado na variável "b"
	printf("Digite o Segundo Valor: ");
	scanf("%i",&b);
	
	//Solicita entrada de dados para o usuário e grava o valor digitado na variável "c"
	printf("Digite o Terceiro Valor: ");
	scanf("%i",&c);
	
	//Solicita entrada de dados para o usuário e grava o valor digitado na variável "d"
	printf("Digite o Quarto Valor: ");
	scanf("%i",&d);
	
	//Faz a média aritmética dos valores obtidos acima
	media = (a+b+c+d)/4;
	
	//Exibe o resultado final
	printf("A Media Aritmetica e: %i",media);
	
	return 0;
}

