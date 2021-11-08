#include<stdlib.h>
#include<stdio.h>
	
	//Função principal do programa
	int main(int argc, char const *argv[])
	{
	// Declaração das variáveis
	int vl1, vl2;
	
    //23° Programa - Entrar com dois valores via teclado, onde o segundo deverá ser maior que o primeiro. Caso contrário solicitar novamente apenas o segundo valor.
	                   
	//Exibe na tela 
	printf("Solicitando Dois Valores - 2 Valor > 1 Valor: ");
	
	//Solicita entrada de dados para o usuário e grava o valor digitado na variável "v1"
	printf("\nDigite o Primeiro Valor: ");
	scanf("%i",&vl1);
	
	//Solicita entrada de dados para o usuário e grava o valor digitado na variável "v2"
	printf("Digite o Segundo Valor: ");
	scanf("%i",&vl2);
	
	while(vl2<=vl1){
	printf("Erro!\nDigite Novamente o Segundo Valor: ");
	scanf("%i",&vl2);
	}
	printf ("Obrigado!");
	
	return 0;
	}

