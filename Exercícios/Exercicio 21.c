#include<stdlib.h>
#include<stdio.h>
	
	//Função principal do programa
	int main(int argc, char const *argv[])
	{
	// Declaração das variáveis
	float p1, p2;
	
	//21° Programa - Fazer um programa para entrar com o valor da primeira nota (P1) e o programa deverá calcular e exibir quanto o aluno precisa tirar na segunda nota (P2) para ser aprovado, sabendo que a média de aprovação é igual a cinco.
	
	//Exibe na tela 
	printf("Calculo da P2, Para Aprovacao: ");
	
	//Solicita entrada de dados para o usuário e grava o valor digitado na variável "p1"
	printf("\nDigite a Nota da Avaliacao P1: ");
	scanf("%f",&p1);
	
	//Calculo da Media
	//media = (p1+p2*2)/3;
	
	//Calculo da nota P2 necessária para aprovação
	p2 = (5*3-p1)/2;
	
	//Exibe o Calculo da Nota da P2
	printf("A Nota Necessaria da P2 Para Aprovacao e: %.2f",p2);
	
	return 0;
	}


