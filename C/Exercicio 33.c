#include<stdlib.h>
#include<stdio.h>
	
	//Fun��o principal do programa
	int main(int argc, char const *argv[])
	{
	//33� Programa - Armazenar dez n�meros na mem�ria do computador. Exibir os valores na ordem inversa � da digita��o.
	
	//Exibe na tela
	printf("Armazenar Dez Nunmeros e Exibir na Ordem Inversa");
	
	//Declarando e populando o vetor com 10 posi��es
	int numeros[10];
	
	//Looping para popular o vetor
	printf("\nDigite os 10 Numeros:\n");
	for (int i=0; i<10; i++){
	    scanf("%i", &numeros[i]);
	}
	
	//Looping para exibir os valores do vetor
	printf("Os Numeros Digitados em Forma Inversa Foram:\n");
	for (int i=9; i>=0; i--){
	    printf("%i\n",numeros[i]);
	}
	
	return 0;
	}

