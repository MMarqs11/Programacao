#include<stdlib.h>
#include<stdio.h>
	
	//Fun��o Principal do Programa
	int main(int argc, char const *argv[])
	{
	// Declara��o das Vari�veis
	int l, area;
	
	// 2� Programa - �rea de Um Quadrado 
	
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
	

