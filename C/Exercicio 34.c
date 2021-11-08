#include<stdlib.h>
#include<stdio.h>
	
	//Função principal do programa
	int main(int argc, char const *argv[])
	{
	//34°Programa - Armazenar dez valores na memória do computador. Após a digitação dos valores, criar uma rotina para ler os valores e achar e exibir o maior deles.
	
	//Declaração das variáveis
	int maior;
	
	//Exibe na tela
	printf("Armazenar Dez Valores e Exibir o Maior");
	
	//Declarando e populando o vetor com 10 posições
	int numeros[10];
	
	//Looping para popular o vetor
	printf("\nDigite os 10 Numeros:\n");
	for (int i=0; i<10; i++){
	    scanf("%i", &numeros[i]);
	}
	printf("O Maior Valor e:\n");
	
	//Encontra o maior valor do vetor
	maior=numeros[0]; //Considerando a posição [0] do vetor como sendo a do maior número
	for (int i=1; i<10; i++){   //Varrendo o vetor
	    if(numeros[i]>maior){  //Se, algum número de outra posição, for maior que o número da posição [0]
	        maior=numeros[i]; //Atribui esse número como sendo o maior
	        }
	    }
	//Exibe o maior valor do vetor
	    printf("%i\n", maior);
	    return 0;
	}
	


