#include<stdlib.h>
#include<stdio.h>
	
	//Fun��o principal do programa
	int main(int argc, char const *argv[])
	{
	
	//39� Programa - Entrar via teclado com doze valores e armazen�-los em uma matriz de ordem 3x4. Ap�s a digita��o dos valores solicitar uma constante multiplicativa, que dever� multiplicar cada valor matriz e armazenar o resultado na pr�pria matriz, nas posi��es correspondentes.
	
	
	//Declara��o das vari�veis
	int numeros[3][4];
	int cte, res;
	
	//Exibe na tela
	printf("Entrar com 12 Valores em uma Matriz de Ordem 3x4, Multiplicar por uma Constante e Exibir essa Matriz");
	
	printf("\nDigite os Numeros para a Matriz 3x4:\n");
	for(int i=0; i<3; i++){
	    for(int j=0; j<4; j++){
	    scanf("%i", &numeros[i][j]);
	    }
	}
	printf("Digite o Valor da Constante: ");
	scanf("%i",&cte);
	
	printf("Os Numeros Digitados na Matriz 3x4 Multiplicados pela Constante Foram:\n");
	for(int i=0; i<3; i++){
	    for(int j=0; j<4; j++){
	   printf("%i  ", numeros[i][j]*cte);
	    }
	printf("\n");
	}
	return 0;
	}


