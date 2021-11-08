#include<stdlib.h>
#include<stdio.h>
	
	//Função principal do programa
	int main(int argc, char const *argv[])
	{
	
	//38° Programa - Armazenar seis valores em uma matriz de ordem 2x3. Apresentar os valores na tela.
	
	//Declaração das variáveis
	int numeros[2][3];
	
	//Exibe na tela
	printf("Armazenar 6 Valores em uma Matriz de Ordem 2x3 e Exibir na Tela");
	
	printf("\nDigite os Numeros para a Matriz 2x3:\n");
	for(int i=0; i<2; i++){
	    for(int j=0; j<3; j++){
	    scanf("%i", &numeros[i][j]);
	    }
	}
	printf("Os Numeros Digitados na Matriz 2x3 Foram:\n");
	for(int i=0; i<2; i++){
	    for(int j=0; j<3; j++){
	    printf("%i ", numeros[i][j]);
	    }
	printf("\n");
	}
	
	return 0;
	}


