#include<stdlib.h>
#include<stdio.h>
	
	//Função principal do programa
	int main (int argc, char const *argv[])
	
	//7° Programa - Cálcular Troco De Compras Envolvendo 5 Produtos
{
	//Declaração das variáveis 
	float a, b, c, d, e, soma, valor, troco;
	
	//Exibe na tela
	printf("Calcular o Troco da Compra de 5 produtos: ");
	
	//Quebra de linha
	printf("\n");
	
	printf("Digite o Valor do Produto a: ");
	scanf("%f",&a);
	
	printf("Digite o Valor do Produto b: ");
	scanf("%f", &b);
	
	printf("Digite o Valor do Produto c: ");
	scanf("%f",&c);
	
	printf("Digite o Valor do Produto d: ");
	scanf("%f", &d);

	printf("Digite o Valor do Produto e: ");
	scanf("%f", &e);

	soma = a + b + c + d + e;
	
	printf("Valor Total das Compras R$: %2.f",soma );
	
	printf("\n");
	
	printf("Digite o Valor da Quantia Para o Pagamento: ");
	scanf("%f", &valor);
	
	troco = valor - soma;
	
	printf("O Troco e R$: %.2f",troco);
	
	return 0;
}


