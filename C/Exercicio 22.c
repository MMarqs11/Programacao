#include<stdlib.h>
#include<stdio.h>
	
	//Fun��o principal do programa
	int main(int argc, char const *argv[])
	{
	// Declara��o das vari�veis
	int num;
	
	//22� Programa - Criar uma rotina de entrada que aceite somente um valor positivo.
	
	//Exibe na tela 
	printf("Solicitando Numero Positivo: ");
	
	//Solicita entrada de dados para o usu�rio e grava o valor digitado na vari�vel "num"
	printf("\nDigite um Numero Positivo: ");
	scanf("%i",&num);
	
	while(num<=0){
	printf("Erro! Digite Apenas Numeros Positivos. Tente Novamente...");
	scanf("%i",&num);
	}
	printf ("Obrigado!");
	
	return 0;
    }
