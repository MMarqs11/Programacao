#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
	
	//Função principal do programa
	int main(int argc, char const *argv[])
	{
	// Declaração das variáveis
	int res, num;
	
	//28° Programa - Exibir a tabuada dos valores de um a vinte, no intervalo de um a dez. Entre as tabuadas, solicitar que o usuário pressione uma tecla.
	                
	do
	{
	system("cls");   
	//Exibe na tela 
	printf("Exibir a Tabuada do 1 ao 20 no Intervalo de 1 A 10");
	printf("\nDigite um Numero do Intervalo:");
	scanf("%i",&num);
	while(num<0 || num>10){
	    printf("Erro!\nApenas Valores do Intervalo. Digite Novamente: ");
	    scanf("%i", &num);
	}
	
	for (int i=0; i<=20; i++)
	{  
	printf("%i x %i = %i\n", num, i, i*num);
	}
	printf("\nDigite 1 para Continuar ou 2 para Sair: ");
	scanf("%i", &res);
	}while(res !=2);
	
	return 0;
	}


