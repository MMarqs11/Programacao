#include<stdlib.h>
#include<stdio.h>
	
	//Função principal do programa
	int main(int argc, char const *argv[])
	{
	// Declaração das variáveis
	int A, B, C, m, n, o, p ,q, r;
	
	//17° Programa - Verificar se três valores quaisquer, formam ou não um triângulo retângulo. Lembre-se que o quadrado da hipotenusa é igual a soma dos quadrados dos catetos.

	//Exibe na tela 
	printf("\nPrograma de Verificacao de um Triangulo Retangulo: ");
	
	//Solicita entrada de dados para o usuário e grava o valor digitado na variável "A"
	printf("\nDigite o Valor A: ");
	scanf("%i",&A);
	
	//Solicita entrada de dados para o usuário e grava o valor digitado na variável "B"
	printf("Digite o Valor B: ");
	scanf("%i",&B);
	
	//Solicita entrada de dados para o usuário e grava o valor digitado na variável "C"
	printf("Digite o Valor C: ");
	scanf("%i",&C);
	
	//Satisfazer as condições de existência do triângulo retângulo 
	m = (B*B) + (C*C); 
	n = (A*A) + (C*C); 
	o = (A*A) + (B*B); 
	p = (A*A);
	q = (B*B);
	r = (C*C);
	
	if (m==p || n==q || o==r){
	printf("Triangulo Retangulo");
	}
	else{
	    printf("Valores nao formam um Triangulo Retangulo");
	    return 0;
	   }
	
	return 0;
}


