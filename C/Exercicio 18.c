#include<stdio.h>
#include<stdlib.h>
	
	//Função principal do programa
	int main(int argc, char const *argv[])
	{
	// Declaração das variáveis
	float ps,sx,al,feminino,masculino,R;
	
	//18° Programa - Calculo do Peso e Altura de uma pessoa do gênero Masc ou Fem, para verificação de peso ideal. 
	
	//Exibe na tela 
	printf("CALCULO DE PESO IDEAL: ");
	
	//Quebra de linha
	printf("\n");
	
	//Solicita entrada de dados para o usuário e grava o valor digitado na variável "ps"
	printf("Digite o Peso: ");
	scanf("%f",&ps);
	
	//Solicita entrada de dados para o usuário e grava o valor digitado na variável "al"
	printf("Digite a Altura: ");
	scanf("%f",&al);
	
	//Solicita entrada de dados para o usuário e grava o valor digitado na variável "sx"
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


