#include<stdlib.h>
#include<stdio.h>
	
	//Função principal do programa
	int main(int argc, char const *argv[])
	{
	// Declaração das variáveis
	float a, V, t, V0;
	
	//19° Programa - Calcular e exibir a velocidade final de automóvel em km/h.
	
	//Exibe na tela 
	printf("Calculo da Velocidade Final de um Automovel: ");
	
	//Solicita entrada de dados para o usuário e grava o valor digitado na variável "a"
	printf("\nDigite a Aceleracao em m/s2: ");
	scanf("%f",&a);
	
	//Solicita entrada de dados para o usuário e grava o valor digitado na variável "V0"
	printf("Digite a Velocidade Inicial em m/s: ");
	scanf("%f",&V0);
	
	//Solicita entrada de dados para o usuário e grava o valor digitado na variável "t"
	printf("Digite o Tempo de Percurso em s: ");
	scanf("%f",&t);
	
	V = V0 + a*t;
	
	// Exibe o resultado
	printf("A Velocidade Final e: %1.f km/h",V );
	
	if(V<=40){
	printf("\nVeiculo Muito Lento");
	}
	else if(V>40 && V<=60){
	printf("\nVelocidade Permitida");
	}
	else if(V>60 && V<=80){
	printf("\nVelocidade de Cruzeiro");
	}
	else if(V>80 && V<=120){
	printf("\nVeiculo Rapido");
	}
	else if(V>120){
	printf("\nVeiculo Muito Rapido");
	}           
	
	return 0;
	}


