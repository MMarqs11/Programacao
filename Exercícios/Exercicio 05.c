#include<stdlib.h>
#include<stdio.h>
	
	//Fun��o principal do programa
	int main (int argc, char const *argv[])
	
	//5� Programa - Convers�o de Graus Celsius Para Fahreinheit
{
	//Declara��o das vari�veis
	float fh, gc;
	
	//Exibe na tela
	printf("Conversao de Graus Celsius em Fahreinheit: ");
	
	//Quebra de linha
	printf("\n");
	
	printf("Digite a Temperatura em Graus Celsius: ");
	scanf("%fh", &gc);
	
	fh = 1.8 * gc + 32;
	
	
	printf("A Temperatura em Fahreinheit e: %.1fh",fh);
	
	return 0;
}


