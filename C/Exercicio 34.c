#include<stdlib.h>
#include<stdio.h>
	
	//Fun��o principal do programa
	int main(int argc, char const *argv[])
	{
	//34�Programa - Armazenar dez valores na mem�ria do computador. Ap�s a digita��o dos valores, criar uma rotina para ler os valores e achar e exibir o maior deles.
	
	//Declara��o das vari�veis
	int maior;
	
	//Exibe na tela
	printf("Armazenar Dez Valores e Exibir o Maior");
	
	//Declarando e populando o vetor com 10 posi��es
	int numeros[10];
	
	//Looping para popular o vetor
	printf("\nDigite os 10 Numeros:\n");
	for (int i=0; i<10; i++){
	    scanf("%i", &numeros[i]);
	}
	printf("O Maior Valor e:\n");
	
	//Encontra o maior valor do vetor
	maior=numeros[0]; //Considerando a posi��o [0] do vetor como sendo a do maior n�mero
	for (int i=1; i<10; i++){   //Varrendo o vetor
	    if(numeros[i]>maior){  //Se, algum n�mero de outra posi��o, for maior que o n�mero da posi��o [0]
	        maior=numeros[i]; //Atribui esse n�mero como sendo o maior
	        }
	    }
	//Exibe o maior valor do vetor
	    printf("%i\n", maior);
	    return 0;
	}
	


