#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
	
	//Fun��o principal do programa
	int main(int argc, char const *argv[])
	{
	// Declara��o das vari�veis
	char sexo;
	
	//24� Programa - Entrar via teclado com o sexo de determinado usu�rio, aceitar somente "F" ou "M" como respostas v�lidas.
	
	//Exibe na tela 
	printf("Solicitando O Sexo do Usuario");
	
	//Solicita entrada de dados para o usu�rio e grava o valor digitado na vari�vel "sexo"
	printf("\nDigite o Sexo: ");
	scanf("%s",&sexo);
	
	//toupper - converte em maiusculo e tolower - converte em min�sculo
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

