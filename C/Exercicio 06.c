#include<stdlib.h>
#include<stdio.h>
	
	//Fun��o principal do programa
	int main (int argc, char const *argv[])
	
	//6� Programa- Convers�o de D�lar($) em Real(R$)
{
	//Declara��o das Vari�veis
	//v:Valor do D�lar (R$5,25) ; x:qtd. de D�lares; 
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



