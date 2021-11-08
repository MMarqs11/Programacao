#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
	
	//Função principal do programa
	int main(int argc, char const *argv[])
	{
	// Declaração das variáveis
	char sexo;
	
	//24° Programa - Entrar via teclado com o sexo de determinado usuário, aceitar somente "F" ou "M" como respostas válidas.
	
	//Exibe na tela 
	printf("Solicitando O Sexo do Usuario");
	
	//Solicita entrada de dados para o usuário e grava o valor digitado na variável "sexo"
	printf("\nDigite o Sexo: ");
	scanf("%s",&sexo);
	
	//toupper - converte em maiusculo e tolower - converte em minúsculo
	while((toupper(sexo)!='F') && (toupper(sexo)!= 'M')){
	printf("Erro!\nSomente F ou M. Digite Novamente!: ");
	scanf("%s",&sexo);
	}
	if(sexo =='m' || sexo =='M'){
	printf("Sexo Masculino");
	}
	else {
	printf("Sexo Feminino");
	}
	
	return 0;
	}

