#include<stdlib.h>
#include<stdio.h>
	
	//Fun��o principal do programa
	int main(int argc, char const *argv[])
	{
	// Declara��o das vari�veis
	float n1,n2;
	
	//11� Programa - Exibir o maior deles, se existir, caso contr�rio, enviar mensagem avisando que os n�meros s�o id�nticos.

	//Exibe na tela 
	printf("Programa Para Exibir o Maior Numero, Se Existir: ");
	
	//Quebra de linha
	printf("\n");
	
	//Solicita entrada de dados para o usu�rio e grava o valor digitado na vari�vel "n1"
	printf("Digite o Primeiro Valor: ");
	scanf("%f",&n1);
	
	//Solicita entrada de dados para o usu�rio e grava o valor digitado na vari�vel "n2"
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


