#include<stdlib.h>
#include<stdio.h>
	
	//Função principal do programa
	int main(int argc, char const *argv[])
	{
	// Declaração das variáveis
	float n1,n2;
	
	//11° Programa - Exibir o maior deles, se existir, caso contrário, enviar mensagem avisando que os números são idênticos.

	//Exibe na tela 
	printf("Programa Para Exibir o Maior Numero, Se Existir: ");
	
	//Quebra de linha
	printf("\n");
	
	//Solicita entrada de dados para o usuário e grava o valor digitado na variável "n1"
	printf("Digite o Primeiro Valor: ");
	scanf("%f",&n1);
	
	//Solicita entrada de dados para o usuário e grava o valor digitado na variável "n2"
	printf("Digite o Segundo Valor: ");
	scanf("%f",&n2);
	
	if(n1>n2){
	    printf("O Maior Valor e: %1.f",n1);
	}
	else if(n1<n2){
	    printf("O Maior Valor e: %1.f",n2);
	}
	else{
	    printf("Os Numeros Sao Identicos");
	}
	return 0;
}


