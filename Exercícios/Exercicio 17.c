#include<stdlib.h>
#include<stdio.h>
	
	//Fun��o principal do programa
	int main(int argc, char const *argv[])
	{
	// Declara��o das vari�veis
	int A, B, C, m, n, o, p ,q, r;
	
	//17� Programa - Verificar se tr�s valores quaisquer, formam ou n�o um tri�ngulo ret�ngulo. Lembre-se que o quadrado da hipotenusa � igual a soma dos quadrados dos catetos.

	//Exibe na tela 
	printf("\nPrograma de Verificacao de um Triangulo Retangulo: ");
	
	//Solicita entrada de dados para o usu�rio e grava o valor digitado na vari�vel "A"
	printf("\nDigite o Valor A: ");
	scanf("%i",&A);
	
	//Solicita entrada de dados para o usu�rio e grava o valor digitado na vari�vel "B"
	printf("Digite o Valor B: ");
	scanf("%i",&B);
	
	//Solicita entrada de dados para o usu�rio e grava o valor digitado na vari�vel "C"
	printf("Digite o Valor C: ");
	scanf("%i",&C);
	
	//Satisfazer as condi��es de exist�ncia do tri�ngulo ret�ngulo 
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


