#include<stdlib.h>
#include<stdio.h>
	
	//Função principal do programa
	int main (int argc, char const *argv[])
	
	//6° Programa- Conversão de Dólar($) em Real(R$)
{
	//Declaração das Variáveis
	//v:Valor do Dólar (R$5,25) ; x:qtd. de Dólares; 
	float vd, qtd, Reais;
	
	//Exibe na tela
	printf("Conversao de Dolares em Reais: ");
	
	//Quebra de linha
	printf("\n");
	
	printf("Digite a Cotacao Atual do Dolar: ");
	scanf("%f",&vd);	
	
	printf("Digite a Quantia de Dolares: ");
	scanf("%f", &qtd);
	
	Reais = vd * qtd;
	
	printf("O valor e R$: %.2f",Reais);
	
	return 0;
}



