#include<stdio.h>
#include<stdlib.h>
	
	//Fun��o principal do programa
	int main(int argc, char const *argv[])
	{
	// Declara��o das vari�veis
	float ps,sx,al,feminino,masculino,R;
	
	//18� Programa - Calculo do Peso e Altura de uma pessoa do g�nero Masc ou Fem, para verifica��o de peso ideal. 
	
	//Exibe na tela 
	printf("CALCULO DE PESO IDEAL: ");
	
	//Quebra de linha
	printf("\n");
	
	//Solicita entrada de dados para o usu�rio e grava o valor digitado na vari�vel "ps"
	printf("Digite o Peso: ");
	scanf("%f",&ps);
	
	//Solicita entrada de dados para o usu�rio e grava o valor digitado na vari�vel "al"
	printf("Digite a Altura: ");
	scanf("%f",&al);
	
	//Solicita entrada de dados para o usu�rio e grava o valor digitado na vari�vel "sx"
	printf("Digite o Genero: ");
	scanf("%f",&sx);
	
	R = ps / (al*al);
	
	// Exibe o resultado
	printf("Seu Peso Ideal e de",R);
	
	if(R<=19){
	printf("\nAbaixo do Peso");
	}
	else if(R>19 && R<=24){
	printf("\nPeso ideal");
	}
	
	else if(R>24){
	printf("\nAcima do Peso");
	}           
	
	return 0;
	}


