#include<stdlib.h>
#include<stdio.h>
	
	//Função principal do programa
	int main(int argc, char const *argv[])
	{
	//35° Programa - Armazenar vinte valores em um vetor. Após a digitação, entrar com uma constante multiplicativa que deverá multiplicar cada um dos valores do vetor e armazenar o resultado no próprio vetor, na respectiva posição.
	
	
	//Declaração das variáveis
	int cte, res;
	
	//Exibe na tela
	printf("Entrar com 20 Valores em um Vetor, Multiplicar por uma CTE e Exibir o Resultado");
	
	//Declarando e populando o vetor com 20 posições
	int numeros[20];
	
	//Looping para popular o vetor
	printf("\nDigite os 20 Numeros:\n");
	for (int i=0; i<20; i++){
	    scanf("%i", &numeros[i]);
	}
	printf("Digite o Valor da Constante: ");
	scanf("%i", &cte);
	
	//Looping para exibir os novos valores do vetor
	printf("O vetor Multiplicado pela Constante e:\n");
	for (int i=0; i<20; i++){ //Varrendo o vetor
	    res=cte*numeros[i]; //Multiplicando a constante pelo vetor
	    printf("%i\n",res);  //Exibe o resultado da multiplicação da constante pelo vetor
	}
	return 0;
	}

