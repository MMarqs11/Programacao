#include<stdlib.h>
#include<stdio.h>
	
	//Fun��o principal do programa
	int main(int argc, char const *argv[])
	{
	// Declara��o das vari�veis
	float p1, p2, media;
	
	//20� Programa - Fazer um programa para entrar com os valores das notas (P1 e P2) e calcular a m�dia. Exibir a situa��o final do aluno ("Aprovado ou Reprovado"), sabendo que a m�dia de aprova��o � igual a cinco.

	//Exibe na tela 
	printf("Calculo da Media Para Aprovacao(P1 e P2): ");
	
	//Solicita entrada de dados para o usu�rio e grava o valor digitado na vari�vel "p1"
	printf("\nDigite a Nota da Avaliacao P1: ");
	scanf("%f",&p1);
	
	//Solicita entrada de dados para o usu�rio e grava o valor digitado na vari�vel "p2"
	printf("Digite a Nota da Avaliacao P2: ");
	scanf("%f",&p2);
	
	media = (p1+p2*2)/3;
	
	//Exibe o Calculo da Media
	printf("A Nota Final e: %.2f",media);
	
	if(media >= 5){
	printf("\nAluno Aprovado! :)");
	}
	else{
	printf("\nAluno Reprovado! :(");
	}
	return 0;
	}

