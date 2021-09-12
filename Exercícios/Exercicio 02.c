#include<stdlib.h>
#include<stdio.h>
	
	//Função Principal do Programa
	int main(int argc, char const *argv[])
	{
	// Declaração das Variáveis
	int l, area;
	
	// 2° Programa - Área de Um Quadrado 
	
	//Exibe na Tela 
	printf("Calculo da Area do Quadrado: ");
	
	//Quebra de Linha
	printf("\n");
	
	printf("Digite o Valor da Aresta: ");
	scanf("%i",&l);

	area = l*l;
	
	printf("A Area do Quadrado e: %i",area );
	
	return 0;
}
	

