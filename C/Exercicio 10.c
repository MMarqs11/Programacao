#include<stdlib.h>
#include<stdio.h>
	
	//Fun��o principal do programa
	int main(int argc, char const *argv[])
	{
	// Declara��o das vari�veis
	float n1,n2;
	
	//10� Programa - Mostrar O Menor N�mero
	
	//Exibe na tela 
	printf("Programa Para Exibir o Menor Numero: ");
	
	//Quebra de linha
	printf("\n");
	
	printf("Digite o Primeiro Valor: ");
	scanf("%f",&n1);
	
	printf("Digite o segundo valor: ");
	scanf("%f",&n2);
	
	if(n1 < n2){
	    printf("O Menor Numero E: %1.f",n1);
	}
	else{
	    printf("O Menor Numero E: %1.f",n2);
	}
	
	return 0;
}



