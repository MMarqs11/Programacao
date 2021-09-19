#include<stdlib.h>
#include<stdio.h>
	
	//Função principal do programa
	int main(int argc, char const *argv[])
	{
	// Declaração das variáveis
	float p1, p2, media;
	
	//20° Programa - Fazer um programa para entrar com os valores das notas (P1 e P2) e calcular a média. Exibir a situação final do aluno ("Aprovado ou Reprovado"), sabendo que a média de aprovação é igual a cinco.

	//Exibe na tela 
	printf("Calculo da Media Para Aprovacao(P1 e P2): ");
	
	//Solicita entrada de dados para o usuário e grava o valor digitado na variável "p1"
	printf("\nDigite a Nota da Avaliacao P1: ");
	scanf("%f",&p1);
	
	//Solicita entrada de dados para o usuário e grava o valor digitado na variável "p2"
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

