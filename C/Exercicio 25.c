#include<stdlib.h>
#include<stdio.h>
	
	//Fun��o principal do programa
	int main(int argc, char const *argv[])
	{
	// Declara��o das vari�veis
	int num, res, cont;
	
	//25� Programa - Exibir a tabuada do n�mero cinco no intervalo de um a dez
	                      
	//Exibe na tela 
	printf("Exibir a Tabuada do Numero Cinco no intervalo de um a Dez");
	
	//Solicita entrada de dados para o usu�rio e grava o valor digitado na vari�vel "num"
	printf("\nDigite o Numero Cinco Para a Tabuada: ");
	scanf("%i",&num);
	
	//Comando While, usado sem intervalos definidos
	while(num!=5){
	printf("Erro!\nApenas o Numero Cinco. Digite Novamente: ");
	scanf("%i",&num);
	}
	
	//Comando for, usado em intervalos definidos
	for (cont=0; cont<=10; cont++) {
	res = num * cont;   
	printf("%i x %i = %i\n", num, cont, res);
	}
	
	return 0;
	}

