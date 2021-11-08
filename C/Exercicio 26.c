#include<stdlib.h>
#include<stdio.h>
	
	
	//Função principal do programa
	int main(int argc, char const *argv[])
	{
	// Declaração das variáveis
	int res, cont, num;
	
	//26° Programa  - Entrar via teclado com um valor qualquer. Travar a digitação, no sentido de aceitar somente valores positivos. Após a digitação, exibir a tabuada do valor solicitado, no intervalo de um a dez.
	                      
	//Exibe na tela 
	printf("Exibir a Tabuada no  Intervalo de um a Dez, Somente de Numeros Positivos");
	
	//Solicita entrada de dados para o usuário e grava o valor digitado na variável "num"
	printf("\nDigite um Bumero Positivo Para a Tabuada: ");
	scanf("%i",&num);
	
	while(num<=0){
	printf("Erro!\nApenas Numeros Positivos. Digite Novamente: ");
	scanf("%i",&num);
	}
	
	cont = 1; 
	while(cont <= 10) {
	res = num * cont;
	printf("%i x %i = %i\n", num, cont, res);
	cont = cont+1;
	}
	
	return 0;
	}

