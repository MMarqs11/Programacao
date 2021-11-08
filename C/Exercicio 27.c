#include<stdlib.h>
#include<stdio.h>
	
	//Função principal do programa
	int main(int argc, char const *argv[])
	{
	// Declaração das variáveis
	int num, A, B, res;
	
	//27° Programa  - Entrar via teclado com um valor (X) qualquer. Travar a digitação, no sentido de aceitar somente valores positivos. Solicitar o intervalo que o programa que deverá calcular a tabuada do valor digitado, sendo que o segundo valor (B), deverá ser maior que o primeiro (A), caso contrário, digitar novamente somente o segundo. Após a validação dos dados, exibir a tabuada do valor digitado, no intervalo decrescente, ou seja, a tabuada de X no intervalo de B para A.


	                      
	//Exibe na tela 
	printf("Exibir a Tabuada do Intervalo Definido de Forma Decrescente");
	
	//Solicita entrada de dados para o usuário e grava o valor digitado na variável "num"
	printf("\nDigite um Numero Positivo Para a Tabuada: ");
	scanf("%i",&num);
	
	//Comando While, usado sem intervalos definidos
	while(num<=0){
	printf("Erro!\nApenas Numeros Positivos. Digite Novamente: ");
	scanf("%i",&num);
	}
	
	//Solicita entrada de dados para o usuário e grava o valor digitado na variável "A"
	printf("\nDigite o Inicio do Intervalo da Tabuada: ");
	scanf("%i",&A);
	
	//Solicita entrada de dados para o usuário e grava o valor digitado na variável "B"
	printf("\nDigite o Fim do Intervalo da Tabuada: ");
	scanf("%i",&B);
	
	while(B<A){
	printf("Erro!\nFim do Intervalo Deve Ser Maior que o Inicio. Digite Novamente o Fim do Intervalo: ");
	scanf("%i",&B);    
	}
	
	//Comando for, usado em intervalos definidos
	for (int i=B; i>=A; i=i-1) {
	res = num * i; 
	printf("%i x %i = %i\n", num, i, res);
	}
	return 0;
	}

