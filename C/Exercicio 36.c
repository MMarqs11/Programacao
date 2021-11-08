#include<stdlib.h>
#include<stdio.h>
	
	//Função principal do programa
	int main(int argc, char const *argv[])
	{
	//36° Programa - Armazenar vinte valores na memória. Após a digitação, entrar com uma constante multiplicativa que deverá multiplicar cada um dos valores do vetor e armazenar o resultado em outro vetor, porém em posições equivalentes. Exibir os vetores na tela.
	
	//Declaração das variáveis
	int cte;
	
	//Exibe na tela
	printf("Entrar com 20 Valores, Multiplicar por uma CTE e exibir o Resultado no Vetor 2");
	
	//Declarando e populando os vetores com 20 posições
	int v1[20];
	int v2[20];
	
	//Looping para popular o vetor 1
	printf("\nDigite 20 Numeros:\n");
	for (int i=0; i<20; i++){
	    scanf("%i", &v1[i]);
	}
	printf("Digite o Valor da Constante: ");
	scanf("%i", &cte);
	
	//Looping para exibir os valores do vetor 1
	printf("\nExibindo Vetor 1:\n");
	for (int i=0; i<20; i++){
	    printf("%i\n",v1[i]);
	}
	//Looping para exibir os valores do vetor 2
	printf("\nResultado do Vetor 2:\n");
	for (int i=0; i<20; i++){ //Varrendo o vetor 1
	    v2[i] = cte * v1[i]; //Multiplicando a constante pelo vetor 1
	    printf("%i\n",v2[i]);  //Exibe o resultado da multiplicação no vetor 2
	}
	return 0;
	}

