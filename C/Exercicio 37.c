#include<stdlib.h>
#include<stdio.h>
	
	
	//Função principal do programa
	int main(int argc, char const *argv[])
	{
	
	//37° Programa -. Armazenar um máximo de 20 valores em um vetor. A quantidade de valores a serem armazenados será escolhida pelo usuário. Enviar mensagem de erro, caso a quantidade de valores escolhida esteja fora da faixa possível e solicitar a quantidade novamente. Após a digitação dos valores, criar uma rotina de consulta, onde o usuário digita um número e o programa exibe em qual posição do vetor este número está localizado. Se o número não for encontrado, enviar mensagem "Valor não encontrado!". Perguntar ao usuário se deseja ou não fazer uma nova consulta, consistir a resposta e encerrar o programa em caso negativo.
	
	//Declaração das variáveis
	int i,res,qtde,cons,valor=0;
	
	//Declaração de variável do tipo ponteiro
	int *numeros;
	
	do
	{
	system("cls");
	//Exibe na tela
	printf("Armazenar um Maximo de 20 Valores e Criar uma Rotina de Consulta Exibindo sua Posicao no Vetor");
	
	printf("\nDigite a Quantidade de Valores: ");
	scanf("%i", &qtde);
	
	//Laço de condição 
	while(qtde>20 || qtde<0){
	printf("Erro!\nFora da Faixa Possivel de Valores. Digite Novamente: ");
	scanf("%i",&qtde);
	}
	// O malloc (memory allocation) reserva blocos na memória e o *ponteiro numeros aponta para lá
	numeros = (int*)malloc(qtde*sizeof(int));
	
	//Looping para popular o vetor
	
	printf("Digite os Numeros:\n");
	for(i=0; i<qtde; i++){
	    scanf("%i", &numeros[i]);
	}
	//Rotina de consulta
	printf("Digite um Numero para Consulta: ");
	scanf("%i", &cons);
	
	//Varrendo o vetor
	for(i=0; i<qtde; i++){ 
	//Se o valor da consulta for igual a algum valor do vetor
	   if (cons==numeros[i]){ 
	       printf("O Numero %i se Encontra na Posicao %i do vetor",cons,i);
	   }
	//Se não for igual a nenhum valor do vetor, acrescenta 1 na variável "valor"
	   else {valor++; 
	   }
	//Qdo "valor" for igual a "qtde", o Looping foi de "0" até "qtde" e não encontrou o valor
	   if(valor==qtde){
	       printf("Valor Nao Encontrado!");
	       valor=0; //Atribui zero a variável valor para nova consulta
	   }
	}
	printf("\nDigite 1 para nova Consulta ou 2 para Sair: ");
	    scanf("%i",&res); 
	}while(res !=2);
	
	return 0;
	}

