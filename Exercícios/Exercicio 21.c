#include<stdlib.h>
#include<stdio.h>
	
	//Fun��o principal do programa
	int main(int argc, char const *argv[])
	{
	// Declara��o das vari�veis
	float p1, p2;
	
	//21� Programa - Fazer um programa para entrar com o valor da primeira nota (P1) e o programa dever� calcular e exibir quanto o aluno precisa tirar na segunda nota (P2) para ser aprovado, sabendo que a m�dia de aprova��o � igual a cinco.
	
	//Exibe na tela 
	printf("Calculo da P2, Para Aprovacao: ");
	
	//Solicita entrada de dados para o usu�rio e grava o valor digitado na vari�vel "p1"
	printf("\nDigite a Nota da Avaliacao P1: ");
	scanf("%f",&p1);
	
	//Calculo da Media
	//media = (p1+p2*2)/3;
	
	//Calculo da nota P2 necess�ria para aprova��o
	p2 = (5*3-p1)/2;
	
	//Exibe o Calculo da Nota da P2
	printf("A Nota Necessaria da P2 Para Aprovacao e: %.2f",p2);
	
	return 0;
	}


