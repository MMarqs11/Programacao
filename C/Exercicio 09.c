#include<stdlib.h>
#include<stdio.h>
	
	//Função principal do programa
	int main(int argc, char const *argv[])

	//9° Programa - Mostrar O Maior Número
{
	// Declaração das variáveis
	float n1,n2;
	
	//Exibe na tela 
	printf("Programa Para Exibir O Maior Numero: ");
	
	//Quebra de linha
	printf("\n");
	
	printf("Digite o Primeiro Valor: ");
	scanf("%f",&n1);	

	printf("Digite o Segundo Valor: ");
	scanf("%f",&n2);
	
	if(n1>n2){
	    printf("O Maior Numero E: %1.f",n1);
	}
	else{
	    printf("O Maior Numero E: %1.f",n2);
	}
	
	return 0;
}

