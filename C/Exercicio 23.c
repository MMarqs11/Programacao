#include<stdlib.h>
#include<stdio.h>
	
	//Fun��o principal do programa
	int main(int argc, char const *argv[])
	{
	// Declara��o das vari�veis
	int vl1, vl2;
	
    //23� Programa - Entrar com dois valores via teclado, onde o segundo dever� ser maior que o primeiro. Caso contr�rio solicitar novamente apenas o segundo valor.
	                   
	//Exibe na tela 
	printf("Solicitando Dois Valores - 2 Valor > 1 Valor: ");
	
	//Solicita entrada de dados para o usu�rio e grava o valor digitado na vari�vel "v1"
	printf("\nDigite o Primeiro Valor: ");
	scanf("%i",&vl1);
	
	//Solicita entrada de dados para o usu�rio e grava o valor digitado na vari�vel "v2"
	printf("Digite o Segundo Valor: ");
	scanf("%i",&vl2);
	
	while(vl2<=vl1){
	printf("Erro!\nDigite Novamente o Segundo Valor: ");
	scanf("%i",&vl2);
	}
	printf ("Obrigado!");
	
	return 0;
	}

