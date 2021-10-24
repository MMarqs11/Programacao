#include<stdlib.h>
#include<stdio.h>
	
	//Função principal do programa
	int main(int argc, char const *argv[])
	{
	//Declaração das variáveis
	float n1,n2,n3;
	
	//14° Programa - Entrar via teclado com três valores distintos. Exibir o maior deles.
	
	//Exibe na tela 
	printf("Programa Para Exibir o Maior Numero: ");
	
	//Quebra de linha
	printf("\n");
	
	//Solicita entrada de dados para o usuário e grava o valor digitado na variável "n1"
	printf("Digite o Primeiro Valor: ");
	scanf("%f",&n1);
	
	//Solicita entrada de dados para o usuário e grava o valor digitado na variável "n2"
	printf("Digite o Segundo Valor: ");
	scanf("%f",&n2);
	
	//Solicita entrada de dados para o usuário e grava o valor digitado na variável "n3"
	printf("Digite o Terceiro Valor: ");
	scanf("%f",&n3);
	
	if(n1>n2 && n1>n3){
	    printf("O Maior Valor e: %1.f",n1);
	}
	else if(n2>n1 && n2>n3){
	    printf("O Maior Valor e: %1.f",n2);
	}
	else{
	    printf("O Maior Valor e: %1.f",n3);
	}
	return 0;
}



