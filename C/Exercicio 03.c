#include<stdlib.h>
#include<stdio.h>

	//Função Principal do Programa
	int main(int argc, char const *argv[])
	
	// 3° Programa - Área De Um Triângulo
{
	//Declaração das Variáveis
	int altura, base, area;
	
	//Exibe na Tela 
	printf("Calculo da Area do Triangulo: ");
	
	//Quebra de Linha
	printf("\n");
	
	printf("Digite o Valor da Base: ");
	scanf("%i", &base);
	
	printf("Digite o Valor da Altura: ");
	scanf("%i", &altura);

	area = (base * altura)/2;

	printf("A Area do Triangulo e: %i",area);
	
	return 0;
}
