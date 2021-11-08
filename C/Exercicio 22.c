#include<stdlib.h>
#include<stdio.h>
	
	//Função principal do programa
	int main(int argc, char const *argv[])
	{
	// Declaração das variáveis
	int num;
	
	//22° Programa - Criar uma rotina de entrada que aceite somente um valor positivo.
	
	//Exibe na tela 
	printf("Solicitando Numero Positivo: ");
	
	//Solicita entrada de dados para o usuário e grava o valor digitado na variável "num"
	printf("\nDigite um Numero Positivo: ");
	scanf("%i",&num);
	
	while(num<=0){
	printf("Erro! Digite Apenas Numeros Positivos. Tente Novamente...");
	scanf("%i",&num);
	}
	printf ("Obrigado!");
	
	return 0;
    }
